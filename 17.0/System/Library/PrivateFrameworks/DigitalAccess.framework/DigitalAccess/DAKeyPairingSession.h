@class NSString;

@interface DAKeyPairingSession : DASession <KmlOwnerPairingCallbacks, NSSecureCoding, DAKeyTrackingUpdate, DAKeyImmobilizerTokenUpdate>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithDelegate:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)preWarmForManufacturer:(id)a0;
- (id)setTrackingReceipt:(id)a0 vehicleMobilizationData:(id)a1 forKeyWithIdentifier:(id)a2;
- (id)startKeyPairingWithPassword:(id)a0 displayName:(id)a1 transport:(long long)a2;
- (id)startProbing;
- (void)didEnd:(id)a0;
- (void)didStart:(BOOL)a0;
- (void)endPointPrivacyDecryption:(id)a0 encryptedData:(id)a1 publicKey:(id)a2 callback:(id /* block */)a3;
- (void)handleFirstTransactionCompletionResult:(id)a0;
- (void)handleKeyPairingCompletionResult:(id)a0 keyInformation:(id)a1 trackingRequest:(id)a2;
- (void)handlePairingDidStart;
- (void)handlePreWarmCompletionResult:(id)a0;
- (void)handleProbingCompletionWithBrandCode:(unsigned long long)a0 error:(id)a1;
- (void)requestImmobilizerTokenRefillForKeyWithIdentifier:(id)a0 callback:(id /* block */)a1;
- (void)setImmobilizerTokens:(id)a0 publicKey:(id)a1 forKeyWithIdentifier:(id)a2 callback:(id /* block */)a3;
- (id)setTrackingReceipt:(id)a0 forKeyWithIdentifier:(id)a1;
- (id)setTrackingReceipt:(id)a0 slotIdentifier:(id)a1 confidentialMailboxData:(id)a2 ephemeralPublicKey:(id)a3 forKeyWithIdentifier:(id)a4;
- (id)startKeyPairingWithPassword:(id)a0 displayName:(id)a1;

@end
