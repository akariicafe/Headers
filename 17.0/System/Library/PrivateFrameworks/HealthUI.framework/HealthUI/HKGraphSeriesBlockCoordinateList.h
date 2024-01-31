@class NSArray;

@interface HKGraphSeriesBlockCoordinateList : NSObject

@property (readonly, nonatomic) NSArray *coordinates;
@property (readonly, nonatomic) long long numCoordinates;
@property (readonly, nonatomic) struct HKGraphSeriesDataBlockPath { long long x0; long long x1; long long x2; } blockPathStart;
@property (readonly, nonatomic) struct HKGraphSeriesDataBlockPath { long long x0; long long x1; long long x2; } blockPathEnd;

+ (id)coordinateListWithCoordinates:(id)a0 blockPath:(struct HKGraphSeriesDataBlockPath { long long x0; long long x1; long long x2; })a1;
+ (id)coordinateListByCombiningSubCoordinates:(id)a0 chartableValueRange:(id)a1;

- (void)enumerateCoordinatesWithTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 roundToViewScale:(BOOL)a1 block:(id /* block */)a2;
- (id)_coordinatesInChartableRange:(id)a0;
- (void)_enumerateCoordinatesWithTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 chartableValueRange:(id)a1 roundToViewScale:(BOOL)a2 block:(id /* block */)a3;
- (long long)_numCoordinatesInChartableRange:(id)a0;
- (id)firstCoordinateWithTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 roundToViewScale:(BOOL)a1;
- (id)lastCoordinateWithTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 roundToViewScale:(BOOL)a1;

@end
