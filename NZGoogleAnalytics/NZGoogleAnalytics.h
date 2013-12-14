//
//  NZGoogleAnalytics.h
//  NZGoogleAnalytics
//
//  Created by Bruno Tortato Furtado on 14/12/13.
//  Copyright (c) 2013 No Zebra Network. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GAI.h"

#ifndef NZ_GA_TRACKINGID
#pragma message("Sets the NZ_GA_TRACKINGID at 'Prefix.pch' to configure Google Analytics Tracking ID.")
#endif

@interface NZGoogleAnalytics : NSObject

- (instancetype) init
__attribute__((unavailable("[-init] is not allowed")));

+ (BOOL)trackUncaughtExceptions;
+ (void)setTrackUncaughtExceptions:(BOOL)trackUncaughtExceptions;

+ (NSTimeInterval)dispatchInterval;
+ (void)setDispatchInterval:(NSTimeInterval)dispatchInterval;

+ (GAILogLevel)logLevel;
+ (void)setLogLevel:(GAILogLevel)logLevel;

@end