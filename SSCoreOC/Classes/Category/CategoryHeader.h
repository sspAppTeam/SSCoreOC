//
//  CategoryHeader.h
//  SSBaseCoreOC_Example
//
//  Created by ssp on 2019/12/10.
//  Copyright © 2019 SSPSource. All rights reserved.
//

#ifndef CategoryHeader_h
#define CategoryHeader_h


#if __has_include(<SSNetWork/SSNetWork.h>)

#import <SSCoreOC/NSObject+SSCurrentVC.h>
#import <SSCoreOC/UIButton+SSContentExtention.h>
#import <SSCoreOC/UIView+GestureBlock.h>
#import <SSCoreOC/UIButton+SDButton.h>
#import <SSCoreOC/NSData+Base64.h>
#import <SSCoreOC/NSDate+Categor.h>
#import <SSCoreOC/NSDateFormatter+Category.h>

#else

#import "NSObject+SSCurrentVC.h"
#import "UIButton+SSContentExtention.h"
#import "UIView+GestureBlock.h"
#import "UIButton+SDButton.h"
#import "NSData+Base64.h"
#import "NSDate+Category.h"
#import "NSDateFormatter+Category.h"

#endif /* __has_include */
#endif /* CategoryHeader_h */
