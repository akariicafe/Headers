@class WFSetupClientInternal, SFDevice, NSObject, CUMessageSession;
@protocol OS_dispatch_queue;

@interface WFSetupClient : NSObject

@property (readonly) WFSetupClientInternal *underlyingSwiftObject;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (retain, nonatomic) SFDevice *peerDevice;
@property (readonly, copy, nonatomic) CUMessageSession *messageSessionTemplate;
@property (copy, nonatomic) id /* block */ progressEventHandler;
@property (copy, nonatomic) id /* block */ setupProgressEventHandler;
@property (copy, nonatomic) id /* block */ userInteractionProgressEventHandler;
@property (copy, nonatomic) id /* block */ securePairingCompletionHandler;
@property (copy, nonatomic) id /* block */ showPINHandler;
@property (copy, nonatomic) id /* block */ receivedObjectHandler;

- (id)init;
- (void)invalidate;
- (void)activate;
- (void).cxx_destruct;
- (void)sendObject:(id)a0 encrypted:(BOOL)a1;
- (void)sendUserInteractionEvent:(id)a0 withEncryption:(BOOL)a1 responseHandler:(id /* block */)a2;

@end
