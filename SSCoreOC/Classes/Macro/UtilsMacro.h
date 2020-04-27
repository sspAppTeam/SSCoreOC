//
//  UtilsMacro.h
//  Pods
//
//  Created by ssp on 2020/4/15.
//

#ifndef UtilsMacro_h
#define UtilsMacro_h
#pragma mark - 为空判断
// 是否为空对象
#define ObjectIsNil(__object)  ((nil == __object) || [__object isKindOfClass:[NSNull class]] || [__object isEqual:[NSNull null]])

// 字符串为空
#define StringIsEmpty(__string) ((__string.length == 0) || ObjectIsNil(__string) ||([(__string) isEqualToString:@""])||([(__string) isEqualToString:@"<null>"])||([(__string) isEqualToString:@"null"]) )

// 字符串不为空
#define StringIsNotEmpty(__string)  (!StringIsEmpty(__string))

// 数组为空
#define ArrayIsEmpty(__array) ((ObjectIsNil(__array)) || (__array.count==0))

#pragma mark - 文件路径
// AppCaches 文件夹路径
#define SSCachesDirectory [NSSearchPathForDirectoriesInDomains(NSCachesDirectory, NSUserDomainMask, YES) lastObject]
// App DocumentDirectory 文件夹路径
#define SSDocumentDirectory [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory,NSUserDomainMask, YES) lastObject]

//button点击事件
#define kAddEventDefault(OBJ,SELECTOR)  [OBJ addTarget:self action:@selector(SELECTOR) forControlEvents:UIControlEventTouchUpInside]
//组装String
#define MontageStr(_a,_b)  [NSString stringWithFormat:@"%@/%@",_a,_b]

// 设置图片
#define SSImageNamed(__imageName) [UIImage imageNamed:__imageName]

//  通知中心
#define SSNotificationCenter [NSNotificationCenter defaultCenter]

#pragma mark - 对象
#define APP_DELEGATE ((AppDelegate *)[UIApplication sharedApplication].delegate)



#endif /* UtilsMacro_h */
