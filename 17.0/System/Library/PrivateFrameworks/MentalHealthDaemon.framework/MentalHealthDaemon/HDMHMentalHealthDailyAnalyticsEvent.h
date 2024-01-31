@class NSString, HDProfile, HKMHSettingsManager, NSUserDefaults;

@interface HDMHMentalHealthDailyAnalyticsEvent : NSObject <HKAnalyticsEvent> {
    HDProfile *_profile;
    HKMHSettingsManager *_settingsManager;
    NSUserDefaults *_userDefaults;
}

@property (readonly, nonatomic) BOOL isEventSubmissionIHAGated;
@property (readonly, nonatomic) NSString *eventName;

- (void).cxx_destruct;
- (id)makeIHAGatedEventPayloadWithDataSource:(id)a0 error:(id *)a1;
- (id)makeUnrestrictedEventPayloadWithDataSource:(id)a0 error:(id *)a1;
- (long long)_bucketedWeeksSinceDate:(id)a0 dataSource:(id)a1;
- (id)_fetchDeviceContextAnalytics;
- (id)_IHAGatedDemographicsFieldsWithDataSource:(id)a0;
- (id)_featureStatusForFeatureIdentifier:(id)a0 dataSource:(id)a1 error:(id *)a2;
- (id)_determineDaysSinceLastSampleWithSampleType:(id)a0 dataSource:(id)a1;
- (id)_enumeratorForPastNDays:(long long)a0 withDataSource:(id)a1 forSampleType:(id)a2 withExtraPredicate:(id)a3;
- (id)_hasLaunchedHealthAppInInterval:(long long)a0 withDataSource:(id)a1;
- (id)_hasLoggedStateOfMindInPastNDays:(long long)a0 withDataSource:(id)a1;
- (id)_healthAppLastOpenedDate;
- (id)_isFeatureEnabledForFeatureIdentifier:(id)a0 dataSource:(id)a1 featureAvailabilityContext:(id)a2;
- (id)_isFeatureOnboardedForFeatureIdentifier:(id)a0 dataSource:(id)a1;
- (id)_numAssessmentsCompletedWithDataSource:(id)a0;
- (id)_numAssessmentsInPastNDays:(long long)a0 withDataSource:(id)a1;
- (id)_numDailyStateOfMindLogsInPastNDays:(long long)a0 withDataSource:(id)a1;
- (id)_numDaysStateOfMindLoggedInPast30DaysWithDataSource:(id)a0;
- (id)_numDaysStateOfMindLoggedInPastDayWithDataSource:(id)a0;
- (id)_stateOfMindDaySummaryEnumeratorForPastNDays:(long long)a0 withDataSource:(id)a1;
- (id)_weeksSinceLastHealthAppLaunchWithDataSource:(id)a0;
- (id)_weeksSinceOnboardingWithDataSource:(id)a0;
- (id)initWithProfile:(id)a0 settingsManager:(id)a1 userDefaults:(id)a2;
- (long long)numberOfDaysBetweenStartDate:(id)a0 endDate:(id)a1 withCalendar:(id)a2;

@end
