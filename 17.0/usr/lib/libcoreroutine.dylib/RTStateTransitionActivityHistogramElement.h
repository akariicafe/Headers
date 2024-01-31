@class CMMotionActivity;

@interface RTStateTransitionActivityHistogramElement : NSObject <NSCopying>

@property (retain, nonatomic) CMMotionActivity *activity;
@property (nonatomic) double interval;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithActivity:(id)a0;

@end
