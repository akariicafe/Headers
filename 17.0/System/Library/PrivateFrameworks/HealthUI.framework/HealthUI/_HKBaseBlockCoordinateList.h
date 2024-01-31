@class NSArray;

@interface _HKBaseBlockCoordinateList : HKGraphSeriesBlockCoordinateList {
    NSArray *_coordinates;
    struct HKGraphSeriesDataBlockPath { long long index; long long zoom; long long resolution; } _blockPath;
}

- (void).cxx_destruct;
- (id)coordinates;
- (id)_coordinatesInChartableRange:(id)a0;
- (void)_enumerateCoordinatesWithTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 chartableValueRange:(id)a1 roundToViewScale:(BOOL)a2 block:(id /* block */)a3;
- (long long)_numCoordinatesInChartableRange:(id)a0;
- (struct HKGraphSeriesDataBlockPath { long long x0; long long x1; long long x2; })blockPathEnd;
- (struct HKGraphSeriesDataBlockPath { long long x0; long long x1; long long x2; })blockPathStart;
- (id)firstCoordinateWithTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 roundToViewScale:(BOOL)a1;
- (id)initWithCoordinates:(id)a0 blockPath:(struct HKGraphSeriesDataBlockPath { long long x0; long long x1; long long x2; })a1;
- (id)lastCoordinateWithTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 roundToViewScale:(BOOL)a1;
- (long long)numCoordinates;

@end
