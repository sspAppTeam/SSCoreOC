//
//  SSConst.h
//  SSBaseCoreOC_Example
//
//  Created by ssp on 2019/12/10.
//  Copyright © 2019 SSPSource. All rights reserved.
//

#ifndef SSConst_h
#define SSConst_h

#define WEAK_SELF __weak typeof(self) weakSelf = self
#define STRONG_SELF __strong typeof(weakSelf) self = weakSelf

//button点击事件
#define kAddEventDefault(OBJ,SELECTOR)  [OBJ addTarget:self action:@selector(SELECTOR) forControlEvents:UIControlEventTouchUpInside]


#ifndef judgeEmpty
#define judgeEmpty
///数组是否为空
#define IsArrEmpty(_ref)    (((_ref) == nil) || ([(_ref) isEqual:[NSNull null]]) ||([(_ref) count] == 0))

///是否为空或是[NSNull null]
#define NotNilAndNull(_ref)  (((_ref) != nil) && (![(_ref) isEqual:[NSNull null]]))

#define IsNilOrNull(_ref)   (((_ref) == nil) || ([(_ref) isEqual:[NSNull null]]))

///字符串是否为空
#define IsStrEmpty(_ref)    (((_ref) == nil) || ([(_ref) isEqual:[NSNull null]]) ||([(_ref)isEqualToString:@""])) ||([(_ref)isEqualToString:@"null"]))

//NSString为空返回
#define StrEmptyReturn(_ref,_message)    if(((_ref) == nil) || ([(_ref) isEqual:[NSNull null]]) ||([(_ref)isEqualToString:@""]) ||([(_ref)isEqualToString:@"null"]))) {[self alertMessage:_message];return;}

//组装String
#define MontageStr(_a,_b)  [NSString stringWithFormat:@"%@/%@",_a,_b]



#define    __STRINGNOTNIL( __x )   (__x?__x:@"")

#endif

#ifndef weakify
#if DEBUG
#if __has_feature(objc_arc)
#define weakify(object) autoreleasepool{} __weak __typeof__(object) weak##_##object = object;
#else
#define weakify(object) autoreleasepool{} __block __typeof__(object) block##_##object = object;
#endif
#else
#if __has_feature(objc_arc)
#define weakify(object) try{} @finally{} {} __weak __typeof__(object) weak##_##object = object;
#else
#define weakify(object) try{} @finally{} {} __block __typeof__(object) block##_##object = object;
#endif
#endif
#endif

#ifndef strongify
#if DEBUG
#if __has_feature(objc_arc)
#define strongify(object) autoreleasepool{} __typeof__(object) object = weak##_##object;
#else
#define strongify(object) autoreleasepool{} __typeof__(object) object = block##_##object;
#endif
#else
#if __has_feature(objc_arc)
#define strongify(object) try{} @finally{} __typeof__(object) object = weak##_##object;
#else
#define strongify(object) try{} @finally{} __typeof__(object) object = block##_##object;
#endif
#endif
#endif

#pragma mark - WeakSelf

#ifndef    weakify_self
#if __has_feature(objc_arc)
#define weakify_self autoreleasepool{} __weak __typeof__(self) weakSelf = self;
#else
#define weakify_self autoreleasepool{} __block __typeof__(self) blockSelf = self;
#endif
#endif

#ifndef    strongify_self
#if __has_feature(objc_arc)
#define strongify_self try{} @finally{} __typeof__(weakSelf) self = weakSelf;
#else
#define strongify_self try{} @finally{} __typeof__(blockSelf) self = blockSelf;
#endif
#endif

#endif /* SSConst_h */
