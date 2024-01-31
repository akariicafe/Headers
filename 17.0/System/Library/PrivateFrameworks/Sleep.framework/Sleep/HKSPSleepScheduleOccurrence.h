@class NSSet, HKSPSleepScheduleDayOccurrence, HKSPAlarmConfiguration, NSDateComponents, NSString, NSDate;

@interface HKSPSleepScheduleOccurrence : NSObject <BSDescriptionProviding, HKSPObject, HKSPDictionarySerializable, NAEquatable, NAHashable, NSMutableCopying>

@property (class, readonly, nonatomic) NSSet *allProperties;
@property (class, readonly, nonatomic) NSSet *propertiesForEquivalence;
@property (class, readonly, nonatomic) NSSet *significantProperties;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) HKSPSleepScheduleDayOccurrence *backingOccurrence;
@property (readonly, nonatomic) BOOL usesDefaultBedtimeAndWakeUpComponents;
@property (readonly, nonatomic) BOOL isInitialized;
@property (readonly, nonatomic) BOOL isRepeating;
@property (readonly, nonatomic) BOOL isSingleDayOverride;
@property (readonly, nonatomic) BOOL crossesDayBoundary;
@property (readonly, nonatomic) HKSPAlarmConfiguration *alarmConfiguration;
@property (readonly, copy, nonatomic) NSDateComponents *bedtimeComponents;
@property (readonly, copy, nonatomic) NSDateComponents *wakeUpComponents;
@property (readonly, nonatomic) unsigned long long weekdays;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly, copy, nonatomic) NSDate *lastModifiedDate;

- (BOOL)isEquivalentTo:(id)a0;
- (id)init;
- (id)succinctDescriptionBuilder;
- (void)encodeWithCoder:(id)a0;
- (id)mutableCopy;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)initFromObject:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)actualSleepInterval;
- (id)bedtimeDateForWakeUpDate:(id)a0 gregorianCalendar:(id)a1;
- (id)changesFromOccurrence:(id)a0;
- (id)convertToScheduledOccurrenceOnSameDaysAsOccurrence:(id)a0;
- (double)generalSleepInterval;
- (BOOL)isAlarmEquivalentToOverrideOccurrence:(id)a0;
- (BOOL)isEquivalentToOverrideOccurrence:(id)a0;
- (BOOL)isValidOccurrence;
- (id)nextDateIntervalWithWakeUpAfterDate:(id)a0 gregorianCalendar:(id)a1;
- (BOOL)overrideAppliesToOccurrence:(id)a0 gregorianCalendar:(id)a1;
- (long long)overrideDayInCalendar:(id)a0;
- (id)overrideOccurrenceTemplateForCurrentDate:(id)a0 gregorianCalendar:(id)a1;
- (id)overrideOccurrenceWithWakeUpComponents:(id)a0 bedtimeComponents:(id)a1;
- (BOOL)overridesWakeUpForOccurrenceOnDate:(id)a0 gregorianCalendar:(id)a1;
- (id)wakeUpDateForDate:(id)a0 day:(long long)a1 searchBackwards:(BOOL)a2 gregorianCalendar:(id)a3;
- (id)wakeUpDateForDate:(id)a0 searchBackwards:(BOOL)a1 gregorianCalendar:(id)a2;

@end
