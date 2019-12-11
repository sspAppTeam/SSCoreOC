//
//  SSBaseViewController.h
//  SSBaseCoreOC_Example
//
//  Created by ssp on 2019/12/10.
//  Copyright © 2019 SSPSource. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UIViewController+SSNavigationItem.h"
typedef NS_ENUM(NSInteger, StatusBarStyle) {
    StatusBarStyleBlack,
    StatusBarStyleWhite
};
NS_ASSUME_NONNULL_BEGIN

@interface SSBaseViewController : UIViewController

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
@end

NS_ASSUME_NONNULL_END
