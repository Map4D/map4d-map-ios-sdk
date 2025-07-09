//
//  MFUISettings.h
//  Map4dMap SDK for iOS
//
//  Copyright (c) 2018 IOTLink LLC.
//

#ifndef MFUISettings_h
#define MFUISettings_h

#import <Foundation/Foundation.h>

@interface MFUISettings : NSObject

@property(nonatomic, assign) BOOL myLocationButton;

@property(nonatomic, assign) BOOL scrollGestures;

@property(nonatomic, assign) BOOL zoomGestures;

@property(nonatomic, assign) BOOL tiltGestures;

@property(nonatomic, assign) BOOL rotateGestures;

- (void)setAllGesturesEnabled:(BOOL)enabled;

@end

#endif /* MFUISettings_h */
