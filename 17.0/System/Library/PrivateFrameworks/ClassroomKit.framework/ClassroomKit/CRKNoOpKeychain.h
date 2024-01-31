@class NSString;

@interface CRKNoOpKeychain : NSObject <CRKKeychain>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeItemWithPersistentID:(id)a0;
- (id)addCertificate:(id)a0 toAccessGroup:(id)a1;
- (id)addIdentity:(id)a0 toAccessGroup:(id)a1;
- (id)addPrivateKey:(id)a0 toAccessGroup:(id)a1;
- (id)certificateWithPersistentID:(id)a0;
- (id)identityWithPersistentID:(id)a0;
- (id)makeCertificateWithData:(id)a0;
- (id)makeIdentityWithCertificate:(id)a0 privateKey:(id)a1;
- (id)makeIdentityWithConfiguration:(id)a0;
- (id)makePrivateKeyWithData:(id)a0;
- (id)passwordForService:(id)a0;
- (id)privateKeyWithPersistentID:(id)a0;
- (void)setPassword:(id)a0 forService:(id)a1 accessGroup:(id)a2;

@end
