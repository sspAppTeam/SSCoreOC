//
//  TestNavigationControllerStack.m
//  SSCoreOC_Example
//
//  Created by ssp on 2020/4/26.
//  Copyright © 2020 SSPSource. All rights reserved.
//

#import "TestNavigationControllerStack.h"
#import "AppDelegate.h"
@implementation TestNavigationControllerStack

-(void)windowRootView:(UIViewController *)viewController{
    [super windowRootView:(UIViewController *)viewController];
    APP_DELEGATE.window.rootViewController = viewController;
}
@end
