@class ATMovingAverage;

@interface ATThroughputCalculator : NSObject {
    BOOL _suspended;
    double _lastUpdate;
    double _startTime;
    double _currentValue;
    ATMovingAverage *_average;
}

@property (readonly, nonatomic) double throughput;

- (BOOL)update:(double)a0;
- (id)init;
- (void)suspend;
- (void)resume;
- (void).cxx_destruct;

@end
