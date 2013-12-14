//
//  NZMiddleViewController.m
//  NZGoogleAnalytics
//
//  Created by Bruno Tortato Furtado on 14/12/13.
//  Copyright (c) 2013 No Zebra Network. All rights reserved.
//

#import "NZMiddleViewController.h"
#import "NZGoogleAnalyticsTracker.h"

@implementation NZMiddleViewController

- (void)viewDidAppear:(BOOL)animated
{
    [super viewDidAppear:animated];
    [NZGoogleAnalyticsTracker trackViewWithController:self withIdentifier:@"id-001"];
}

@end