@interface WFSetupServerInternal : NSObject {
    void /* unknown type, empty encoding */ completionHandler;
    void /* unknown type, empty encoding */ setupProgressEventHandler;
    void /* unknown type, empty encoding */ userInteractionProgressEventHandler;
    void /* unknown type, empty encoding */ setupPromptPinHandler;
    void /* unknown type, empty encoding */ receivedObjectHandler;
    void /* unknown type, empty encoding */ shouldAdvertiseFast;
    void /* unknown type, empty encoding */ sfService;
    void /* unknown type, empty encoding */ resumeAuthTag;
    void /* unknown type, empty encoding */ peer;
    void /* unknown type, empty encoding */ sfSession;
    void /* unknown type, empty encoding */ serverState;
    void /* unknown type, empty encoding */ preventExitForLocaleClient;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ dispatchQueue;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, copy) id /* block */ setupProgressEventHandler;
@property (nonatomic, copy) id /* block */ userInteractionProgressEventHandler;
@property (nonatomic, copy) id /* block */ setupPromptPinHandler;
@property (nonatomic, copy) id /* block */ receivedObjectHandler;
@property (nonatomic, retain) void /* unknown type, empty encoding */ anisetteDataProvider;

- (id)initWithQueue:(id)a0;
- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)activate;
- (void).cxx_destruct;
- (void)sendUserInteractionEventInEvent:(id)a0 withEncryption:(BOOL)a1 responseHandler:(id /* block */)a2;
- (void)tryPin:(id)a0;
- (void)sendObjectWithObject:(id)a0 encrypted:(BOOL)a1;
- (void)sendSetupWithAction:(unsigned int)a0 info:(id)a1 responseHandler:(id /* block */)a2;
- (void)startSecureChannelPairingWith:(BOOL)a0 completion:(id /* block */)a1;
- (void)startSecureChannelPairingWith:(BOOL)a0 context:(id)a1 completion:(id /* block */)a2;

@end
