@class HKSPSleepSettings, HKSPSleepSchedule, NSString, HKSPSleepEventRecord, NSDate;

@interface HKSPSleepScheduleModel : NSObject <NSCopying, NAEquatable, NAHashable>

@property (readonly, nonatomic) BOOL goodMorningAlertNotificationEnabled;
@property (readonly, nonatomic) BOOL goodMorningScreenEnabled;
@property (readonly, nonatomic) BOOL chargingRemindersEnabled;
@property (readonly, copy, nonatomic) HKSPSleepSchedule *sleepSchedule;
@property (readonly, copy, nonatomic) HKSPSleepSettings *sleepSettings;
@property (readonly, copy, nonatomic) HKSPSleepEventRecord *sleepEventRecord;
@property (readonly, nonatomic) NSDate *lastModifiedDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)templateModelForSchedule:(id)a0;
+ (id)_computeUpcomingDateIntervalForDate:(id)a0;
+ (id)sleepScheduleModelWithSleepSchedule:(id)a0 sleepSettings:(id)a1 sleepEventRecord:(id)a2;

- (id)upcomingEventsDueAfterDate:(id)a0;
- (BOOL)isEquivalentTo:(id)a0;
- (id)generateOverrideOccurrenceFromTemplateForCurrentDate:(id)a0;
- (id)nextOccurrenceInInterval:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)nextOccurrenceAfterDate:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)_upcomingResolvedOccurrencesDueAfterDate:(id)a0 searchBackwards:(BOOL)a1;
- (id)computeTemplateGenerationDateForCurrentDate:(id)a0;
- (id)overrideOccurrenceGenerationResultForCurrentDate:(id)a0 gregorianCalendar:(id)a1 schedule:(id)a2;
- (id)generateOverrideOccurrenceForCurrentDate:(id)a0 gregorianCalendar:(id)a1;
- (id)_timelineResultsDueAfterDate:(id)a0;
- (BOOL)goodMorningAlertNotificationsEnabledWithLogObject:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)previousOccurrenceBeforeDate:(id)a0;
- (void).cxx_destruct;
- (id)modelByApplyingChangesFromOccurrence:(id)a0;
- (id)nextEventWithIdentifier:(id)a0 dueAfterDate:(id)a1;
- (id)previousResolvedOccurrenceBeforeDate:(id)a0;
- (long long)alarmStatusForOccurrence:(id)a0;
- (id)computeConfirmedWakeUpUntilDateForOverrideWakeUpDate:(id)a0;
- (id)generateOverrideOccurrenceFromTemplateForCurrentDate:(id)a0 gregorianCalendar:(id)a1 schedule:(id)a2;
- (id)previousEventWithIdentifier:(id)a0 dueBeforeDate:(id)a1;
- (id)computeConfirmedWakeUpUntilDateForEarlyWakeUpDate:(id)a0;
- (id)_computeOriginalWakeUpForOverrideDateHelper:(id)a0;
- (id)succinctDescription;
- (id)upcomingOccurrenceAfterDate:(id)a0;
- (id)upcomingResolvedOccurrenceAfterDate:(id)a0;
- (id)generateOverrideOccurrenceFromTemplateForCurrentDate:(id)a0 gregorianCalendar:(id)a1;
- (BOOL)isEqual:(id)a0;
- (id)timelineForDate:(id)a0;
- (id)_upcomingEventsDueAfterDate:(id)a0 searchBackwards:(BOOL)a1;
- (id)previousEventsDueBeforeDate:(id)a0;
- (id)generateOverrideOccurrenceForCurrentDate:(id)a0 gregorianCalendar:(id)a1 schedule:(id)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)nextEventDueAfterDate:(id)a0;
- (id)generateOverrideOccurrenceFromTemplateForCurrentDate:(id)a0 gregorianCalendar:(id)a1 mutableOccurrence:(id)a2;
- (id)nextResolvedOccurrenceInInterval:(id)a0;
- (BOOL)goodMorningScreenEnabledWithLogObject:(id)a0;
- (BOOL)chargingRemindersEnabledWithLogObject:(id)a0;
- (id)nextResolvedOccurrenceAfterDate:(id)a0;

@end
