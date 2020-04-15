//
//  UtilsMacro.h
//  Pods
//
//  Created by ssp on 2020/4/15.
//

#ifndef UtilsMacro_h
#define UtilsMacro_h

// 是否为空对象
#define ObjectIsNil(__object)  ((nil == __object) || [__object isKindOfClass:[NSNull class]] || [__object isEqual:[NSNull null]])

// 字符串为空
#define StringIsEmpty(__string) ((__string.length == 0) || ObjectIsNil(__string) ||([(__string) isEqualToString:@""])||([(__string) isEqualToString:@"null"]) )

// 字符串不为空
#define StringIsNotEmpty(__string)  (!StringIsEmpty(__string))

// 数组为空
#define ArrayIsEmpty(__array) ((ObjectIsNil(__array)) || (__array.count==0))


#endif /* UtilsMacro_h */
