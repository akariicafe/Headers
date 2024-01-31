@class NSUUID, HMFMessageDispatcher, NSString, HMXPCClient, NSObject;
@protocol OS_dispatch_queue;

@interface HMClientConnection : NSObject <HMFLogging, HMFMessageReceiver>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (retain, nonatomic) HMXPCClient *xpcClient;
@property (retain, nonatomic) NSUUID *uuid;
@property BOOL shouldWeRetrySendingSignOutMessageToHomeKitDaemon;
@property (readonly, nonatomic) HMFMessageDispatcher *msgDispatcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)sharedInstance;
+ (BOOL)areAnyHomePodsConfigured;
+ (id)siriHomeIdentifier;
+ (BOOL)areAnySpeakersConfigured;
+ (BOOL)areAnyAccessoriesConfigured;
+ (BOOL)areAnyHomePodMiniConfigured;
+ (BOOL)areAnyTelevisionAccessoriesConfigured;
+ (BOOL)areHomesConfigured;
+ (BOOL)areAnyLargeHomePodConfigured;
+ (id)siriCurrentHome;
+ (BOOL)areAnyAppleTVAccessoriesConfigured;
+ (id)logCategory;

- (void)_start;
- (id)init;
- (id)initWithXPCClient:(id)a0 messageDispatcher:(id)a1;
- (void)_reportUnconfiguredHomesFailureForSiriCommand:(id)a0 withCompletion:(id /* block */)a1;
- (void)_IDMSAccountUsernameModifiedWithCompletionHandler:(id /* block */)a0;
- (void)sendSiriCommand:(id)a0 completionHandler:(id /* block */)a1;
- (void)notifyAccountStatusUpdate:(unsigned long long)a0 accountIdentifier:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)_retrySendingSignOutWithCompletion:(id /* block */)a0;
- (void)_primaryAccountDidChange:(id)a0 modified:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)_registerToDaemon;
- (void).cxx_destruct;
- (void)_primaryAccountWasDeletedWithCompletionHandler:(id /* block */)a0;
- (id)initWithNoValidation;
- (void)_reportResultsToHandler:(id /* block */)a0;
- (void)sendIntentRequestCommand:(id)a0 withPayload:(id)a1 completionHandler:(id /* block */)a2;
- (void)_reportIntentResultToHandler:(id /* block */)a0;
- (void)requestSiriSyncDataWithValidity:(id)a0 completion:(id /* block */)a1;
- (BOOL)shouldRetrySendingSignOutMessageDueToError:(id)a0;

@end
