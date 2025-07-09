//
//  MFMapStyle.h
//  Map4dMap SDK for iOS
//
//  Copyright (c) 2024 IOTLink LLC.
//

#ifndef MFMapStyle_h
#define MFMapStyle_h

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MFMapStyle : NSObject

- (instancetype)init NS_UNAVAILABLE;

/** Creates a style using a string containing JSON. */
- (instancetype)initWithJSONString:(NSString *)style;

/** Creates a style using a string containing JSON. */
+ (instancetype)styleWithJSONString:(NSString *)style NS_SWIFT_UNAVAILABLE("Use initializer instead");

@end

NS_ASSUME_NONNULL_END

#endif /* MFMapStyle_h */
