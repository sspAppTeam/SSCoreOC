//
//  SSViewModelServicesImpl.m
//  FBSnapshotTestCase
//
//  Created by ssp on 2020/4/24.
//

#import "SSViewModelServicesImpl.h"

@implementation SSViewModelServicesImpl
@synthesize client = _client;
- (instancetype)init
{
    self = [super init];
    if (self) {
         _client = [MHHTTPService sharedInstance];
    }
    return self;
}

@end
