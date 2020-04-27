//
//  SSBaseViewController.h
//  SSBaseCoreOC_Example
//
//  Created by ssp on 2019/12/10.
//  Copyright © 2019 SSPSource. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SSViewModel.h"
#import "UIViewController+SSNavigationItem.h"
typedef NS_ENUM(NSInteger, StatusBarStyle) {
    StatusBarStyleBlack,
    StatusBarStyleWhite
};
NS_ASSUME_NONNULL_BEGIN

@interface SSBaseViewController : UIViewController

/// The `viewModel` parameter in `-initWithViewModel:` method.
@property (nonatomic, readonly, strong) SSViewModel *viewModel;
/// 截图（Push/Pop Present/Dismiss 过度过程中的缩略图）
@property (nonatomic, readwrite, strong) UIView *snapshot;
/**
 统一使用该方法初始化，子类中直接声明对于的'readonly' 的 'viewModel'属性，
 并在@implementation内部加上关键词 '@dynamic viewModel;'
 @dynamic A相当于告诉编译器：“参数A的getter和setter方法并不在此处，
 而在其他地方实现了或者生成了，当你程序运行的时候你就知道了，
 所以别警告我了”这样程序在运行的时候，
 对应参数的getter和setter方法就会在其他地方去寻找，比如父类。
 */
/// Initialization method. This is the preferred way to create a new view.
///
/// viewModel - corresponding view model
///
/// Returns a new view.
- (instancetype)initWithViewModel:(SSViewModel *)viewModel;
/// Binds the corresponding view model to the view.(绑定数据模型)
- (void)bindViewModel;

#pragma mark - UI
/**
 是否隐藏导航左按钮
 */
@property (nonatomic, assign, getter=isLeftBarBtnHidden) BOOL leftBarBtnHidden;

/**
 *  是否显示导航栏的toolbar
 */
@property (nonatomic, assign, getter=isToolbarHidden) BOOL toolbarHidden;


/**
 *  是否显示Navigation bar
 */
@property (nonatomic, assign, getter=isNavigationBarHidden) BOOL navigationBarHidden;


/**
 *  导航栏背景图
 */
@property (nonatomic, strong) UIImage *navigationBarImage;

/**
 *  导航栏背景颜色及状态栏
 */
@property (nonatomic, strong) UIColor *navigationBarColor;


/**
 *  状态栏样式
 */
@property (nonatomic, assign) StatusBarStyle statusBarStyle;


/**
 *  title颜色
 */
@property (nonatomic, strong) UIColor *titleColor;


/**
 *  富文本title，如果设置了则title，titlecolor失效
 */
@property (nonatomic, copy) NSDictionary *titleTextAttributes;
/**
*  ios11后的大标题。只在UITableView，UIScrollView起作用
*/
@property (nonatomic,assign)BOOL isLargeTitles;
@end

NS_ASSUME_NONNULL_END
