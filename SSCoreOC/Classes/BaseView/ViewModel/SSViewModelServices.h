//
//  SSViewModelServices.h
//  FBSnapshotTestCase
//
//  Created by ssp on 2020/4/24.
//

#import <Foundation/Foundation.h>
#import "MHHTTPService.h"
#import "SSNavigationProtocol.h"
NS_ASSUME_NONNULL_BEGIN

@protocol SSViewModelServices <NSObject,SSNavigationProtocol>
/// A reference to MHHTTPService instance.
/// 全局通过这个Client来请求数据，处理用户信息
@property (nonatomic, readonly, strong) MHHTTPService *client;
@end

NS_ASSUME_NONNULL_END
