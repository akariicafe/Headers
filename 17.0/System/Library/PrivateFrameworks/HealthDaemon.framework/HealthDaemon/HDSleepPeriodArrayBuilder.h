@class NSMutableArray, NSDate;

@interface HDSleepPeriodArrayBuilder : NSObject {
    NSMutableArray *_periods;
    NSMutableArray *_segments;
    NSDate *_minDate;
    NSDate *_maxDate;
}

- (id)init;
- (id)finish;
- (void).cxx_destruct;
- (void)addOrderedSegment:(id)a0;

@end
