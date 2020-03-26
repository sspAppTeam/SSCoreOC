//
//  UIViewController+SSNavigationItem.h
//  SSBaseCoreOC_Example
//
//  Created by ssp on 2019/12/10.
//  Copyright © 2019 SSPSource. All rights reserved.
//



#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIViewController (SSNavigationItem)
/**
 设置导航栏的通用返回按钮，默认直接执行pop操作
 */
- (void)setNavigationItemBackItem;


/**
 设置导航栏的左按钮
 
 @param btnSel 按钮的点击事件
 @param title 按钮的title
 @param color title的文字颜色
 */
- (void)setNavigationItemLeftBarButtonItem:(SEL)btnSel withTitle:(NSString *)title withTitleColor:(UIColor *)color;


/**
 设置导航栏的左按钮
 
 @param btnSel 按钮的点击事件
 @param image 按钮的图片
 */
- (void)setNavigationItemLeftBarButtonItem:(SEL)btnSel withImage:(UIImage *)image;


/**
 设置导航按钮的右按钮
 
 @param btnSel 按钮的点击事件
 @param image 按钮的图片
 */
- (void)setNavigationItemRightBarButtonItem:(SEL)btnSel withImage:(UIImage *)image;


/**
 设置导航按钮的右按钮
 
 @param btnSel 按钮的点击事件
 @param title 按钮的title
 @param color title的颜色
 */
- (void)setNavigationItemRightBarButtonItem:(SEL)btnSel withTitle:(NSString *)title withTitleColor:(UIColor *)color;


/**
 设置导航栏右侧按钮，右侧出现两个按钮

 @param leftSel 右侧左边的文本按钮
 @param title title
 @param color color
 @param rightSel 右侧的image按钮
 @param image image
 */
- (void)setNavigationItemRightBarButtonItemsWithLeftSel:(SEL)leftSel leftTitle:(NSString *)title leftTitleColor:(UIColor *)color rightSel:(SEL)rightSel rightImage:(UIImage *)image;


/**
 popVC
 */
- (void)popVC;


/**
 dismissVC
 */
- (void)dismissVC;

#pragma mark - 加载图片资源
-(UIImage*)loadLocalImgResource:(NSString*)imgstr;

@end

NS_ASSUME_NONNULL_END
