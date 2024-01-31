@interface PLLocationUtils : NSObject

+ (struct PLCartesianCoordinate3D { float x0; float x1; float x2; })cartesianCoordinateFromLatitude:(float)a0 longitude:(float)a1;
+ (id)predicateForMomentWithLocation;
+ (BOOL)canUseCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
+ (BOOL)horizontalAccuracyIsCoarse:(double)a0;
+ (BOOL)locationIsCoarse:(id)a0;
+ (struct CLLocationCoordinate2D { double x0; double x1; })defaultLocationCoordinate2D;
+ (id)predicateForAssetWithLocation;

@end
