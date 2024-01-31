@interface VKDrivingPolylinePath : VKPolylinePath {
    struct GradientTraffic { float blend; unsigned char start; unsigned char end; } _standardModeTraffic;
    struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; struct __compressed_pair<float *, std::allocator<float>> { float *__value_; } __end_cap_; } _laneHalfWidths;
    struct vector<double, std::allocator<double>> { double *__begin_; double *__end_; struct __compressed_pair<double *, std::allocator<double>> { double *__value_; } __end_cap_; } _distances;
    struct vector<md::GradientTraffic, std::allocator<md::GradientTraffic>> { struct GradientTraffic *__begin_; struct GradientTraffic *__end_; struct __compressed_pair<md::GradientTraffic *, std::allocator<md::GradientTraffic>> { struct GradientTraffic *__value_; } __end_cap_; } _gradientTraffics;
}

+ (void)updateDistances:(void *)a0 forPath:(id)a1 snap:(BOOL)a2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setTrafficSpeed:(unsigned char)a0;
- (void)assignPoints:(void *)a0 count:(unsigned long long)a1;
- (void)assignPoints:(void *)a0 laneHalfWidths:(float *)a1 gradientTraffics:(struct GradientTraffic { float x0; unsigned char x1; unsigned char x2; } *)a2 polylineCoordinates:(struct PolylineCoordinate { unsigned int x0; float x1; } *)a3 count:(unsigned long long)a4;
- (void)assignTo:(id)a0 withSegment:(const struct TrafficSegment { unsigned int x0; unsigned char x1; } *)a1;
- (const struct GradientTraffic { float x0; unsigned char x1; unsigned char x2; } *)gradientTrafficAtIndex:(unsigned int)a0;
- (id)initWithOverlay:(id)a0 section:(id)a1 routeStartIndex:(unsigned int)a2 routeEndIndex:(unsigned int)a3 matchedPathSegments:(id)a4;
- (float)laneHalfWidthAtIndex:(unsigned int)a0;
- (void)splitGradientTrafficSegmentationAndAddTo:(id)a0 with:(void *)a1 shouldSnap:(BOOL)a2;
- (void)splitTrafficSegmentationAndAddTo:(id)a0 with:(void *)a1 shouldSnap:(BOOL)a2 isGradientTraffic:(BOOL)a3;

@end
