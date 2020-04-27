//
//  BaseViewWork.h
//  Pods
//
//  Created by ssp on 2020/3/7.
//

#ifndef BaseViewWork_h
#define BaseViewWork_h



#if __has_include(<SSCoreOC/BaseViewWork.h>)

#import <SSCoreOC/UIViewController+SSNavigationItem.h>

//model
#import <SSCoreOC/SSBaseModel.h>
//view
//VC
#import <SSCoreOC/UIViewController+SSNavigationItem.h>
#import <SSCoreOC/SSNavigationControllerStack.h>
#import <SSCoreOC/SSNavigationController.h>
#import <SSCoreOC/SSBaseViewController.h>
#import <SSCoreOC/SSRouter.h>
#import <SSCoreOC/SSBaseTableViewController.h>
#import <SSCoreOC/SSTabBarController.h>
//VM
#import <SSCoreOC/SSViewModel.h>
#import <SSCoreOC/SSTableVM.h>
#import <SSCoreOC/SSViewModelServicesImpl.h>

#else

//model
#import "SSBaseModel.h"
//view

//VC
#import "UIViewController+SSNavigationItem.h"
#import "SSNavigationControllerStack.h"
#import "SSNavigationController.h"
#import "SSBaseViewController.h"
#import "SSRouter.h"
#import "SSBaseTableViewController.h"
#import "SSTabBarController.h"
//VM
#import "SSViewModel.h"
#import "SSTableVM.h"
#import "SSViewModelServicesImpl.h"

//#import ".h"
//#import ".h"
//#import ".h"
//#import ".h"
//#import ".h"
//#import ".h"
//#import <SSCoreOC/.h>
//#import <SSCoreOC/.h>
//#import <SSCoreOC/.h>
//#import <SSCoreOC/.h>





//baseview


#endif /* __has_include */


#endif /* BaseViewWork_h */
