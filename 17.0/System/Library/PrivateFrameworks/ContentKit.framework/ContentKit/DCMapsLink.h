@class NSString;

@interface DCMapsLink : NSObject <WFSerializableContent, WFNaming>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *wfName;
@property (readonly, nonatomic) NSString *mkDirectionsMode;
@property (readonly, nonatomic) BOOL canGetDirections;
@property (readonly, nonatomic) unsigned long long directionsTransportType;
@property (readonly, nonatomic) struct CLLocationCoordinate2D { double x0; double x1; } centerCoordinate;
@property (readonly, nonatomic) unsigned long long mkMapType;
@property (readonly, nonatomic) NSString *searchQuery;
@property (readonly, nonatomic) NSString *searchNearQuery;
@property (readonly, nonatomic) NSString *searchLocation;
@property (readonly, nonatomic) NSString *startAddress;
@property (readonly, nonatomic) NSString *destinationAddress;
@property (readonly, nonatomic) unsigned long long directionsMode;
@property (readonly, nonatomic) NSString *centerLocation;
@property (readonly, nonatomic) long long zoomLevel;
@property (readonly, nonatomic) unsigned long long mapType;
@property (readonly, nonatomic) BOOL showsTraffic;
@property (readonly, nonatomic) BOOL showsTransit;
@property (readonly, nonatomic) BOOL showsStreetView;
@property (readonly, nonatomic) BOOL showsBicycling;
@property (readonly, nonatomic) NSString *streetViewLocation;

+ (id)objectWithWFSerializedRepresentation:(id)a0;
+ (struct { struct CLLocationCoordinate2D { double x0; double x1; } x0; struct { double x0; double x1; } x1; })coordinateRegionForMapSize:(struct CGSize { double x0; double x1; })a0 centeredAtLocation:(struct CLLocationCoordinate2D { double x0; double x1; })a1 atZoomLevel:(long long)a2;
+ (struct { double x0; double x1; })coordinateSpanForMapSize:(struct CGSize { double x0; double x1; })a0 centeredAtLocation:(struct CLLocationCoordinate2D { double x0; double x1; })a1 atZoomLevel:(long long)a2;
+ (void)createMapsLinkWithPlacemark:(id)a0 location:(id)a1 streetAddress:(id)a2 shiftingLocationIfNecessary:(BOOL)a3 completionHandler:(id /* block */)a4;
+ (BOOL)isMapsURL:(id)a0;
+ (double)latitudeToPixelSpaceY:(double)a0;
+ (double)longitudeToPixelSpaceX:(double)a0;
+ (id)mapsLinkWithURL:(id)a0;
+ (double)pixelSpaceXToLongitude:(double)a0;
+ (double)pixelSpaceYToLatitude:(double)a0;
+ (void)processLocation:(id)a0 shiftingIfNecessary:(BOOL)a1 completionHandler:(id /* block */)a2;

- (id)region;
- (id)wfSerializedRepresentation;
- (id)baiduMapsAppURL;
- (struct CLLocationCoordinate2D { double x0; double x1; })centerLocationCoordinate;
- (struct { struct CLLocationCoordinate2D { double x0; double x1; } x0; struct { double x0; double x1; } x1; })coordinateRegionForMapSize:(struct CGSize { double x0; double x1; })a0 centeredAtLocation:(struct CLLocationCoordinate2D { double x0; double x1; })a1;
- (struct { double x0; double x1; })coordinateSpanForMapSize:(struct CGSize { double x0; double x1; })a0 centeredAtLocation:(struct CLLocationCoordinate2D { double x0; double x1; })a1;
- (void)geocodeAddressString:(id)a0 inRegionIfAvailable:(id)a1 completionHandler:(id /* block */)a2;
- (void)geocodeDirectionsEndpointsWithCompletionHandler:(id /* block */)a0;
- (void)getAppleMapsDirectionsURL:(id /* block */)a0;
- (void)getCitymapperAppURL:(id /* block */)a0;
- (void)getDirectionsToPlacemark:(id)a0 fromPlacemark:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)getDirectionsToPlacemark:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)getDirectionsWithCompletionHandler:(id /* block */)a0;
- (id)googleMapsAppURL;
- (struct CLLocationCoordinate2D { double x0; double x1; })locationCoordinateFromString:(id)a0;
- (id)mapsAppURL;
- (id)regionCenteredAtLocation:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (struct CLLocationCoordinate2D { double x0; double x1; })searchLocationCoordinate;
- (struct CLLocationCoordinate2D { double x0; double x1; })streetViewLocationCoordinate;
- (id)transitAppURL;
- (id)wazeAppURL;

@end
