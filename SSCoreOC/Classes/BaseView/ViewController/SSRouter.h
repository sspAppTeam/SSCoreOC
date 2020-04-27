//
//  SSRouter.h
//  AFNetworking
//
//  Created by ssp on 2020/4/26.
//

#import <Foundation/Foundation.h>
#import "SSBaseViewController.h"
NS_ASSUME_NONNULL_BEGIN

@interface SSRouter : NSObject
/// Retrieves the shared router instance.
///
/// Returns the shared router instance.
+ (instancetype)sharedInstance;

/// Retrieves the view corresponding to the given view model.
///
/// viewModel - The view model
///
/// Returns the view corresponding to the given view model.
- (SSBaseViewController *)viewControllerForViewModel:(SSViewModel *)viewModel;
@end

NS_ASSUME_NONNULL_END
