//
//  MFMapID.h
//  Map4dMap SDK for iOS
//
//  Copyright (c) 2022 IOTLink LLC.
//

#ifndef MFMapID_h
#define MFMapID_h

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/** An opaque identifier for a custom map configuration. */
@interface MFMapID : NSObject

- (instancetype)init NS_UNAVAILABLE;

/** Creates a new mapID with the given string value. */
- (instancetype)initWithIdentifier:(NSString *)identifier NS_DESIGNATED_INITIALIZER;

/** Creates a new mapID with the given string value. */
+ (instancetype)mapIDWithIdentifier:(NSString *)identifier NS_SWIFT_UNAVAILABLE("Use initializer instead");

@end

NS_ASSUME_NONNULL_END


#endif /* MFMapID_h */
