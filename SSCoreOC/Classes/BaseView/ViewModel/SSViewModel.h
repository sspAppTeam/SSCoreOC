//
//  SSViewModel.h
//  FBSnapshotTestCase
//
//  Created by ssp on 2020/4/23.
//

#import <Foundation/Foundation.h>
#import <ReactiveObjC/ReactiveObjC.h>
NS_ASSUME_NONNULL_BEGIN
/// 传递导航栏title的key：例如 导航栏的title...
FOUNDATION_EXTERN NSString *const SSViewModelTitleKey;
@protocol SSViewModelServices;
@interface SSViewModel : NSObject
/// Initialization method. This is the preferred way to create a new view model.
///
/// services - The service bus of the `Model` layer.
/// params   - The parameters to be passed to view model.
///
/// Returns a new view model.
- (instancetype)initWithServices:(id<SSViewModelServices>)services params:(NSDictionary *)params;
/// The `services` parameter in `-initWithServices:params:` method.
@property (nonatomic, readonly, strong) id<SSViewModelServices> services;

/// The `params` parameter in `-initWithParams:` method.
/// The `params` Key's `kBaseViewModelParamsKey`
@property (nonatomic, readonly, copy) NSDictionary *params;
/// navItem.title
@property (nonatomic, readwrite, copy) NSString *title;
/// 返回按钮的title，default is nil 。
/// 如果设置了该值，那么当Push到一个新的控制器,则导航栏左侧返回按钮的title为backTitle
@property (nonatomic, readwrite, copy) NSString *backTitle;
/// A RACSubject object, which representing all errors occurred in view model.
@property (nonatomic, readonly, strong) RACSubject *errors;
/// will disappear signal
@property (nonatomic, strong, readonly) RACSubject *willDisappearSignal;
/** should request data when viewController videwDidLoad . default is YES*/
/** 是否需要在控制器viewDidLoad */
@property (nonatomic, readwrite, assign) BOOL shouldRequestRemoteDataOnViewDidLoad;
/// FDFullscreenPopGesture
/// Whether the interactive pop gesture is disabled when contained in a navigation
/// stack. (是否取消掉左滑pop到上一层的功能（栈底控制器无效），默认为NO，不取消)
@property (nonatomic, readwrite, assign) BOOL interactivePopDisabled;
/// Indicate this view controller prefers its navigation bar hidden or not,
/// checked when view controller based navigation bar's appearance is enabled.
/// Default to NO, bars are more likely to show.
/// 是否隐藏该控制器的导航栏 默认是不隐藏 (NO)
@property (nonatomic, readwrite, assign) BOOL prefersNavigationBarHidden;
/// 是否隐藏该控制器的导航栏底部的分割线 默认不隐藏 （NO）
@property (nonatomic, readwrite, assign) BOOL prefersNavigationBarBottomLineHidden;
/// IQKeyboardManager
/// 是否让IQKeyboardManager的管理键盘的事件 默认是YES（键盘管理）
@property (nonatomic, readwrite, assign) BOOL keyboardEnable;
/// 是否键盘弹起的时候，点击其他局域键盘弹起 默认是 YES
@property (nonatomic, readwrite, assign) BOOL shouldResignOnTouchOutside;
/// To set keyboard distance from textField. can't be less than zero. Default is 10.0.
/// keyboardDistanceFromTextField
@property (nonatomic, readwrite, assign) CGFloat keyboardDistanceFromTextField;
/// An additional method, in which you can initialize data, RACCommand etc.
///
/// This method will be execute after the execution of `-initWithParams:` method. But
/// the premise is that you need to inherit `BaseViewModel`.
- (void)initialize;
@end

NS_ASSUME_NONNULL_END
