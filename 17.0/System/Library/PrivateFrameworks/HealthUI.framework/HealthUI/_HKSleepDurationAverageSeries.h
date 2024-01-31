@class NSLock, NSString, NSNumber;

@interface _HKSleepDurationAverageSeries : HKSleepDurationSeries

@property (readonly, nonatomic) NSLock *seriesMutableStateLock;
@property (nonatomic) double averageValueStorage;
@property (copy, nonatomic) NSString *averageDescriptionStorage;
@property (retain, nonatomic) NSNumber *averageValueTypeStorage;
@property (retain, nonatomic) NSNumber *averageValueType;

- (id)init;
- (void).cxx_destruct;
- (long long)overlayType;
- (id)coordinatesForBlock:(id)a0 blockPath:(struct HKGraphSeriesDataBlockPath { long long x0; long long x1; long long x2; })a1 xAxis:(id)a2 yAxis:(id)a3;
- (void)drawSeriesWithBlockCoordinates:(id)a0 axisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 zoomLevelConfiguration:(id)a2 pointTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a3 renderContext:(struct CGContext { } *)a4 secondaryRenderContext:(id)a5 seriesRenderingDelegate:(id)a6;
- (void)drawOverlayInContext:(struct CGContext { } *)a0 seriesOverlayData:(id)a1;
- (void)setAverageValue:(double)a0 averageDescription:(id)a1;

@end
