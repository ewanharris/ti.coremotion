/**
 * Ti.CoreMotion
 *
 * Created by Hans Knoechel
 * Copyright (c) 2015 Appcelerator, Inc. All rights reserved.
 */

#import "TiModule.h"
#import <CoreMotion/CoreMotion.h>
#import <Foundation/Foundation.h>

@interface CMHelper : NSObject

+ (NSDictionary *)dictionaryFromAccelerometerData:(CMAccelerometerData *)accelerometerData;

+ (NSDictionary *)dictionaryFromGyroData:(CMGyroData *)gyroData;

+ (NSDictionary *)dictionaryFromMagnetometerData:(CMMagnetometerData *)magnetometerData;

+ (NSDictionary *)dictionaryFromDeviceMotion:(CMDeviceMotion *)deviceMotion;

+ (NSDictionary *)dictionaryFromMotionActivity:(CMMotionActivity *)motionActivity;

+ (NSDictionary *)dictionaryFromPedometerData:(CMPedometerData *)pedometerData;

+ (NSDictionary *)dictionaryFromAltitudeData:(CMAltitudeData *)altitudeData;

+ (NSDictionary *)dictionaryWithError:(NSError *)error andDictionary:(NSDictionary *)eventDict;

+ (NSMutableArray *)arrayFromMotionActivities:(NSArray *)array;

+ (double)millisecondsToSeconds:(double)milliSeconds;

+ (double)intervalToMilliseconds:(NSTimeInterval)interval;

+ (void)logDeprecatedMethod:(NSString *)method withNewMethod:(NSString *)newMethod;

@end
