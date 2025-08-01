//
//  MFURLTileLayer.h
//  Map4dMap SDK for iOS
//
//  Copyright (c) 2018 IOTLink LLC.
//

#ifndef MFURLTileLayer_h
#define MFURLTileLayer_h

#import "MFOverlay.h"

@protocol MFTileURLConstructor <NSObject>

- (NSURL* _Nullable) getTileUrlWithX:(NSUInteger)x y:(NSUInteger)y zoom:(NSUInteger)zoom;

@end

@interface MFURLTileLayer : MFOverlay

@property(nonatomic) CGFloat opacity;

+ (instancetype _Nonnull)tileLayerWithURLConstructor:(id<MFTileURLConstructor> _Nonnull)constructor;

- (void) clearTileCache;

@end

#endif /* MFURLTileLayer_h */
