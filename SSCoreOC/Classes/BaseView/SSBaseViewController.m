//
//  SSBaseViewController.m
//  SSBaseCoreOC_Example
//
//  Created by ssp on 2019/12/10.
//  Copyright © 2019 SSPSource. All rights reserved.
//

#import "SSBaseViewController.h"
//#import "MacroHeader.h"
@interface SSBaseViewController ()
@property (nonatomic, getter=isViewAppeared) BOOL viewAppeared;
@end

@implementation SSBaseViewController


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
//    self.titleColor = red_color;
//    self.view.backgroundColor = white_color;
    self.navigationController.navigationBar.translucent = NO;
    self.navigationController.navigationBar.tintColor = [UIColor whiteColor];
}

- (void)setTitleColor:(UIColor *)titleColor {
    _titleColor = titleColor;
    self.navigationController.navigationBar.titleTextAttributes = @{NSForegroundColorAttributeName:titleColor, NSFontAttributeName: [UIFont systemFontOfSize:18.0f]};
}

- (void)setNavigationBarImage:(UIImage *)navigationBarImage {
    _navigationBarImage = navigationBarImage;
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

- (void)dealloc {
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
