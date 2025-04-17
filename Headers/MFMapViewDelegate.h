//
//  MFMapViewDelegate.h
//  Map4dMap SDK for iOS
//
//  Copyright (c) 2018 IOTLink LLC.
//

#ifndef MFMapViewDelegate_h
#define MFMapViewDelegate_h

#import <CoreLocation/CoreLocation.h>
#import <UIKit/UIKit.h>

@class MFMapView;
@class MFMarker;
@class MFCameraPosition;
@class MFBuilding;
@class MFPOI;
@class MFPolyline;
@class MFPolygon;
@class MFCircle;
@class MFDirectionsRenderer;
@class MFGeoJSON;
@class MFGeoJSONFeature;
@class MFDataSourceFeature;

@protocol MFMapViewDelegate <NSObject>

@optional

/** Called after a marker has been tapped. */
- (BOOL)mapView:(MFMapView *)mapView didTapMarker:(MFMarker *)marker;
- (BOOL)mapview:(MFMapView *)mapView didTapMarker:(MFMarker *)marker DEPRECATED_MSG_ATTRIBUTE("Use mapView:didTapMarker: instead.");


/** Called when dragging has been initiated on a marker. */
- (void)mapView:(MFMapView *)mapView didBeginDraggingMarker:(MFMarker *)marker;
- (void)mapview:(MFMapView *)mapView didBeginDraggingMarker:(MFMarker *)marker DEPRECATED_MSG_ATTRIBUTE("Use mapView:didBeginDraggingMarker: instead.");


/** Called after dragging of a marker ended. */
- (void)mapView:(MFMapView *)mapView didEndDraggingMarker:(MFMarker *)marker;
- (void)mapview:(MFMapView *)mapView didEndDraggingMarker:(MFMarker *)marker DEPRECATED_MSG_ATTRIBUTE("Use mapView:didEndDraggingMarker: instead.");


/** Called while a marker is dragged. */
- (void)mapView:(MFMapView *)mapView didDragMarker:(MFMarker *)marker;
- (void)mapview:(MFMapView *)mapView didDragMarker:(MFMarker *)marker DEPRECATED_MSG_ATTRIBUTE("Use mapView:didDragMarker: instead.");


/** Called after a marker's info window has been tapped. */
- (void)mapView:(MFMapView *)mapView didTapInfoWindowOfMarker:(MFMarker *)marker;
- (void)mapview:(MFMapView *)mapView didTapInfoWindowOfMarker:(MFMarker *)marker DEPRECATED_MSG_ATTRIBUTE("Use mapView:didTapInfoWindowOfMarker: instead.");



/** Called after a polyline has been tapped. */
- (void)mapView:(MFMapView *)mapView didTapPolyline:(MFPolyline *)polyline;
- (void)mapview:(MFMapView *)mapView didTapPolyline:(MFPolyline *)polyline DEPRECATED_MSG_ATTRIBUTE("Use mapView:didTapPolyline: instead.");


/** Called after a polygon has been tapped. */
- (void)mapView:(MFMapView *)mapView didTapPolygon:(MFPolygon *)polygon;
- (void)mapview:(MFMapView *)mapView didTapPolygon:(MFPolygon *)polygon DEPRECATED_MSG_ATTRIBUTE("Use mapView:didTapPolygon: instead.");


/** Called after a circle has been tapped. */
- (void)mapView:(MFMapView *)mapView didTapCircle:(MFCircle *)circle;
- (void)mapview:(MFMapView *)mapView didTapCircle:(MFCircle *)circle DEPRECATED_MSG_ATTRIBUTE("Use mapView:didTapCircle: instead.");


/** Called before the camera on the map changes, either due to a gesture, animation, ... .*/
- (void)mapView:(MFMapView *)mapView willMove:(BOOL)gesture;


- (void)mapView:(MFMapView *)mapView movingCameraPosition:(MFCameraPosition *)position;


/** Called repeatedly during any animations or gestures on the map. */
- (void)mapView:(MFMapView *)mapView didChangeCameraPosition:(MFCameraPosition *)position;


/** Called when the map becomes idle. */
- (void)mapView:(MFMapView *)mapView idleAtCameraPosition:(MFCameraPosition *)position;


/** Called after a tap gesture at a particular coordinate. */
- (void)mapView:(MFMapView *)mapView didTapAtCoordinate:(CLLocationCoordinate2D)coordinate;


/** Called after a building annotation has been tapped */
- (void)mapView:(MFMapView *)mapView didTapBuilding:(MFBuilding *)building;


/** Called after a base map building has been tapped */
- (void)mapView:(MFMapView *)mapView didTapBuildingWithBuildingID:(NSString *)buildingID name:(NSString *)name location:(CLLocationCoordinate2D)location;


/** Called after a POI annotation has been tapped */
- (void)mapView:(MFMapView *)mapView didTapPOI:(MFPOI *)poi;


/** Called after a base map POI has been tapped */
- (void)mapView:(MFMapView *)mapView didTapPOIWithPlaceID:(NSString *)placeID name:(NSString *)name location:(CLLocationCoordinate2D)location;


/** Called after a base map place has been tapped */
- (void)mapView:(MFMapView *)mapView didTapPlaceWithName:(NSString *)name location:(CLLocationCoordinate2D)location;


/** Called after a direction has been tapped */
- (void)mapView:(MFMapView *)mapView didTapDirectionsRenderer:(MFDirectionsRenderer *)renderer routeIndex:(NSUInteger)routeIndex;


/** Called after a GeoJSON feature has been tapped */
- (void)mapView:(MFMapView *)mapView didTapGeoJSON:(MFGeoJSON *)geoJSON feature:(MFGeoJSONFeature *)feature;


/** Called after a data source feature has been tapped */
- (void)mapView:(MFMapView *)mapView didTapDataSourceFeature:(MFDataSourceFeature *)feature location:(CLLocationCoordinate2D)location;


/** Called when the My Location button is tapped.*/
- (BOOL)didTapMyLocationButtonForMapView:(MFMapView *)mapView;


/** Called when the My Location Dot is tapped. */
- (void)mapView:(MFMapView *)mapView didTapMyLocation:(CLLocationCoordinate2D)location;

/**
 * Called when a marker is about to become selected, and provides an optional custom info window to
 * use for that marker if this method returns a UIView.
 *
 * @return The custom info window for the specified marker, or nil for default
 */
- (UIView *)mapView:(MFMapView *)mapView markerInfoWindow:(MFMarker *)marker;

@end

#endif /* MFMapViewDelegate_h */
