@class HMDHomeManager, NSUUID, HMFMessageDispatcher, NSString, NSObject;
@protocol OS_dispatch_queue, HMDRelaunchHandling;

@interface HMDRetailDemoModeRequestHandler : HMFObject <HMFMessageReceiver>

@property (readonly, weak) HMDHomeManager *homeManager;
@property (readonly, copy) NSUUID *identifier;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (readonly, weak) id<HMDRelaunchHandling> relaunchHandler;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configure;
- (void).cxx_destruct;
- (void)_handleConfigRetailDemoModeMessage:(id)a0;
- (void)_handleConfigRetailDemoModeMessageForFinalize:(id)a0;
- (void)_handleConfigRetailDemoModeMessageForPrepare:(id)a0;
- (id)initWithHomeManager:(id)a0 messageDispatcher:(id)a1 relaunchHandler:(id)a2;

@end
