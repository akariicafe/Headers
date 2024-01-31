@class NSDictionary, NSNumber, HMDAccessoryServerBrowserDemo;

@interface HMDAccessoryServerDemo : HAPAccessoryServer {
    NSNumber *_category;
}

@property (weak, nonatomic) HMDAccessoryServerBrowserDemo *browser;
@property (nonatomic) BOOL _paired;
@property (nonatomic) BOOL _hasPairings;
@property (retain, nonatomic) NSDictionary *accessoryInfo;
@property (readonly) BOOL testMode;

- (long long)linkType;
- (BOOL)isPaired;
- (id)category;
- (void)setCategory:(id)a0;
- (void).cxx_destruct;
- (BOOL)_delegateRespondsToSelector:(SEL)a0;
- (void)addPairing:(id)a0 completionQueue:(id)a1 completionHandler:(id /* block */)a2;
- (void)continuePairingAfterAuthPrompt;
- (void)discoverAccessories;
- (void)enableEvents:(BOOL)a0 forCharacteristics:(id)a1 withCompletionHandler:(id /* block */)a2 queue:(id)a3;
- (void)handleUpdatesForCharacteristics:(id)a0 stateNumber:(id)a1;
- (BOOL)hasPairings;
- (void)identifyWithCompletion:(id /* block */)a0;
- (void)listPairingsWithCompletionQueue:(id)a0 completionHandler:(id /* block */)a1;
- (void)readCharacteristicValues:(id)a0 timeout:(double)a1 completionQueue:(id)a2 completionHandler:(id /* block */)a3;
- (void)removePairing:(id)a0 completionQueue:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)removePairingForCurrentControllerOnQueue:(id)a0 completion:(id /* block */)a1;
- (void)startPairingWithRequest:(id)a0;
- (BOOL)stopPairingWithError:(id *)a0;
- (BOOL)tryPairingPassword:(id)a0 onboardingSetupPayloadString:(id)a1 error:(id *)a2;
- (void)writeCharacteristicValues:(id)a0 timeout:(double)a1 completionQueue:(id)a2 completionHandler:(id /* block */)a3;
- (void)_parseAttributeDatabase:(id)a0;
- (id)initCommon:(id)a0 browser:(id)a1;
- (id)initWithName:(id)a0 identifier:(id)a1 deviceInfo:(id)a2 paired:(BOOL)a3 keyStore:(id)a4 testMode:(BOOL)a5 browser:(id)a6;
- (void)processCharacteristicWrite:(id)a0 value:(id)a1;
- (void)sendDelayedResponse:(unsigned long long)a0 responses:(id)a1 readOperation:(BOOL)a2 completionQueue:(id)a3 completionHandler:(id /* block */)a4;

@end
