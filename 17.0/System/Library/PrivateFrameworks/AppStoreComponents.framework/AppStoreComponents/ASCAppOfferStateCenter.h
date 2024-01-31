@class ASCPendingPromises, ASCJitterBackoff, ASCWorkspace, NSString, NSObject, AMSPromise, NSMapTable;
@protocol OS_os_log, ASCServices;

@interface ASCAppOfferStateCenter : NSObject <ASCAppOfferStateDelegate>

@property (class, readonly) NSObject<OS_os_log> *log;
@property (class, readonly) ASCAppOfferStateCenter *sharedCenter;

@property (readonly, nonatomic) id<ASCServices> connection;
@property (readonly, nonatomic) ASCWorkspace *workspace;
@property (readonly, nonatomic) NSMapTable *stateMachines;
@property (readonly, nonatomic) ASCJitterBackoff *reconnectBackoff;
@property (readonly, nonatomic) ASCPendingPromises *pendingActionPromises;
@property (retain, nonatomic) AMSPromise *service;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)connectToService;
- (void)daemonConnectionWasLost:(id)a0;
- (void)daemonDidRebootstrap:(id)a0;
- (id)initWithConnection:(id)a0 workspace:(id)a1;
- (void)offer:(id)a0 didChangeState:(id)a1 withMetadata:(id)a2 flags:(long long)a3;
- (void)offer:(id)a0 didChangeStatusText:(id)a1;
- (id)performActionOfOffer:(id)a0 withActivity:(id)a1 inContext:(id)a2;
- (id)performActionOfOffer:(id)a0 withActivity:(id)a1 inContext:(id)a2 usingService:(id)a3;
- (id)performFallbackActionForOffer:(id)a0;
- (id)reinstallWatchAppWithID:(id)a0;
- (id)reinstallWatchSystemAppWithBundleID:(id)a0;
- (void)scheduleTryReconnect;
- (id)stateMachineForOffer:(id)a0;
- (void)stopObservingStateForOffer:(id)a0;
- (void)tryReconnect;
- (void)useOfferStateMachineFallback;

@end
