@class NSDate, NSString, HDRapportMessenger, HDWorkoutSessionServer, NSMutableDictionary, HKRateLimiter, NSObject;
@protocol OS_dispatch_source;

@interface HDWorkoutSessionRapportSyncController : NSObject <HDWorkoutSessionSyncController, HDRapportMessengerObserver> {
    HDRapportMessenger *_rapportMessenger;
    HDWorkoutSessionServer *_sessionServer;
    HKRateLimiter *_dataRateLimiter;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_source> *_heartbeatSource;
    NSObject<OS_dispatch_source> *_sendHeartbeatTimeoutSource;
    NSObject<OS_dispatch_source> *_receiveHeartbeatTimeoutSource;
    NSMutableDictionary *_lock_pendingTransactionsByRequest;
    NSDate *_lock_lastPingDate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_decodedTransactionWithData:(id)a0 error:(id *)a1;

- (id)sessionConfiguration;
- (void).cxx_destruct;
- (void)sendDataToRemoteWorkoutSession:(id)a0 completion:(id /* block */)a1;
- (void)_resetHeartbeat;
- (void)receivedEventUpdate:(id)a0 completion:(id /* block */)a1;
- (void)receivedStateUpdate:(id)a0 completion:(id /* block */)a1;
- (void)sendStateEvent:(long long)a0 date:(id)a1 completion:(id /* block */)a2;
- (void)_cancelReceiveHeartbeatTimeout;
- (void)_cancelSendHeartbeat;
- (void)_cancelSendHeartbeatTimeout;
- (void)_enqueueTransaction:(id)a0 requestName:(id)a1;
- (BOOL)_isDataRateLimiterDisabledByUserDefaults;
- (void)_lock_cancelReceiveHeartbeatTimeout;
- (void)_lock_cancelSendHeartbeat;
- (void)_lock_cancelSendHeartbeatTimeout;
- (void)_receiveHeartbeatDidTimeout;
- (void)_scheduleHeartbeat;
- (void)_scheduleReceiveHeartbeatTimeout;
- (void)_scheduleSendHeartbeatTimeout;
- (void)_sendHeartbeat;
- (void)_sendPendingTransactions;
- (double)heartbeatInterval;
- (double)heartbeatReceiveTimeout;
- (id)initWithRapportMessenger:(id)a0 sessionServer:(id)a1;
- (void)rapportMessenger:(id)a0 didReceiveRequest:(id)a1 data:(id)a2 responseHandler:(id /* block */)a3;
- (void)receivedBackgroundRuntimeRequestWithCompletion:(id /* block */)a0;
- (void)receivedCurrentActivityUpdate:(id)a0 completion:(id /* block */)a1;
- (void)receivedDataFromRemoteWorkoutSession:(id)a0 completion:(id /* block */)a1;
- (void)receivedHeartbeatWithCompletion:(id /* block */)a0;
- (void)receivedMirroringStopRequestWithCompletion:(id /* block */)a0;
- (void)receivedRecoveryRequestWithResponseHandler:(id /* block */)a0;
- (void)receivedStateEvent:(id)a0 completion:(id /* block */)a1;
- (void)sendBackgroundRuntimeRequestWithCompletion:(id /* block */)a0;
- (void)sendCurrentActivityUpdate:(id)a0 completion:(id /* block */)a1;
- (void)sendEventUpdate:(id)a0 completion:(id /* block */)a1;
- (void)sendMirroringStartRequestWithCompletion:(id /* block */)a0;
- (void)sendMirroringStopRequestWithCompletion:(id /* block */)a0;
- (void)sendRequest:(id)a0 transaction:(id /* block */)a1 completion:(id /* block */)a2;
- (void)sendRequest:(id)a0 transaction:(id /* block */)a1 responseHandler:(id /* block */)a2;
- (void)sendStateUpdate:(long long)a0 date:(id)a1 completion:(id /* block */)a2;
- (id)sessionGlobalState;

@end
