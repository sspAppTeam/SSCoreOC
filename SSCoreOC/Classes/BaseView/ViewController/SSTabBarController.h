//
//  SSTabBarController.h
//  AFNetworking
//
//  Created by ssp on 2020/4/26.
//

#import "SSBaseViewController.h"

NS_ASSUME_NONNULL_BEGIN

@interface SSTabBarController : SSBaseViewController<UITabBarControllerDelegate>

/// The `tabBarController` instance
@property (nonatomic, readonly, strong) UITabBarController *tabBarController;

@end

NS_ASSUME_NONNULL_END
