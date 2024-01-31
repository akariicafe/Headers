@class NSUUID, NSString, NSMutableDictionary;
@protocol HMDMediaGroupsAggregatorBackupSenderDataSource, HMDMediaGroupsAggregateBackupMessageTimerProvider;

@interface HMDMediaGroupsAggregatorBackupSender : HMFObject <HMFLogging, HMDMediaGroupsAggregateBackupMessageTimerDelegate, HMDMediaGroupsAggregateBackupMessageTimerProvider> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_backupTimers;
}

@property (weak) id<HMDMediaGroupsAggregateBackupMessageTimerProvider> backupTimerProvider;
@property (readonly, copy) NSUUID *identifier;
@property (weak) id<HMDMediaGroupsAggregatorBackupSenderDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)initWithIdentifier:(id)a0;
- (void)clearCachedData;
- (id)logIdentifier;
- (void).cxx_destruct;
- (void)locallyRouteGroupsBackupDataMessage:(id)a0 toParticipantAccessoryUUID:(id)a1;
- (id)routerParticipantAccessoryUUID:(id)a0;
- (void)setBackUpTimer:(id)a0;
- (void)_sendBackupToFirstPartyParticipantAccessoryUUID:(id)a0 backupGroups:(id)a1;
- (void)_sendBackupToParticipantAccessoryUUID:(id)a0;
- (id)backupGroupsForParticipantAccessoryUUID:(id)a0;
- (id)backupTimerForParticipantAccessoryUUID:(id)a0;
- (void)clearCachedDataForParticipantAccessoryUUID:(id)a0;
- (void)createNewBackupTimerForParticipantAccessoryUUID:(id)a0;
- (void)didFireTimerForMediaGroupsAggregateBackupMessageTimer:(id)a0;
- (id)initWithIdentifier:(id)a0 backupTimerProvider:(id)a1;
- (void)markAttemptForParticipantAccessoryUUID:(id)a0 withMessageIdentifier:(id)a1;
- (id)mediaGroupsAggregateBackupMessageTimerWithParticipantAccessoryUUID:(id)a0;
- (id)receiverForParticipantAccessoryUUID:(id)a0;
- (void)removeBackupTimerWithParticipantAccessoryUUID:(id)a0;
- (void)routeBackedUpGroupsMessage:(id)a0 toParticipantAccessoryUUID:(id)a1;
- (void)sendBackupToParticipantAccessoryUUID:(id)a0;
- (void)startBackupTimerWithParticipantAccessoryUUID:(id)a0 dueToFailedMessageIdentifier:(id)a1;

@end
