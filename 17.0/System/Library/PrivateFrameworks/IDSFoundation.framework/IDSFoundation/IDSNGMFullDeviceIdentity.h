@interface IDSNGMFullDeviceIdentity : NSObject

+ (id)identityWithAccess:(id)a0 usageIdentifier:(id)a1 error:(id *)a2;
+ (id)identityWithDataRepresentation:(id)a0 error:(id *)a1;

- (id)publicDeviceIdentityWithError:(id *)a0;
- (BOOL)shouldRollEncryptionIdentity;
- (BOOL)eraseFromKeyChain:(id *)a0;
- (id)batchSign:(id)a0 forType:(long long)a1 error:(id *)a2;
- (void)unsealMessageAndAttributes:(id)a0 guid:(id)a1 signedByPublicIdentity:(id)a2 decryptionBlock:(id /* block */)a3;
- (id)dataRepresentationWithError:(id *)a0;
- (id)keyRollingTicketWithError:(id *)a0;
- (id)sign:(id)a0 forType:(long long)a1 error:(id *)a2;
- (void)unsealMessageAndAttributes:(id)a0 signedByPublicIdentity:(id)a1 decryptionBlock:(id /* block */)a2;
- (void)unsealMessage:(id)a0 signedByPublicIdentity:(id)a1 decryptionBlock:(id /* block */)a2;
- (id)unsealMessage:(id)a0 signedByPublicIdentity:(id)a1 error:(id *)a2;
- (BOOL)updateWithRegisteredTicket:(id)a0 error:(id *)a1;

@end
