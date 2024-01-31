@class NSString, NSDate;

@interface HMMTRMetricBundle : NSObject

@property (readonly, nonatomic) NSDate *time;
@property (readonly, nonatomic) NSString *name;

- (void).cxx_destruct;
- (double)durationWithDate:(id)a0;
- (id)initWithTime:(id)a0 name:(id)a1;

@end
