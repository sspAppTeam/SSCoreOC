//
//  ColorConst.h
//  SSBaseCoreOC_Example
//
//  Created by ssp on 2019/12/10.
//  Copyright © 2019 SSPSource. All rights reserved.
//
#import <ReactiveObjC/ReactiveObjC.h>
#ifndef ColorConst_h
#define ColorConst_h


/// 根据hex 获取颜色
#define MHColorFromHexString(__hexString__) ([UIColor colorFromHexString:__hexString__])

#define RGB(r, g, b) [UIColor colorWithRed:((r) / 255.0) green:((g) / 255.0) blue:((b) / 255.0) alpha:1.0]
#define RGBAlpha(r, g, b, a) [UIColor colorWithRed:((r) / 255.0) green:((g) / 255.0) blue:((b) / 255.0) alpha:(a)]

#define HexRGB(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]
#define HexRGBAlpha(rgbValue, a) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:(a)]

#define RandomColor RGB(arc4random_uniform(255), arc4random_uniform(255), arc4random_uniform(255))


/// 整个应用的视图的背景色 BackgroundColor
#define MH_MAIN_BACKGROUNDCOLOR [UIColor colorFromHexString:@"#EFEFF4"]
/// 整个应用的分割线颜色
#define MH_MAIN_LINE_COLOR_1 [UIColor colorFromHexString:@"#D9D8D9"]

/// 文字颜色
/// #56585f
#define MH_MAIN_TEXT_COLOR_1 [UIColor colorFromHexString:@"#B2B2B2"]
/// #9CA1B2
#define MH_MAIN_TEXT_COLOR_2 [UIColor colorFromHexString:@"#20DB1F"]
/// #FE583E
#define MH_MAIN_TEXT_COLOR_3 [UIColor colorFromHexString:@"#FE583E"]
/// #0ECCCA
#define MH_MAIN_TEXT_COLOR_4 [UIColor colorFromHexString:@"#0ECCCA"]
/// #3C3E44
#define MH_MAIN_TEXT_COLOR_5 [UIColor colorFromHexString:@"#3C3E44"]

/// 常用颜色
#define red_color       [UIColor redColor]
#define black_color     [UIColor blackColor]
#define blue_color      [UIColor blueColor]
#define brown_color     [UIColor brownColor]
#define clear_color     [UIColor clearColor]
#define darkGray_color  [UIColor darkGrayColor]
#define darkText_color  [UIColor darkTextColor]
#define white_color     [UIColor whiteColor]
#define yellow_color    [UIColor yellowColor]
#define orange_color    [UIColor orangeColor]
#define purple_color    [UIColor purpleColor]
#define lightText_color [UIColor lightTextColor]
#define lightGray_color [UIColor lightGrayColor]
#define green_color     [UIColor greenColor]
#define gray_color      [UIColor grayColor]
#define magenta_color   [UIColor magentaColor]

/// 设计规范
#define bgColor HexRGB(0xFAF9F9)
#define sepLineColor HexRGB(0xEEEEEE)
#define themeColor  HexRGB(0xFF4B4A)
#define textGrayColor HexRGB(0x999999)
#define textDarkGrayColor HexRGB(0x666666)
#define textBlackColor HexRGB(0x434343)
#define placeHolderColor HexRGB(0xcfcfcf)

#endif /* ColorConst_h */
