@class NSString, HMDeviceSetupSession;

@interface HMDeviceSetupOperationHandler : NSObject <HMDeviceSetupSessionDelegate, HMFLogging, TROperationHandler>

@property (readonly, nonatomic) HMDeviceSetupSession *setupSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)init;
- (void)dealloc;
- (id)logIdentifier;
- (void).cxx_destruct;
- (void)setupSession:(id)a0 didCloseWithError:(id)a1;
- (void)_handleReceivedRequest:(id)a0 responseHandler:(id /* block */)a1;
- (void)registerMessageHandlersForSession:(id)a0;
- (void)setupSession:(id)a0 didReceiveExchangeData:(id)a1 completionHandler:(id /* block */)a2;

@end
