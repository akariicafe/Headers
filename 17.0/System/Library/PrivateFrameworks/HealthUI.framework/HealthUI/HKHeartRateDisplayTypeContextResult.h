@class HKStatistics;

@interface HKHeartRateDisplayTypeContextResult : NSObject

@property (nonatomic) long long context;
@property (retain, nonatomic) HKStatistics *statistics;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithContext:(long long)a0 statistics:(id)a1;

@end
