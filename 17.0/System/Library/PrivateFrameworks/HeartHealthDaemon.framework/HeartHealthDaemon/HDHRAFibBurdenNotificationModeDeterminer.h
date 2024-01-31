@class HDProfile, HKCalendarCache;

@interface HDHRAFibBurdenNotificationModeDeterminer : NSObject {
    HDProfile *_profile;
    HKCalendarCache *_calendarCache;
    id /* block */ _dateGenerator;
}

- (id)notificationModeForCurrentValue:(id)a0 featureStatus:(id)a1 onboardedWithinAnalysisInterval:(BOOL)a2 error:(id *)a3;
- (id)_notificationWithCurrentValue:(id)a0 errorOut:(id *)a1;
- (struct { long long x0; long long x1; })_dayIndexRangeFromSample:(id)a0;
- (id)_previousSampleFromCurrentValue:(id)a0 error:(id *)a1;
- (void)_extractFromSample:(id)a0 percentageValue:(id *)a1 isClamped:(id *)a2;
- (id)initWithProfile:(id)a0 calendarCache:(id)a1;
- (BOOL)_isSampleForPreviousCalendarWeek:(id)a0;
- (id)_noDataNotificationWithFeatureStatus:(id)a0 onboardedWithinAnalysisInterval:(BOOL)a1;
- (id)_noNotification;
- (void).cxx_destruct;
- (BOOL)_isPreviousSampleSevenDaysBeforeCurrentSample:(id)a0 previousSample:(id)a1;
- (BOOL)_shouldShowNotificationWithEndWeekdayToFire:(long long)a0;
- (id)notificationModeForCurrentValue:(id)a0 featureStatus:(id)a1 onboardedWithinAnalysisInterval:(BOOL)a2 endWeekdayToFire:(long long)a3 error:(id *)a4;
- (id)initWithProfile:(id)a0 calendarCache:(id)a1 dateGenerator:(id /* block */)a2;

@end
