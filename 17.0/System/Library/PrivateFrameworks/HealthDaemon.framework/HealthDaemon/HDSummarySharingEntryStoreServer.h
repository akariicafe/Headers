@class NSString, HDSharingAuthorizationManager, HDSummarySharingEntryManager, HDSummarySharingEntryIDSManager;

@interface HDSummarySharingEntryStoreServer : HDStandardTaskServer <HKSummarySharingEntryStoreServerInterface, HDSummarySharingEntryObserver, HDSummarySharingEntryIDSManagerReachabilityObserver, HDProfileReadyObserver> {
    HDSummarySharingEntryIDSManager *_summarySharingEntryIDSManager;
    HDSummarySharingEntryManager *_sharingEntryManager;
    HDSharingAuthorizationManager *_sharingAuthorizationManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requiredEntitlements;
+ (id)taskIdentifier;

- (id)exportedInterface;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void)profileDidBecomeReady:(id)a0;
- (id)remoteInterface;
- (void)dealloc;
- (void)connectionInvalidated;
- (void).cxx_destruct;
- (void)sharingEntriesDidUpdate:(id)a0;
- (void)remote_acceptInvitationWithUUID:(id)a0 completion:(id /* block */)a1;
- (void)remote_beginObservingReachabilityStatusForIdentifiers:(id)a0 isInitialQuery:(BOOL)a1;
- (void)remote_declineInvitationWithUUID:(id)a0 completion:(id /* block */)a1;
- (void)remote_fetchSharingEntriesWithCompletionHandler:(id /* block */)a0;
- (void)remote_inviteSharingDataWithIdentifier:(id)a0 firstName:(id)a1 lastName:(id)a2 sharingAuthorizations:(id)a3 userWheelchairMode:(long long)a4 completion:(id /* block */)a5;
- (void)remote_leaveInvitationWithUUID:(id)a0 completion:(id /* block */)a1;
- (void)remote_revokeInvitationWithUUID:(id)a0 completion:(id /* block */)a1;
- (void)remote_unpauseInvitationWithUUID:(id)a0 completion:(id /* block */)a1;
- (void)remote_updateAuthorizationIdentifiersForInvitationUUID:(id)a0 sharingAuthorizationsToAdd:(id)a1 sharingAuthorizationsToDelete:(id)a2 deleteOnCommit:(BOOL)a3 completion:(id /* block */)a4;
- (void)remote_updateNotificationStatusWithUUID:(id)a0 notificationStatus:(long long)a1 completion:(id /* block */)a2;
- (void)summarySharingEntryIDSManager:(id)a0 didUpdateReachabilityStatus:(id)a1 error:(id)a2;

@end
