@class NSDate;

@interface LKOperation : NSObject

@property (readonly, nonatomic) NSDate *startTime;
@property (readonly, nonatomic) NSDate *endTime;
@property (readonly, nonatomic) double duration;

- (void)setStartTime:(id)a0;
- (id)init;
- (void)setEndTime:(id)a0;
- (id)dictionary;
- (void).cxx_destruct;
- (void)setDuration:(double)a0;

@end
