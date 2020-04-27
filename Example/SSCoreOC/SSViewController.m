//
//  SSViewController.m
//  SSCoreOC
//
//  Created by SSPSource on 12/11/2019.
//  Copyright (c) 2019 SSPSource. All rights reserved.
//

#import "SSViewController.h"
#import "TestVM.h"
@interface SSViewController ()
@property (nonatomic, readwrite, strong) TestVM *viewModel;
@end

@implementation SSViewController
@dynamic viewModel;
- (void)viewDidLoad
{
    [super viewDidLoad];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
