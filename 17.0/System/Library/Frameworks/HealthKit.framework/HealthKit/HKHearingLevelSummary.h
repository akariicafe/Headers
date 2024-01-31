@class HKHearingLevelMetrics;

@interface HKHearingLevelSummary : NSObject

@property (readonly, copy, nonatomic) HKHearingLevelMetrics *overallMetrics;
@property (readonly, copy, nonatomic) HKHearingLevelMetrics *leftEarMetrics;
@property (readonly, copy, nonatomic) HKHearingLevelMetrics *rightEarMetrics;

+ (id)summaryForAudiogramSample:(id)a0;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithLeftEarMetrics:(id)a0 rightEarMetrics:(id)a1;

@end
