@class HMFTimer, NSMutableDictionary, NSString, NSHashTable, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, OS_os_log, HMDUserCloudShareControllerDelegate;

@interface HMDUserCloudShareController : NSObject <HMFTimerDelegate, HMFLogging> {
    NSObject<OS_os_log> *_logger;
}

@property (weak) id<HMDUserCloudShareControllerDelegate> delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, nonatomic) NSHashTable *connectedClients;
@property (retain, nonatomic) NSMutableDictionary *containerIdToConnectionIdentifierMap;
@property (readonly, nonatomic) NSMutableArray *pendingRequests;
@property (readonly, nonatomic) double pendingRequestTimeoutInterval;
@property (retain, nonatomic) HMFTimer *pendingRequestTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)identifierForConnection:(id)a0;

- (void)configure;
- (void)timerDidFire:(id)a0;
- (void).cxx_destruct;
- (void)_sendShareRequest:(id)a0 toConnection:(id)a1;
- (void)_addRequestToPending:(id)a0;
- (id)_connectionForContainerID:(id)a0;
- (void)_deregisterXpcClient:(id)a0;
- (void)_handlePendingRequestTimeouts;
- (void)_handleShareForRemoteClientRequest:(id)a0;
- (void)_invalidateXpcClient:(id)a0;
- (void)_registerWithXpcClient:(id)a0 containerIDs:(id)a1;
- (void)_removeTimerIfNotNeeded;
- (void)_resumeRequestsForContainerID:(id)a0 connection:(id)a1;
- (void)_sendRepairRequest:(id)a0 toConnection:(id)a1;
- (void)_startTimerIfNeeded;
- (void)deregisterXpcClient:(id)a0;
- (void)handleShareForRemoteClientRequest:(id)a0 home:(id)a1 completionHandler:(id /* block */)a2;
- (void)handleShareRepairForRemoteClientRequest:(id)a0 home:(id)a1 completion:(id /* block */)a2;
- (id)initWithDelegate:(id)a0 queue:(id)a1 pendingRequestTimeoutInterval:(double)a2;
- (void)invalidateXpcClient:(id)a0;
- (void)registerWithXpcClient:(id)a0 containerIDs:(id)a1;

@end
