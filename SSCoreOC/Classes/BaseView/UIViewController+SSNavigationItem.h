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
//加载资源文件有两种方式
//s.resources = 'xxx/xxx/x.png'（下面我们称之为1方式）
//s.resource_boudles = {
//'xxx' => ['xxx/xxx/.png']
//} ；（2方式）
//主要1方式会复制资源文件到目标工程，2方式会建立对应的bundle，把资源文件放进bundle里；但是他们还和pod集成方式有关即use_frameworks! 以什么方式集成（一般情况下swift必须以动态库的方式集成，Objc以静态库的方式集成）下面说明动态库集成和非动态库集成对于两种方式加载资源文件的影响。
//用非use_frameworks!的方式集成
//用当前方式集成的三方库为静态库；如果用1中方式加载的话，会将资源文件拷贝到目标文件，用2方式会在目标根目录生成对应bundle，资源文件放在bundle里；
//用use_frameworks!的方式集成
//用1方式加载，会在根目录生成对应的三方库.framework,资源问价会拷贝到此目录下。
//用2方式加载， 会在三方库.framework 中生成对应bundle文件，资源文件放在bundle里。
//两种方式对于use_frameworks!和非use_frameworks!的加载其实方式一样，但是注意根目录不一样。

-(UIImage*)loadLocalImgResource:(NSString*)imgstr;

@end

NS_ASSUME_NONNULL_END
