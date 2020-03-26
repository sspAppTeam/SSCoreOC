//
//  SSBaseViewController.m
//  SSBaseCoreOC_Example
//
//  Created by ssp on 2019/12/10.
//  Copyright © 2019 SSPSource. All rights reserved.
//

#import "SSBaseViewController.h"
#import "SSCoreWork.h"
@interface SSBaseViewController ()
@property (nonatomic, getter=isViewAppeared) BOOL viewAppeared;
@end

@implementation SSBaseViewController

#pragma mark - 生命周期
- (void)viewDidLoad {
    [super viewDidLoad];
    [self initialize];
}

- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    self.navigationController.toolbarHidden = self.toolbarHidden;
    self.navigationController.navigationBarHidden = self.navigationBarHidden;
    if (!self.leftBarBtnHidden) {
        [self setNavigationItemBackItem];
    }
    
}

- (void)viewDidAppear:(BOOL)animated {
    [super viewDidAppear:animated];
    self.viewAppeared = YES;
}

- (void)viewWillDisappear:(BOOL)animated {
    [super viewWillDisappear:animated];
    self.viewAppeared = NO;
}

#pragma mark - 基类初始化设置
- (void)initialize {
    self.navigationBarHidden = NO;
    self.toolbarHidden = YES;
    self.titleColor = red_color;
    self.view.backgroundColor = white_color;
//    默认yes 界面的布局是从（0，0）; NO时（0，64开始布局）
//    1.如果主动设置translucent，那translucent就会一直是设置的那个值，除非再次主动设置新值。
//  2如果不主动设置translucent，那translucent的值由backgroundImage决定，backgroundImage透明则为YES，backgroundImage不透明则为NO，如果没有backgroundImage，则一直是默认的YES。
//    最佳实现导航栏效果是设置 通过setBackgroundImage:forBarMetrics: 的方式来设置导航栏背景，以达到控制背景效果的目的
//    self.navigationController.navigationBar.translucent = YES;
    self.navigationBarImage=[UIImage imageWithColor:[UIColor whiteColor]];
    self.navigationController.navigationBar.tintColor=[UIColor whiteColor];
}

- (void)setTitleColor:(UIColor *)titleColor {
    _titleColor = titleColor;
    self.navigationController.navigationBar.titleTextAttributes = @{NSForegroundColorAttributeName:titleColor, NSFontAttributeName: [UIFont systemFontOfSize:18.0f]};
}

- (void)setNavigationBarImage:(UIImage *)navigationBarImage {
    _navigationBarImage = navigationBarImage;
    if (self.isViewLoaded) {
         [self.navigationController.navigationBar setBackgroundImage:_navigationBarImage forBarMetrics:UIBarMetricsDefault];
    }
   
}
-(void)setNavigationBarColor:(UIColor *)navigationBarColor{
    _navigationBarColor=navigationBarColor;
    if (self.isViewLoaded) {
        self.navigationController.navigationBar.barTintColor = _navigationBarColor;
    }
}


- (void)setStatusBarStyle:(StatusBarStyle)statusBarStyle {
    _statusBarStyle = statusBarStyle;
    if (statusBarStyle == StatusBarStyleWhite) {
        [[UIApplication sharedApplication] setStatusBarStyle:UIStatusBarStyleLightContent];
    } else {
        [[UIApplication sharedApplication] setStatusBarStyle:UIStatusBarStyleDefault];
    }
}

- (void)setNavigationBarHidden:(BOOL)navigationBarHidden {
    _navigationBarHidden = navigationBarHidden;
    if (self.isViewLoaded) {
        [self.navigationController setNavigationBarHidden:_navigationBarHidden];
    }
}

- (void)setToolbarHidden:(BOOL)toolbarHidden {
    _toolbarHidden = toolbarHidden;
    if (self.isViewLoaded) {
        [self.navigationController setToolbarHidden:_toolbarHidden];
    }
}
-(void)setIsLargeTitles:(BOOL)isLargeTitles{
    _isLargeTitles=isLargeTitles;
    if (_isLargeTitles) {
        if (@available(iOS 11.0, *)) {
            self.navigationController.navigationBar.prefersLargeTitles = YES;
             self.navigationController.navigationItem.largeTitleDisplayMode =  UINavigationItemLargeTitleDisplayModeAutomatic;
        } 
          
    }
}

- (void)dealloc {
    NSLog(@"123");
    [[NSNotificationCenter defaultCenter] removeObserver:self];
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
