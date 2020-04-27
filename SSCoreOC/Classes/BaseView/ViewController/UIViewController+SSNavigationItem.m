//
//  UIViewController+SSNavigationItem.m
//  SSBaseCoreOC_Example
//
//  Created by ssp on 2019/12/10.
//  Copyright © 2019 SSPSource. All rights reserved.
//

#import "UIViewController+SSNavigationItem.h"


#define kNavItemFont [UIFont systemFontOfSize:14]
@implementation UIViewController (SSNavigationItem)
- (void)setNavigationItemBackItem {
    UIButton *itemBtn = [UIButton buttonWithType:UIButtonTypeCustom];
    itemBtn.frame = CGRectMake(0, 0, 44, 44);

    UIImage *image=[self loadLocalImgResource:@"icon_back"];
   
    [itemBtn setBackgroundColor:[UIColor clearColor]];
    [itemBtn setImage:image forState:UIControlStateNormal];
    [itemBtn setImageEdgeInsets:UIEdgeInsetsMake(0, -5, 0, 5)];
    itemBtn.contentHorizontalAlignment = UIControlContentHorizontalAlignmentLeft;
    [itemBtn addTarget:self action:@selector(popVC) forControlEvents:UIControlEventTouchUpInside];
    UIBarButtonItem *item = [[UIBarButtonItem alloc]initWithCustomView:itemBtn];
    self.navigationItem.leftBarButtonItem = item;
    
    // 注意：此api只能在iOS 11之前的系统生效
    //    UIBarButtonItem * spaceItem = [[UIBarButtonItem alloc]initWithBarButtonSystemItem:UIBarButtonSystemItemFixedSpace target:nil action:nil];
    //    spaceItem.width = -5;
    //    self.navigationItem.leftBarButtonItems = @[spaceItem, item];
}

- (void)setNavigationItemLeftBarButtonItem:(SEL)btnSel withTitle:(NSString *)title withTitleColor:(UIColor *)color {
    UIButton *itemBtn = [UIButton buttonWithType:UIButtonTypeCustom];
    itemBtn.frame = CGRectMake(0, 0, 60, 60);
    [itemBtn setTitle:title forState:UIControlStateNormal];
    [itemBtn setTitleColor:color forState:UIControlStateNormal];
    itemBtn.titleLabel.font = kNavItemFont;
    [itemBtn setTitleEdgeInsets:UIEdgeInsetsMake(0, -5, 0, 5)];
    [itemBtn addTarget:self action:btnSel forControlEvents:UIControlEventTouchUpInside];
    UIBarButtonItem *item = [[UIBarButtonItem alloc]initWithCustomView:itemBtn];
    self.navigationItem.leftBarButtonItem = item;
}

- (void)setNavigationItemLeftBarButtonItem:(SEL)btnSel withImage:(UIImage *)image {
    UIButton *itemBtn = [UIButton buttonWithType:UIButtonTypeCustom];
    itemBtn.frame = CGRectMake(0, 0, 44, 44);
    [itemBtn setImage:image forState:UIControlStateNormal];
    [itemBtn setImageEdgeInsets:UIEdgeInsetsMake(0, -5, 0, 5)];
    itemBtn.contentHorizontalAlignment = UIControlContentHorizontalAlignmentLeft;
    [itemBtn addTarget:self action:btnSel forControlEvents:UIControlEventTouchUpInside];
    UIBarButtonItem *item = [[UIBarButtonItem alloc]initWithCustomView:itemBtn];
    self.navigationItem.leftBarButtonItem = item;
}

- (void)setNavigationItemRightBarButtonItem:(SEL)btnSel withImage:(UIImage *)image {
    UIButton *itemBtn = [UIButton buttonWithType:UIButtonTypeCustom];
    itemBtn.frame = CGRectMake(0, 0, 44, 44);
    [itemBtn setImage:image forState:UIControlStateNormal];
    [itemBtn addTarget:self action:btnSel forControlEvents:UIControlEventTouchUpInside];
    [itemBtn setImageEdgeInsets:UIEdgeInsetsMake(0, 5, 0, -5)];
    itemBtn.contentHorizontalAlignment = UIControlContentHorizontalAlignmentRight;
    UIBarButtonItem *item = [[UIBarButtonItem alloc]initWithCustomView:itemBtn];
    self.navigationItem.rightBarButtonItem = item;
}

- (void)setNavigationItemRightBarButtonItem:(SEL)btnSel withTitle:(NSString *)title withTitleColor:(UIColor *)color {
    UIButton *itemBtn = [UIButton buttonWithType:UIButtonTypeCustom];
    itemBtn.frame = CGRectMake(0, 0, 60, 60);
    [itemBtn setTitle:title forState:UIControlStateNormal];
    [itemBtn setTitleColor:color forState:UIControlStateNormal];
    itemBtn.titleLabel.font = kNavItemFont;
    [itemBtn setTitleEdgeInsets:UIEdgeInsetsMake(0, 5, 0, -5)];
    itemBtn.contentHorizontalAlignment = UIControlContentHorizontalAlignmentRight;
    [itemBtn addTarget:self action:btnSel forControlEvents:UIControlEventTouchUpInside];
    UIBarButtonItem *item = [[UIBarButtonItem alloc]initWithCustomView:itemBtn];
    self.navigationItem.rightBarButtonItem = item;
}

