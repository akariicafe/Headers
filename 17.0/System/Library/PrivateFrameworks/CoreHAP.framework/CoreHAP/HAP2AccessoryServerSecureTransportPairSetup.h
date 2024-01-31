@class NSString;

@interface HAP2AccessoryServerSecureTransportPairSetup : HAP2AccessoryServerSecureTransportBase <HAP2AccessoryServerTransportDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultEncryptedSession;

- (id)initWithTransport:(id)a0 operationQueue:(id)a1 encryptedSession:(id)a2;
- (void)transport:(id)a0 didReceiveEvent:(id)a1;

@end
