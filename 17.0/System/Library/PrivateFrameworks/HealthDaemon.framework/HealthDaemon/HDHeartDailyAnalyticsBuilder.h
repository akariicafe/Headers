@class NSCalendar, HDProfile, NSDateInterval, HDHeartDailyAnalytics, NRPairedDeviceRegistry, NSUserDefaults;

@interface HDHeartDailyAnalyticsBuilder : NSObject {
    HDProfile *_profile;
    HDHeartDailyAnalytics *_heartDailyAnalytics;
    NSUserDefaults *_heartRateNotificationsUserDefaults;
    NSUserDefaults *_heartRhythmUserDefaults;
    NSUserDefaults *_remoteFeatureAvailabilityUserDefaults;
    BOOL _isHealthDataSubmissionAllowed;
    NSCalendar *_calendar;
    NSDateInterval *_dateInterval;
    NRPairedDeviceRegistry *_pairedDeviceRegistry;
    BOOL _areHealthNotificationsAuthorized;
}

- (void).cxx_destruct;
- (id)heartDailyAnalyticsWithError:(id *)a0;
- (id)initWithProfile:(id)a0 calendar:(id)a1 dateInterval:(id)a2 heartRateNotificationsUserDefaults:(id)a3 heartRhythmUserDefaults:(id)a4 remoteFeatureAvailabilityUserDefaults:(id)a5 pairedDeviceRegistry:(id)a6 areHealthNotificationsAuthorized:(BOOL)a7 isHealthDataSubmissionAllowed:(BOOL)a8;

@end
