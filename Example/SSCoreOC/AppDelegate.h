//
//  SSAppDelegate.h
//  SSCoreOC
//
//  Created by SSPSource on 12/11/2019.
//  Copyright (c) 2019 SSPSource. All rights reserved.
//
#import <SSCoreOC/SSCoreWork.h>
@import UIKit;
@interface AppDelegate : UIResponder <UIApplicationDelegate>
@property (strong, nonatomic) UIWindow *window;
/// APP管理的导航栏的堆栈
@property (nonatomic, readonly, strong) SSNavigationControllerStack *navigationControllerStack;
+ (AppDelegate *)sharedDelegate;
@end
