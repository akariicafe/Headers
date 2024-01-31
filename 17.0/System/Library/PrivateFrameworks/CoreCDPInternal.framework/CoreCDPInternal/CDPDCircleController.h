@class NSString, CDPDCircleStateObserver, NSArray, NSObject;
@protocol OS_dispatch_queue, CDPDOctagonTrustProxy, CDPDCircleProxy, CDPDCircleDelegate, CDPStateUIProviderInternal;

@interface CDPDCircleController : NSObject <CDPDCircleControl> {
    CDPDCircleStateObserver *_circleJoinObserver;
    NSObject<OS_dispatch_queue> *_requestSynchronizationQueue;
    unsigned long long _cliqueStatusRetryCount;
    NSArray *_retryIntervals;
    NSObject<OS_dispatch_queue> *_cdpdCircleDefaultQueue;
}

@property (retain, nonatomic) id<CDPStateUIProviderInternal> uiProvider;
@property (weak, nonatomic) id<CDPDCircleDelegate> delegate;
@property (retain, nonatomic) id<CDPDOctagonTrustProxy> octagonProxy;
@property (retain, nonatomic) id<CDPDCircleProxy> circleProxy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)peerID;
- (unsigned long long)circleStatus;
- (void).cxx_destruct;
- (BOOL)synchronizeCircleViews;
- (void)joinCircleWithCompletion:(id /* block */)a0;
- (void)_attemptCustodianBackupRecoveryWithInfo:(id)a0 result:(id)a1 ignoreBackups:(BOOL)a2 completion:(id /* block */)a3;
- (void)_joinCircleFallbackWithResult:(id)a0 ignoreBackups:(BOOL)a1 completion:(id /* block */)a2;
- (void)_joinCircleIgnoringBackups:(BOOL)a0 completion:(id /* block */)a1;
- (id)_peerDeviceNamesByPeerID;
- (void)_requestCircleJoinWithObserver:(id)a0 requestBlock:(id /* block */)a1 completion:(id /* block */)a2;
- (void)_requestToJoinAfterRestoreAndWaitForSuccessWithHandler:(id /* block */)a0;
- (void)_requestToJoinAndWaitForSuccessWithHandler:(id /* block */)a0;
- (void)_requestToJoinWithObserver:(id)a0 completion:(id /* block */)a1;
- (void)_requestToJoinWithRequestBlock:(id /* block */)a0 completion:(id /* block */)a1;
- (void)_silentReauthWithCompletion:(id /* block */)a0;
- (void)applyToJoinCircleWithJoinHandler:(id /* block */)a0;
- (BOOL)canRetryCliqueStatus;
- (void)cancelApplicationToJoinCircle;
- (int)circleSyncingStatus;
- (long long)cliqueStatus;
- (id)initWithUiProvider:(id)a0 delegate:(id)a1 circleProxy:(id)a2 octagonTrustProxy:(id)a3;
- (void)joinCircleIgnoringBackups:(BOOL)a0 completion:(id /* block */)a1;
- (long long)nextRetryInterval;
- (void)prepareCircleStateForRecovery;
- (void)promptForCredentials:(id /* block */)a0;
- (void)resetCircleIncludingCloudKitData:(BOOL)a0 cloudKitResetReasonDescription:(id)a1 withCompletion:(id /* block */)a2;
- (void)useCircleInfoToUpdateNameForDevices:(id)a0;

@end
