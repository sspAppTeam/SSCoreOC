//
//  MacroHeader.h
//  SSBaseCoreOC_Example
//
//  Created by ssp on 2019/12/10.
//  Copyright © 2019 SSPSource. All rights reserved.
//

#ifndef MacroHeader_h
#define MacroHeader_h



#if __has_include(<SSCoreOC/MacroHeader.h>)

#import <SSCoreOC/SSConst.h>
#import <SSCoreOC/FontConst.h>
#import <SSCoreOC/ColorConst.h>
#import <SSCoreOC/AdaptConst.h>
#import <SSCoreOC/UtilsMacro.h>
#import <SSCoreOC/LogConst.h>
#else
#import "SSConst.h"
#import "FontConst.h"
#import "ColorConst.h"
#import "LogConst.h"
#import "AdaptConst.h"
#import "UtilsMacro.h"


#endif /* __has_include */


#endif /* MacroHeader_h */
