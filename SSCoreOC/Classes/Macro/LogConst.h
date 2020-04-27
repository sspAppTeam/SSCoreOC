//
//  LogConst.h
//  SSBaseCoreOC
//
//  Created by ssp on 2019/12/10.
//  Copyright © 2019 SSPSource. All rights reserved.
//

#ifndef LogConst_h
#define LogConst_h
// 销毁打印
#define SSDealloc NSLog(@"\n =========+++ %@  销毁了 +++======== \n",[self class])
#ifdef DEBUG
#define NSLog(format, ...) fprintf(stderr, "class：%s \nline： %d \nmethod：%s \nmessage：%s \n%s \n",[[[NSString stringWithUTF8String:__FILE__] lastPathComponent] UTF8String],__LINE__, __func__,[[NSString stringWithFormat:format, ##__VA_ARGS__] UTF8String], [@"----------------------------------------------" UTF8String]);
#else
#define NSLog(format, ...)
#endif

#endif /* LogConst_h */
