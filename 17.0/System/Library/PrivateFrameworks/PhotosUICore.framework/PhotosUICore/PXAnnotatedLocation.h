@class NSNumber, CLLocation, PXPlaceAnnotation;

@interface PXAnnotatedLocation : NSObject

@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } coordinate;
@property (retain) NSNumber *locationType;
@property (retain, nonatomic) CLLocation *location;
@property (readonly, nonatomic) PXPlaceAnnotation *placeAnnotation;

- (void).cxx_destruct;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 placeAnnotation:(id)a1;
- (id)initWithLatitude:(double)a0 longitude:(double)a1 placeAnnotation:(id)a2;
- (id)initWithLocation:(id)a0 placeAnnotation:(id)a1;

@end
