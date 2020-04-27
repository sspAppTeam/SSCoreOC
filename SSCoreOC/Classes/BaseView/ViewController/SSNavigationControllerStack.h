//
//  SSNavigationControllerStack.h
//  AFNetworking
//
//  Created by ssp on 2020/4/26.
//
//  `view` 层维护一个 `MHNavigationController` 的堆栈 MHNavigationControllerStack ，不管是 push/pop 还是 present/dismiss ，都使用栈顶的 MHNavigationController 来执行导航操作，且并且保证 present 出来的是一个 MHNavigationController 。
#import <Foundation/Foundation.h>
#import "SSViewModelServices.h"
NS_ASSUME_NONNULL_BEGIN

@interface SSNavigationControllerStack : NSObject
/// Initialization method. This is the preferred way to create a new navigation controller stack.
///
/// services - The service bus of the `Model` layer.
///
/// Returns a new navigation controller stack.
- (instancetype)initWithServices:(id<SSViewModelServices>)services;

/// Pushes the navigation controller.
///
/// navigationController - the navigation controller
- (void)pushNavigationController:(UINavigationController *)navigationController;

/// Pops the top navigation controller in the stack.
///
/// Returns the popped navigation controller.
- (UINavigationController *)popNavigationController;

/// Retrieves the top navigation controller in the stack.
///
/// Returns the top navigation controller in the stack.
- (UINavigationController *)topNavigationController;
- (void)registerNavigationHooks;
-(void)windowRootView:(UIViewController *)viewController;
@end

NS_ASSUME_NONNULL_END
