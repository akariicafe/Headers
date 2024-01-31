@interface WFSetupClientInternal : NSObject <AKAnisetteServiceProtocol> {
    void /* unknown type, empty encoding */ interruptionHandler;
    void /* unknown type, empty encoding */ invalidationHandler;
    void /* unknown type, empty encoding */ setupProgressEventHandler;
    void /* unknown type, empty encoding */ userInteractionProgressEventHandler;
    void /* unknown type, empty encoding */ setupSecurePairingCompletionHandler;
    void /* unknown type, empty encoding */ receivedObjectHandler;
    void /* unknown type, empty encoding */ showPinHandler;
    void /* unknown type, empty encoding */ clientState;
    void /* unknown type, empty encoding */ sfSession;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ dispatchQueue;
@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, retain) void /* unknown type, empty encoding */ peerDevice;
@property (nonatomic, retain) void /* unknown type, empty encoding */ messageSessionTemplate;
@property (nonatomic, copy) id /* block */ setupProgressEventHandler;
@property (nonatomic, copy) id /* block */ userInteractionProgressEventHandler;
@property (nonatomic, copy) id /* block */ setupSecurePairingCompletionHandler;
@property (nonatomic, copy) id /* block */ receivedObjectHandler;
@property (nonatomic, copy) id /* block */ showPinHandler;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)activate;
- (void)legacyAnisetteDataForDSID:(id)a0 withCompletion:(id /* block */)a1;
- (void)fetchAnisetteDataAndProvisionIfNecessary:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)eraseAnisetteWithCompletion:(id /* block */)a0;
- (void)provisionAnisetteWithCompletion:(id /* block */)a0;
- (void)syncAnisetteWithSIMData:(id)a0 completion:(id /* block */)a1;
- (void)sendUserInteractionEventInEvent:(id)a0 withEncryption:(BOOL)a1 responseHandler:(id /* block */)a2;
- (id)initWithQueue:(id)a0 deviceIdentifier:(id)a1;
- (void)sendObject:(id)a0 encrypted:(BOOL)a1;

@end
