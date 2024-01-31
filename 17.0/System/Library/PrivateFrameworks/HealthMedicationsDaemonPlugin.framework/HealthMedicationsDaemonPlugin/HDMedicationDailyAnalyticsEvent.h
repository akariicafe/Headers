@class NSDate, NSString, NSCalendar, HDMedicationScheduleDailyAnalytics, HDMedicationUserDomainConceptDailyAnalytics, HDMedicationDoseEventDailyAnalytics, HDProfile, HDMedicationOntologyDailyAnalytics, NSUserDefaults, HDKeyValueDomain;

@interface HDMedicationDailyAnalyticsEvent : NSObject <HKAnalyticsEvent> {
    HDProfile *_profile;
    HDKeyValueDomain *_medicationsKeyValueDomain;
    NSUserDefaults *_medicationsUserDefaults;
    NSCalendar *_calendar;
    NSDate *_currentDate;
    HDMedicationDoseEventDailyAnalytics *_doseEventAnalytics;
    HDMedicationUserDomainConceptDailyAnalytics *_medicationConceptAnalytics;
    HDMedicationOntologyDailyAnalytics *_ontologyAnalytics;
    HDMedicationScheduleDailyAnalytics *_scheduleAnalytics;
}

@property (readonly, nonatomic) BOOL isEventSubmissionIHAGated;
@property (readonly, nonatomic) NSString *eventName;

- (id)initWithProfile:(id)a0;
- (void).cxx_destruct;
- (id)makeIHAGatedEventPayloadWithDataSource:(id)a0 error:(id *)a1;
- (id)makeUnrestrictedEventPayloadWithDataSource:(id)a0 error:(id *)a1;
- (long long)_bucketedWeeksSinceDate:(id)a0 dataSource:(id)a1;
- (id)_fetchDeviceContextAnalytics;
- (id)_fetchNotificationSettingsAnalyticsWithDataSource:(id)a0 includingCriticalMedsCount:(BOOL)a1;
- (id)_isImproveHealthRecordsAllowedPayloadWithDataSource:(id)a0;
- (id)_lifestyleInteractionsAnalyticsPayload;
- (id)_readValueFromKeyValueDomainForKey:(id)a0;
- (id)_reminderAnalyticsPayload;
- (id)_userCharacteristicsAnalyticsPayloadWithDataSource:(id)a0;

@end
