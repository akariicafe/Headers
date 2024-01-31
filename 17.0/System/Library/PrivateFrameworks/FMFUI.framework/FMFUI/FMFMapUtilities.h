@interface FMFMapUtilities : NSObject

+ (BOOL)doNotAnimateToNewLocation:(struct CLLocationCoordinate2D { double x0; double x1; })a0 forMapView:(id)a1;
+ (struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })mapRectForCoordinateRegion:(struct { struct CLLocationCoordinate2D { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
+ (struct { struct CLLocationCoordinate2D { double x0; double x1; } x0; struct { double x0; double x1; } x1; })regionForAnnotations:(id)a0;

@end
