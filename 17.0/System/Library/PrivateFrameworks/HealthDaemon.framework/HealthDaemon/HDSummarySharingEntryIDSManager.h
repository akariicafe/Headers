@class HKObserverSet, NSString, HDProfile, NSOperationQueue, HDIDSReachabilityOperation, NSObject, HDIDSInvitationManager;
@protocol OS_dispatch_queue;

@interface HDSummarySharingEntryIDSManager : NSObject <HDProfileReadyObserver, HDIDSInvitationManagerDelegate> {
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_reachabilityQueue;
    NSOperationQueue *_operationQueue;
    HDIDSReachabilityOperation *_reachabilityOperation;
}

@property (retain, nonatomic) HDIDSInvitationManager *invitationManager;
@property (retain, nonatomic) HKObserverSet *observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)profileDidBecomeReady:(id)a0;
- (void)inviteSharingDataWithIdentifier:(id)a0 firstName:(id)a1 lastName:(id)a2 sharingAuthorizations:(id)a3 userWheelchairMode:(long long)a4 completion:(id /* block */)a5;
- (void)leaveInvitationWithUUID:(id)a0 completion:(id /* block */)a1;
- (void)removeObserver:(id)a0;
- (id)initWithProfile:(id)a0;
- (void)invitationManager:(id)a0 didReceiveInvitation:(id)a1;
- (void)invitationManager:(id)a0 didRescindInvitation:(id)a1;
- (void)invitationManager:(id)a0 didDeclineInvitation:(id)a1;
- (void)beginObservingReachabilityStatusForIdentifiers:(id)a0 isInitialQuery:(BOOL)a1;
- (void)acceptInvitationWithUUID:(id)a0 completion:(id /* block */)a1;
- (void)revokeInvitationWithUUID:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)invalidateAndWait;
- (void)declineInvitationWithUUID:(id)a0 completion:(id /* block */)a1;
- (void)invitationManager:(id)a0 didAcceptInvitation:(id)a1;
- (void)addObserver:(id)a0;

@end
