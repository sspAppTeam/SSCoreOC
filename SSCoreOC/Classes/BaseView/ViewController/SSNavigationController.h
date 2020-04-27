//
//  SSNavigationController.h
//  AFNetworking
//
//  Created by ssp on 2020/4/26.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface SSNavigationController : UINavigationController
/// 显示导航栏的细线
- (void)showNavigationBottomLine;
/// 隐藏导航栏的细线
- (void)hideNavigationBottomLine;
@end

NS_ASSUME_NONNULL_END
