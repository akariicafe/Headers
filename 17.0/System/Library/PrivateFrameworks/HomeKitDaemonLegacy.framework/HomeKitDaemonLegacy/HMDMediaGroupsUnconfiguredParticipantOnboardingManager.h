@class NSUUID, NSString, NSMutableDictionary;
@protocol HMDMediaGroupsUnconfiguredParticipantOnboardingManagerDataSource;

@interface HMDMediaGroupsUnconfiguredParticipantOnboardingManager : NSObject <HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_queuedAssociatedGroupIdentifiers;
}

@property (readonly, copy) NSUUID *identifier;
@property (weak) id<HMDMediaGroupsUnconfiguredParticipantOnboardingManagerDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)initWithIdentifier:(id)a0;
- (id)logIdentifier;
- (void).cxx_destruct;
- (id)queuedParticipantAccessoryUUIDs;
- (void)setQueuedAssociatedGroupIdentifier:(id)a0 forParticipantAccessoryUUID:(id)a1;
- (void)attemptOnboardingForParticipantAccessoryUUID:(id)a0;
- (void)configureWithNotificationCenter:(id)a0;
- (void)dequeueAvailableOnboadedParticipants;
- (id)dequeuedAssociatedGroupIdentifierForParticipantAccessoryUUID:(id)a0;
- (void)handleMediaGroupsAggregateConsumerUpdatedAggregateDataNotification:(id)a0;
- (id)mediaDestinationManagerWithParticipantAccessoryUUID:(id)a0;
- (void)queueOnboardingParticipantWithAccessoryUUID:(id)a0 withAssociatedGroupIdentifier:(id)a1;

@end
