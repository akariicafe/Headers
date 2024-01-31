@class HAP2SerializedOperationQueue, HMFActivity, NSString;
@protocol HAP2AccessoryServerPairingDriverWorkItemInfo;

@interface HAP2AccessoryServerPairingDriverWorkItem : HAP2LoggingObject <HAP2AccessoryServerPairingDriverWorkItem>

@property (readonly, weak, nonatomic) id<HAP2AccessoryServerPairingDriverWorkItemInfo> pairingDriver;
@property (readonly, nonatomic) HAP2SerializedOperationQueue *operationQueue;
@property (readonly, weak, nonatomic) HMFActivity *pairingActivity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)cancelWithError:(id)a0;
- (void)finishWithError:(id)a0;
- (id)maybePairingDriver;
- (void)runForPairingDriver:(id)a0;
- (void)startWithPairingDriver:(id)a0;

@end
