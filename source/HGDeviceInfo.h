//
//  DeviceInfo.h
//  hongu.347
//
//  Created by DDT on 15/1/7.
//  Copyright (c) 2012年 SUNNET. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface HGDeviceInfo : NSObject

+ (NSString*)getDeviceId;
+ (NSMutableDictionary*)getDeviceInfo;
+ (BOOL)isIOS7OrHigher;
+ (BOOL)isIOS8OrHigher;

@end