- (void)setNavigationItemRightBarButtonItemsWithLeftSel:(SEL)leftSel leftTitle:(NSString *)title leftTitleColor:(UIColor *)color rightSel:(SEL)rightSel rightImage:(UIImage *)rightImage {
    UIButton *leftBtn = [UIButton buttonWithType:UIButtonTypeCustom];
    leftBtn.frame = CGRectMake(0, 0, 60, 60);
    [leftBtn setTitle:title forState:UIControlStateNormal];
    [leftBtn setTitleColor:color forState:UIControlStateNormal];
    leftBtn.titleLabel.font = kNavItemFont;
    [leftBtn setTitleEdgeInsets:UIEdgeInsetsMake(0, -5, 0, -5)];
    leftBtn.contentHorizontalAlignment = UIControlContentHorizontalAlignmentRight;
    [leftBtn addTarget:self action:leftSel forControlEvents:UIControlEventTouchUpInside];
    UIBarButtonItem *leftItem = [[UIBarButtonItem alloc]initWithCustomView:leftBtn];
    
    UIButton *rightBtn = [UIButton buttonWithType:UIButtonTypeCustom];
    rightBtn.frame = CGRectMake(0, 0, 30, 30);
    [rightBtn setImage:rightImage forState:UIControlStateNormal];
    [rightBtn addTarget:self action:rightSel forControlEvents:UIControlEventTouchUpInside];
    rightBtn.contentHorizontalAlignment = UIControlContentHorizontalAlignmentRight;
    UIBarButtonItem *rightItem = [[UIBarButtonItem alloc]initWithCustomView:rightBtn];
    
    self.navigationItem.rightBarButtonItems = @[rightItem, leftItem];
}

- (void)popVC {
    [self.navigationController popViewControllerAnimated:YES];
}

- (void)dismissVC {
    [self.navigationController dismissViewControllerAnimated:YES completion:nil];
}
//加载图片
-(UIImage*)loadLocalImgResource:(NSString*)imgstr{
    UIImage *img;
    img=[self noUseFrameWorkByBundleMethod:imgstr];
    if (!img) {
        img = [self noUseFrameWorkMethod:imgstr];
        if (!img) {
           img = [self useFrameWorkByBundleMethod:imgstr];
            if (!img) {
                 img = [self useFrameWorkMethod:imgstr];
            }
        }
    }
    return img;
}
#pragma mark - pod图片资源加载注意
//Podfile中未使用use_frameworks!
//s.resource_bundles = {
//  'SSCoreOCImg' => ['SSCoreOC/Assets/*']
//}
//自动创建SSCoreOCImg.bundle
-(UIImage*)noUseFrameWorkByBundleMethod:(NSString *)imgStr{
    UIImage *image;
//    方法一
    NSURL *bundleURL = [[NSBundle mainBundle] URLForResource:@"SSCoreOCImg" withExtension:@"bundle"];
           if (bundleURL) {
               NSBundle *bundle = [NSBundle bundleWithURL:bundleURL];
               NSInteger scale = [[UIScreen mainScreen] scale];
               NSString *imgName = [NSString stringWithFormat:@"%@@%zdx.png", imgStr,scale];
              image = [UIImage imageWithContentsOfFile:[bundle pathForResource:imgName ofType:nil]];
           }
//    方法二
//    NSString *imgName = [NSString stringWithFormat:@"%@/%@", @"SSCoreOCImg.bundle",imgStr];
//    image = [UIImage imageNamed:imgName];
    
    return image;
}
//s.resources = ['HFMyTest/Assets/*']
-(UIImage*)noUseFrameWorkMethod:(NSString *)imgStr{
     UIImage *image;
    image = [UIImage imageNamed:@"icon_back"];
    return image;
}

//Podfile中使用use_frameworks!
//s.resource_bundles = {
//  'SSCoreOCImg' => ['SSCoreOC/Assets/*']
//}
-(UIImage*)useFrameWorkByBundleMethod:(NSString *)imgStr{
    //到指定目录
     UIImage *image;
    NSURL *bundleURL = [[NSBundle mainBundle] URLForResource:@"Frameworks" withExtension:nil];
    bundleURL = [bundleURL URLByAppendingPathComponent:@"SSCoreOC"];
    bundleURL = [bundleURL URLByAppendingPathExtension:@"framework"];
    if (bundleURL) {
        NSBundle *imgBundle = [NSBundle bundleWithURL:bundleURL];
        bundleURL = [imgBundle URLForResource:@"SSCoreOCImg" withExtension:@"bundle"];
        if (bundleURL) {
            NSBundle *bundle = [NSBundle bundleWithURL:bundleURL];
            NSInteger scale = [[UIScreen mainScreen] scale];
            NSString *imgName = [NSString stringWithFormat:@"%@@%zdx.png", imgStr,scale];
           image = [UIImage imageWithContentsOfFile:[bundle pathForResource:imgName ofType:nil]];
        }
    }
    
    return image;
}
//s.resources = ['HFMyTest/Assets/*']
-(UIImage*)useFrameWorkMethod:(NSString *)imgStr{
    //到指定目录
    UIImage *image;
    NSURL *bundleURL = [[NSBundle mainBundle] URLForResource:@"Frameworks" withExtension:nil];
    bundleURL = [bundleURL URLByAppendingPathComponent:@"SSCoreOC"];
    bundleURL = [bundleURL URLByAppendingPathExtension:@"framework"];
    if (bundleURL) {
        NSBundle *bundle = [NSBundle bundleWithURL:bundleURL];
        NSInteger scale = [[UIScreen mainScreen] scale];
        NSString *imgName = [NSString stringWithFormat:@"%@@%zdx.png", imgStr,scale];
       image = [UIImage imageWithContentsOfFile:[bundle pathForResource:imgName ofType:nil]];
    }
    
    return image;
}
@end
