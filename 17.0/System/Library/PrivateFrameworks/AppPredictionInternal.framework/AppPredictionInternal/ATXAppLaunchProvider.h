@class NSDictionary, NSDate;

@interface ATXAppLaunchProvider : NSObject {
    NSDate *_thresholdDateLastNDays;
    int _globalAppLaunchCountInLastNDays;
    int _globalAppLaunchCountInLast1Day;
    NSDictionary *_modeAppLaunchCountBasedOnGlobalPriorsInLastNDays;
    NSDictionary *_modeAppLaunchCountBasedOnGlobalPriorsInLast1Day;
    NSDictionary *_modeWeightedAppLaunchPriorsBasedOnGlobalPriorsInLastNDays;
    NSDictionary *_modeWeightedAppLaunchPriorsBasedOnGlobalPriorsInLast1Day;
}

- (void).cxx_destruct;
- (void)cacheAppLaunchStreamIfNecessary;
- (unsigned long long)globalAppLaunchCountWithinLast1Day;
- (unsigned long long)globalAppLaunchCountWithinLastNDays;
- (id)initWithLastNDays:(unsigned long long)a0;
- (unsigned long long)modeAppLaunchCountBasedOnGlobalPriorsWithinLast1DayForMode:(unsigned long long)a0;
- (unsigned long long)modeAppLaunchCountBasedOnGlobalPriorsWithinLastNDaysForMode:(unsigned long long)a0;
- (double)modeWeightedAppLaunchPriorsBasedOnGlobalPriorsWithinLast1DayForMode:(unsigned long long)a0;
- (double)modeWeightedAppLaunchPriorsBasedOnGlobalPriorsWithinLastNDaysForMode:(unsigned long long)a0;

@end
