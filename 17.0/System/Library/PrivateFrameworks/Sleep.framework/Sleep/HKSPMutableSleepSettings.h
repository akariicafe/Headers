@class HKSPChangeSet, NSSet, NSString, NSDate;
@protocol HKSPObject;

@interface HKSPMutableSleepSettings : HKSPSleepSettings <HKSPMutableObject>

@property (class, readonly, nonatomic) NSSet *allProperties;
@property (class, readonly, nonatomic) NSSet *propertiesForEquivalence;
@property (class, readonly, nonatomic) NSSet *significantProperties;
@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL springBoardGreetingDisabled;
@property (nonatomic) BOOL springBoardSuggestedPageCreated;
@property (nonatomic) BOOL watchSleepFeaturesEnabled;
@property (nonatomic) BOOL scheduledSleepMode;
@property (nonatomic) unsigned long long sleepModeOptions;
@property (nonatomic) BOOL sleepTracking;
@property (nonatomic) BOOL timeInBedTracking;
@property (nonatomic) BOOL bedtimeReminders;
@property (nonatomic) BOOL wakeUpResults;
@property (nonatomic) BOOL chargingReminders;
@property (nonatomic) BOOL shareAcrossDevices;
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

@end
