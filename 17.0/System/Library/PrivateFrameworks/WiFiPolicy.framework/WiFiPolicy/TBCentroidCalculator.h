@class NSMutableArray;

@interface TBCentroidCalculator : NSObject

@property (retain, nonatomic) NSMutableArray *points;

- (struct CLLocationCoordinate2D { double x0; double x1; })centroid;
- (void).cxx_destruct;
- (BOOL)_validLatitudeValue:(double)a0;
- (BOOL)_validLongitudeValue:(double)a0;
- (void)addLatitude:(double)a0 longitude:(double)a1;

@end
