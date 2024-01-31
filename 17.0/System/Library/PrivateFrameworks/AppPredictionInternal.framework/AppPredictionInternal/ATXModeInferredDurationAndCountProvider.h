@class NSDictionary, NSDate;

@interface ATXModeInferredDurationAndCountProvider : NSObject {
    NSDate *_thresholdDateLastNDays;
    NSDictionary *_inferredModeDurationSumLastNDays;
    NSDictionary *_inferredModeDurationSumLast1Day;
    NSDictionary *_inferredModeCounterLastNDays;
    NSDictionary *_inferredModeCounterLast1Day;
}

- (void).cxx_destruct;
- (void)cacheInferredModeStreamIfNecessary;
- (id)initWithLastNDays:(unsigned long long)a0;
- (unsigned long long)modeInferredCountInLast1DayForMode:(unsigned long long)a0;
- (unsigned long long)modeInferredCountInLastNDaysForMode:(unsigned long long)a0;
- (double)modeInferredDurationInLast1DayForMode:(unsigned long long)a0;
- (double)modeInferredDurationInLastNDaysForMode:(unsigned long long)a0;

@end
