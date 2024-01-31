@class RTLocationShifter;

@interface RTDistanceCalculator : RTService

@property (retain, nonatomic) RTLocationShifter *locationShifter;

+ (id)distanceMetricToString:(long long)a0;

- (id)_convertToRTPairsFromLocations:(id)a0 error:(id *)a1;
- (double)distanceFromLocationCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; } *)a0 toLocationCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; } *)a1 error:(id *)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cgrectFromCoordinates:(struct CLLocationCoordinate2D { double x0; double x1; } *)a0 locationsCount:(unsigned long long)a1 error:(id *)a2;
- (double)_dtwDistanceEuclideanBetweenX:(struct CLLocationCoordinate2D { double x0; double x1; } *)a0 y:(struct CLLocationCoordinate2D { double x0; double x1; } *)a1 error:(id *)a2;
- (double)distanceFromLocations:(struct CLLocationCoordinate2D { double x0; double x1; } *)a0 countOfFromLocations:(unsigned long long)a1 toLocations:(struct CLLocationCoordinate2D { double x0; double x1; } *)a2 countOfToLocations:(unsigned long long)a3 distanceMetric:(long long)a4 threshold:(double)a5 error:(id *)a6;
- (void)_shutdownWithHandler:(id /* block */)a0;
- (double)distanceFromLocation:(id)a0 toLocation:(id)a1 error:(id *)a2;
- (double)_dtwDistanceFirstNormBetweenX:(struct CLLocationCoordinate2D { double x0; double x1; } *)a0 y:(struct CLLocationCoordinate2D { double x0; double x1; } *)a1 error:(id *)a2;
- (id)_expand_windowWithPath:(id)a0 len_x:(short)a1 len_y:(short)a2 radius:(short)a3 error:(id *)a4;
- (BOOL)checkConsistencyBetweenLocation:(id)a0 otherLocation:(id)a1 error:(id *)a2;
- (double)computeCircleIntersectionPercentageOfMinRadiusCircleWithDistance:(double)a0 firstRadius:(double)a1 secondRadius:(double)a2;
- (double)_dtwDistanceFromLocations:(struct CLLocationCoordinate2D { double x0; double x1; } *)a0 countOfFromLocations:(unsigned long long)a1 toLocations:(struct CLLocationCoordinate2D { double x0; double x1; } *)a2 countOfToLocations:(unsigned long long)a3 distanceMetric:(long long)a4 threshold:(double)a5 error:(id *)a6;
- (struct CLLocationCoordinate2D { double x0; double x1; } *)rectVerticesFromCoordinates:(struct CLLocationCoordinate2D { double x0; double x1; } *)a0 locationsCount:(unsigned long long)a1 ignoreNFirstAndLastLocations:(unsigned long long)a2 error:(id *)a3;
- (struct CLLocationCoordinate2D { double x0; double x1; })computeCentroid:(struct CLLocationCoordinate2D { double x0; double x1; } *)a0 locationsCount:(unsigned long long)a1 error:(id *)a2;
- (double)computeCircleIntersectionAreaWithDistance:(double)a0 firstRadius:(double)a1 secondRadius:(double)a2;
- (void).cxx_destruct;
- (double)_computeAreaFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)computeIntersectionOverUnionUsingBoundingBoxBetweenLocations:(struct CLLocationCoordinate2D { double x0; double x1; } *)a0 locationsCount:(unsigned long long)a1 otherLocations:(struct CLLocationCoordinate2D { double x0; double x1; } *)a2 otherLocationsCount:(unsigned long long)a3 error:(id *)a4;
- (double)fractionOfUncertaintyAreaOverlapOfTheSmalestUncertaintyAreaBetweenLocation:(id)a0 otherLocation:(id)a1 error:(id *)a2;
- (id)_fastDTWForX:(struct CLLocationCoordinate2D { double x0; double x1; } *)a0 xCount:(unsigned long long)a1 y:(struct CLLocationCoordinate2D { double x0; double x1; } *)a2 yCount:(unsigned long long)a3 radius:(double)a4 distanceMetric:(long long)a5 threshold:(double)a6 error:(id *)a7;
- (id)_dtwForX:(struct CLLocationCoordinate2D { double x0; double x1; } *)a0 xCount:(unsigned long long)a1 y:(struct CLLocationCoordinate2D { double x0; double x1; } *)a2 yCount:(unsigned long long)a3 window:(id)a4 distanceMetric:(long long)a5 threshold:(double)a6 error:(id *)a7;
- (BOOL)checkFractionAreaOverlapBetweenLocation:(id)a0 otherLocation:(id)a1 largerThanThreshold:(double)a2 error:(id *)a3;
- (double)computeBoundingBoxArea:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 locationsCount:(unsigned long long)a1 error:(id *)a2;
- (struct CLLocationCoordinate2D { double x0; double x1; } *)_reduce_by_half:(struct CLLocationCoordinate2D { double x0; double x1; } *)a0 count:(unsigned long long)a1 outputCount:(unsigned long long *)a2 error:(id *)a3;
- (double)_centroidDistanceFromLocations:(struct CLLocationCoordinate2D { double x0; double x1; } *)a0 countOfFromLocations:(unsigned long long)a1 toLocations:(struct CLLocationCoordinate2D { double x0; double x1; } *)a2 countOfToLocations:(unsigned long long)a3 error:(id *)a4;

@end
