@class HKSPChangeSet, NSSet, HKSPSleepScheduleDayOccurrence, HKSPAlarmConfiguration, NSDateComponents, NSDate, NSString;
@protocol HKSPObject;

@interface HKSPMutableSleepScheduleOccurrence : HKSPSleepScheduleOccurrence <HKSPMutableObject>

@property (class, readonly, nonatomic) NSSet *allProperties;
@property (class, readonly, nonatomic) NSSet *propertiesForEquivalence;
@property (class, readonly, nonatomic) NSSet *significantProperties;
@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) HKSPSleepScheduleDayOccurrence *backingOccurrence;
@property (copy, nonatomic) NSDateComponents *bedtimeComponents;
@property (copy, nonatomic) NSDateComponents *wakeUpComponents;
@property (nonatomic) unsigned long long weekdays;
@property (retain, nonatomic) HKSPAlarmConfiguration *alarmConfiguration;
@property (copy, nonatomic) NSDate *lastModifiedDate;
@property (readonly, nonatomic) HKSPChangeSet *changeSet;
@property (readonly, nonatomic) id<HKSPObject> originalObject;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (void)revert;
- (id)init;
- (void)freeze;
- (void)encodeWithCoder:(id)a0;
- (id)mutableCopy;
- (id)initFromObject:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)alarmConfiguration;
- (void)setBedtimeComponents:(id)a0;
- (void)setWakeUpComponents:(id)a0;
- (void)turnOnWeekdays:(unsigned long long)a0;
- (void)applyHourAndMinuteFromBedtimeComponents:(id)a0 wakeUpComponents:(id)a1 gregorianCalendar:(id)a2;
- (id)initWithTemplateOccurrence:(id)a0;
- (void)setAlarmConfiguration:(id)a0;
- (void)turnOffAlarm;
- (void)turnOffWeekdays:(unsigned long long)a0;
- (void)turnOnAlarm;

@end
