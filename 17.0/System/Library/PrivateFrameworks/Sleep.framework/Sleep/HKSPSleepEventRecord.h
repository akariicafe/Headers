@class NSSet, NSString, NSDate;
@protocol HKSPSyncAnchor;

@interface HKSPSleepEventRecord : NSObject <HKSPOnboardingModel, BSDescriptionProviding, HKSPXPCObject, HKSPObject, HKSPDictionarySerializable, NAEquatable, NAHashable, NSCopying, NSMutableCopying>

@property (class, readonly) BOOL supportsSecureCoding;
@property (class, readonly, nonatomic) NSSet *allProperties;
@property (class, readonly, nonatomic) NSSet *propertiesForEquivalence;
@property (class, readonly, nonatomic) NSSet *significantProperties;

@property (readonly, nonatomic) BOOL isCurrentSleepCoachingOnboardingCompleted;
@property (readonly, nonatomic) BOOL isCurrentSleepTrackingOnboardingCompleted;
@property (readonly, nonatomic) BOOL isCurrentSleepWindDownShortcutsOnboardingCompleted;
@property (readonly, nonatomic) long long sleepCoachingOnboardingCompletedVersion;
@property (readonly, nonatomic) long long sleepTrackingOnboardingCompletedVersion;
@property (readonly, nonatomic) long long sleepWindDownShortcutsOnboardingCompletedVersion;
@property (readonly, nonatomic) NSDate *sleepCoachingOnboardingFirstCompletedDate;
@property (readonly, nonatomic) NSDate *sleepTrackingOnboardingFirstCompletedDate;
@property (readonly, nonatomic) NSDate *sleepWindDownShortcutsOnboardingFirstCompletedDate;
@property (readonly, nonatomic) long long sleepCoachingOnboardingCompletedVersion;
@property (readonly, copy, nonatomic) NSDate *sleepCoachingOnboardingFirstCompletedDate;
@property (readonly, nonatomic) long long sleepTrackingOnboardingCompletedVersion;
@property (readonly, copy, nonatomic) NSDate *sleepTrackingOnboardingFirstCompletedDate;
@property (readonly, nonatomic) long long sleepWindDownShortcutsOnboardingCompletedVersion;
@property (readonly, copy, nonatomic) NSDate *sleepWindDownShortcutsOnboardingFirstCompletedDate;
@property (readonly, nonatomic, getter=isCurrentSleepCoachingOnboardingCompleted) BOOL currentSleepCoachingOnboardingCompleted;
@property (readonly, nonatomic, getter=isCurrentSleepTrackingOnboardingCompleted) BOOL currentSleepTrackingOnboardingCompleted;
@property (readonly, nonatomic, getter=isCurrentSleepWindDownShortcutsOnboardingCompleted) BOOL currentSleepWindDownShortcutsOnboardingCompleted;
@property (readonly, nonatomic, getter=isAnySleepTrackingOnboardingCompleted) BOOL anySleepTrackingOnboardingCompleted;
@property (readonly, nonatomic, getter=isAnySleepCoachingOnboardingCompleted) BOOL anySleepCoachingOnboardingCompleted;
@property (readonly, nonatomic, getter=isAnySleepWindDownShortcutsOnboardingCompleted) BOOL anySleepWindDownShortcutsOnboardingCompleted;
@property (readonly, copy, nonatomic) NSDate *wakeUpEarlyNotificationConfirmedDate;
@property (readonly, copy, nonatomic) NSDate *wakeUpAlarmDismissedDate;
@property (readonly, copy, nonatomic) NSDate *wakeUpOverriddenDate;
@property (readonly, copy, nonatomic) NSDate *wakeUpConfirmedUntilDate;
@property (readonly, copy, nonatomic) NSDate *wakeUpAlarmSnoozedUntilDate;
@property (readonly, copy, nonatomic) NSDate *goodMorningDismissedDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<HKSPSyncAnchor> syncAnchor;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly, copy, nonatomic) NSDate *lastModifiedDate;

+ (void)_appendDateDescriptionIfRelevant:(id)a0 withName:(id)a1 toBuilder:(id)a2;

- (id)objectWithSyncAnchor:(id)a0;
- (BOOL)isEquivalentTo:(id)a0;
- (id)init;
- (id)succinctDescriptionBuilder;
- (void)encodeWithCoder:(id)a0;
- (id)mutableCopy;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)_migrateForCoder:(id)a0;
- (id)initFromObject:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)_needsMigrationForCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToModel:(id)a0;

@end
