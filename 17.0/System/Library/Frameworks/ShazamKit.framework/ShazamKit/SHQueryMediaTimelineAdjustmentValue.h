@class SHRange;

@interface SHQueryMediaTimelineAdjustmentValue : NSObject

@property (readonly, nonatomic) SHRange *timeRange;
@property (readonly, nonatomic) double timelineShiftDuration;

- (void).cxx_destruct;
- (id)initWithTimeRange:(id)a0 timelineShiftDuration:(double)a1;

@end
