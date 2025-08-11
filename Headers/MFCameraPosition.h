//
//  MFCameraPosition.h
//  Map4dMap SDK for iOS
//
//  Copyright (c) 2018 IOTLink LLC.
//

#ifndef MFCameraPosition_h
#define MFCameraPosition_h
#import <CoreLocation/CoreLocation.h>
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface MFCameraPosition: NSObject

- (instancetype)initWithTarget:(CLLocationCoordinate2D)target zoom:(double)zoom;
- (instancetype)initWithTarget:(CLLocationCoordinate2D)target zoom:(double)zoom bearing:(double)bearing;
- (instancetype)initWithTarget:(CLLocationCoordinate2D)target zoom:(double)zoom padding:(UIEdgeInsets)padding;
- (instancetype)initWithTarget:(CLLocationCoordinate2D)target zoom:(double)zoom tilt:(double)tilt;
- (instancetype)initWithTarget:(CLLocationCoordinate2D)target zoom:(double)zoom tilt:(double)tilt bearing:(double)bearing;
- (instancetype)initWithTarget:(CLLocationCoordinate2D)target zoom:(double)zoom tilt:(double)tilt bearing:(double)bearing padding:(UIEdgeInsets)padding;

@property(nonatomic) CLLocationCoordinate2D target;
@property(nonatomic) double zoom;
@property(nonatomic) double bearing;
@property(nonatomic) double tilt;
@property(nonatomic) UIEdgeInsets padding;

@end

#endif /* MFCameraPosition_h */
