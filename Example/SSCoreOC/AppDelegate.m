//
//  SSAppDelegate.m
//  SSCoreOC
//
//  Created by SSPSource on 12/11/2019.
//  Copyright (c) 2019 SSPSource. All rights reserved.
//

#import "AppDelegate.h"
#import "SSViewController.h"
#import "TestVM.h"
#import "TestNavigationControllerStack.h"
@interface AppDelegate ()

/// APP管理的导航栏的堆栈
@property (nonatomic, readwrite, strong) TestNavigationControllerStack *navigationControllerStack;
/// APP的服务层
@property (nonatomic, readwrite, strong) SSViewModelServicesImpl *services;

@end
@implementation AppDelegate

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    // Override point for customization after application launch.
    // Config Service
       self.services = [[SSViewModelServicesImpl alloc] init];
       // Config Nav Stack
       self.navigationControllerStack = [[TestNavigationControllerStack alloc] initWithServices:self.services];
    self.window = [[UIWindow alloc]init];
    self.window.frame = [UIScreen mainScreen].bounds;
    self.window.backgroundColor= [UIColor whiteColor];
    [self initRootView];
    [self.window makeKeyAndVisible];
    return YES;
}
#pragma mark- 获取appDelegate
+ (AppDelegate *)sharedDelegate{
    return (AppDelegate *)[[UIApplication sharedApplication] delegate];
}

-(void)initRootView{
     [self.services resetRootViewModel:[self _createInitialViewModel]];
//    SSViewController *VC=[[SSViewController alloc] initWithViewModel:nil];
//    UINavigationController *nav=[[UINavigationController alloc] initWithRootViewController:VC];
//    self.window.rootViewController=nav;
}
#pragma mark - 创建根控制器
- (SSViewModel *)_createInitialViewModel {
    
    return [[TestVM alloc] initWithServices:self.services params:nil];
//    // The user has logged-in.
//    NSString *version = [[NSUserDefaults standardUserDefaults] valueForKey:MHApplicationVersionKey];
//    /// 版本不一样就先走 新特性界面
//    if (![version isEqualToString:MH_APP_VERSION]){
//        return [[MHNewFeatureViewModel alloc] initWithServices:self.services params:nil];
//    }else{
//        /// 这里判断一下
//        if ([SAMKeychain rawLogin] && self.services.client.currentUser) {
//            /// 有账号+有用户数据
//            /// 已经登录，跳转到主页
//            return [[MHHomePageViewModel alloc] initWithServices:self.services params:nil];
//        }else if(self.services.client.currentUser){ /// 没账号+有用户数据
//            /// 跳转到账户登录页面
//            return [[MHAccountLoginViewModel alloc] initWithServices:self.services params:nil];
//        }else{
//            /// 第一次使用微信
//            return [[MHBootLoginViewModel alloc] initWithServices:self.services params:nil];
//        }
//    }
}
- (void)applicationWillResignActive:(UIApplication *)application
{
    // Sent when the application is about to move from active to inactive state. This can occur for certain types of temporary interruptions (such as an incoming phone call or SMS message) or when the user quits the application and it begins the transition to the background state.
    // Use this method to pause ongoing tasks, disable timers, and throttle down OpenGL ES frame rates. Games should use this method to pause the game.
}

- (void)applicationDidEnterBackground:(UIApplication *)application
{
    // Use this method to release shared resources, save user data, invalidate timers, and store enough application state information to restore your application to its current state in case it is terminated later.
    // If your application supports background execution, this method is called instead of applicationWillTerminate: when the user quits.
}

- (void)applicationWillEnterForeground:(UIApplication *)application
{
    // Called as part of the transition from the background to the inactive state; here you can undo many of the changes made on entering the background.
}

- (void)applicationDidBecomeActive:(UIApplication *)application
{
    // Restart any tasks that were paused (or not yet started) while the application was inactive. If the application was previously in the background, optionally refresh the user interface.
}

- (void)applicationWillTerminate:(UIApplication *)application
{
    // Called when the application is about to terminate. Save data if appropriate. See also applicationDidEnterBackground:.
}

@end
