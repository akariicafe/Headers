@interface BWMovingWindowStats : BWStats {
    int _numDataPoints;
    int _dataPointIndex;
    double *_dataPoints;
}

@property (readonly, nonatomic) int windowSize;

- (void)dealloc;
- (id)description;
- (double)max;
- (void)addDataPoint:(double)a0;
- (id)initWithWindowSize:(int)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)min;

@end
