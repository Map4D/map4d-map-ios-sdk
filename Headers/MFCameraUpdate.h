//
//  MFCameraUpdate.h
//  Map4dMap SDK for iOS
//
//  Copyright (c) 2018 IOTLink LLC.
//

#ifndef MFCameraUpdate_h
#define MFCameraUpdate_h

#import <CoreLocation/CoreLocation.h>
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


@class MFCoordinateBounds;
@class MFCameraPosition;

@interface MFCameraUpdate : NSObject
// Setter
+ (MFCameraUpdate *)fitBounds:(MFCoordinateBounds *)bounds;
+ (MFCameraUpdate *)fitBounds:(MFCoordinateBounds *)bounds withEdgeInsets:(UIEdgeInsets)edgeInsets;

+ (MFCameraUpdate *)setTarget:(CLLocationCoordinate2D)target;
+ (MFCameraUpdate *)setTarget:(CLLocationCoordinate2D)target zoom:(double)zoom;
+ (MFCameraUpdate *)setTarget:(CLLocationCoordinate2D)target zoom:(double)zoom bearing:(double)bearing;
+ (MFCameraUpdate *)setTarget:(CLLocationCoordinate2D)target zoom:(double)zoom padding:(UIEdgeInsets)padding;
+ (MFCameraUpdate *)setTarget:(CLLocationCoordinate2D)target zoom:(double)zoom tilt:(double)tilt;
+ (MFCameraUpdate *)setTarget:(CLLocationCoordinate2D)target zoom:(double)zoom tilt:(double)tilt bearing:(double)bearing;
+ (MFCameraUpdate *)setTarget:(CLLocationCoordinate2D)target zoom:(double)zoom tilt:(double)tilt bearing:(double)bearing padding:(UIEdgeInsets)padding;

+ (MFCameraUpdate *)setCamera:(MFCameraPosition *)camera;
@end

#endif /* MFCameraUpdate_h */
