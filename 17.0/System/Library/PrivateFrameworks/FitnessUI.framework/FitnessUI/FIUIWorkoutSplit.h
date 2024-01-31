@class NSDateInterval;

@interface FIUIWorkoutSplit : NSObject

@property (nonatomic) double distanceInMeters;
@property (nonatomic) double duration;
@property (copy, nonatomic) NSDateInterval *dateInterval;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDistance:(double)a0 duration:(double)a1;
- (id)initWithDistance:(double)a0 duration:(double)a1 dateInterval:(id)a2;

@end
