//
//  MFMapView+Animation.h
//  Map4dMap SDK for iOS
//
//  Copyright (c) 2018 IOTLink LLC.
//

#ifndef MFMapView_Animation_h
#define MFMapView_Animation_h
#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "MFCameraUpdate.h"
#import "MFCameraPosition.h"
#import "MFMapView.h"

@interface MFMapView (Animation)

  // Animation
  - (void) animateCamera:(MFCameraUpdate *) cameraUpdate;
  - (void) moveCamera: (MFCameraUpdate* ) cameraUpdate;
@end


#endif /* MFMapView_Animation_h */
