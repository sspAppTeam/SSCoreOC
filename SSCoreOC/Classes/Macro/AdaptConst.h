//
//  AdaptConst.h
//  SSBaseCoreOC_Example
//
//  Created by ssp on 2019/12/10.
//  Copyright © 2019 SSPSource. All rights reserved.
//

#ifndef AdaptConst_h
#define AdaptConst_h

//状态栏高度
#define STATUSBAR_HEIGHT [[UIApplication sharedApplication] statusBarFrame].size.height
//状态栏高度+导航栏高度
#define NavAndStatusHight  (self.navigationController.navigationBar.frame.size.height+[[UIApplication sharedApplication] statusBarFrame].size.height)

//屏幕尺寸
#define SCREENFRAME [[UIScreen mainScreen] bounds]  // 当前屏幕frmae
#define SCREENWIDTH SCREENFRAME.size.width          // 当前屏幕宽度
#define SCREENHEIGHT SCREENFRAME.size.height        // 当前屏幕高度

/** 设备是否为iPhone 4/4S 分辨率320x480，像素640x960，@2x */
#define iPhone4Size ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 960), [[UIScreen mainScreen] currentMode].size) : NO)

/** 设备是否为iPhone 5C/5/5S 分辨率320x568，像素640x1136，@2x */
#define iPhone5Size ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 1136), [[UIScreen mainScreen] currentMode].size) : NO)

/** 设备是否为iPhone 6 分辨率375x667，像素750x1334，@2x */
#define iPhone6Size ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(750, 1334), [[UIScreen mainScreen] currentMode].size) : NO)

/** 设备是否为iPhone 6 Plus 分辨率414x736，像素1242x2208，@3x */
#define iPhone6PSize ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1242, 2208), [[UIScreen mainScreen] currentMode].size) : NO)
/** 设备是否为iPhoneX 分辨率375x（812），像素1125x2436，@3x */
//导航 44 88，tab 34，68 safe 734
#define isiPhoneX ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1125, 2436), [[UIScreen mainScreen] currentMode].size) : NO)


#define IOS7_OR_LATER   ( [[[UIDevice currentDevice] systemVersion] compare:@"7.0"] != NSOrderedAscending )
#define IOS8_OR_LATER   ( [[[UIDevice currentDevice] systemVersion] compare:@"8.0"] != NSOrderedAscending )
#define IOS9_OR_LATER   ( [[[UIDevice currentDevice] systemVersion] compare:@"9.0"] != NSOrderedAscending )
#define IOS10_OR_LATER   ( [[[UIDevice currentDevice] systemVersion] compare:@"10.0"] != NSOrderedAscending )
#define IOS11_OR_LATER   ( [[[UIDevice currentDevice] systemVersion] compare:@"11.0"] != NSOrderedAscending)

#endif /* AdaptConst_h */
