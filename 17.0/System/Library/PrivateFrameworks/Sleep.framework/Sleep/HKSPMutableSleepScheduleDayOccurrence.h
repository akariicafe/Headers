@class HKSPChangeSet, NSSet, NSString, HKSPAlarmConfiguration, NSDateComponents, NSDate;
@protocol HKSPObject;

@interface HKSPMutableSleepScheduleDayOccurrence : HKSPSleepScheduleDayOccurrence <HKSPMutableObject>

@property (class, readonly, nonatomic) NSSet *allProperties;
@property (class, readonly, nonatomic) NSSet *propertiesForEquivalence;
@property (class, readonly, nonatomic) NSSet *significantProperties;
@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDateComponents *bedtimeComponents;
@property (copy, nonatomic) NSDateComponents *wakeUpComponents;
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
- (BOOL)hasChangeAffectingScheduling;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)generateSleepScheduleOccurrenceWithWeekdays:(unsigned long long)a0;

@end
