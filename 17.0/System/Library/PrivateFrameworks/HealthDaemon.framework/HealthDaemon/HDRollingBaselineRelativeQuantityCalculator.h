@class HKRollingBaselineConfiguration, NSMutableDictionary;

@interface HDRollingBaselineRelativeQuantityCalculator : NSObject {
    NSMutableDictionary *_baselineBySourceID;
}

@property (readonly, nonatomic) HKRollingBaselineConfiguration *configuration;

- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)addNextSampleValue:(double)a0 startTime:(double)a1 sourceID:(id)a2;
- (void)addSupplementarySampleValue:(double)a0 startTime:(double)a1 sourceID:(id)a2;
- (long long)additionalSampleCountRequiredToBaselineSampleWithSourceID:(id)a0;
- (double)baselineRelativeValueForSampleValue:(double)a0 sourceID:(id)a1;
- (BOOL)hasSufficientDataToBaselineSampleWithSourceID:(id)a0;
- (double)mostRecentSampleStartTimeForSourceID:(id)a0;
- (double)mostRecentSupplementarySampleStartTimeForSourceID:(id)a0;
- (void)pruneForNextSampleStartTime:(double)a0 sourceID:(id)a1;

@end
