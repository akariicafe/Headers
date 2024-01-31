@class NSDictionary, CRKAnnotatedCredentialStore, CRKASMCredentialManifest;
@protocol CRKKeychain;

@interface CRKASMCredentialStore : NSObject

@property (readonly, nonatomic) id<CRKKeychain> keychain;
@property (readonly, nonatomic) CRKAnnotatedCredentialStore *certificateAnnotatedStore;
@property (readonly, nonatomic) CRKAnnotatedCredentialStore *identityAnnotatedStore;
@property (readonly, copy, nonatomic) NSDictionary *debugInfo;
@property (readonly, copy, nonatomic) CRKASMCredentialManifest *certificateManifest;
@property (readonly, copy, nonatomic) CRKASMCredentialManifest *identityManifest;

- (void).cxx_destruct;
- (void)clearCertificates;
- (void)clearIdentities;
- (id)addCertificate:(id)a0 entry:(id)a1;
- (id)addCertificate:(id)a0 forUserIdentifier:(id)a1;
- (id)addCertificates:(id)a0 forUserIdentifier:(id)a1;
- (id)addEntriesByCertificate:(id)a0;
- (id)addIdentity:(id)a0 entry:(id)a1;
- (id)addIdentity:(id)a0 forUserIdentifier:(id)a1;
- (id)certificateWithPersistentID:(id)a0;
- (void)forgetCertificatesWithPersistentIDs:(id)a0;
- (void)forgetIdentitiesWithPersistentIDs:(id)a0;
- (id)identityWithPersistentID:(id)a0;
- (id)initWithKeychain:(id)a0 accessGroup:(id)a1 certificateManifestStorageKey:(id)a2 identityManifestStorageKey:(id)a3;
- (id)makeCertificateWithCommonNamePrefix:(id)a0 userIdentifier:(id)a1;
- (id)makeEntryWithCertificate:(id)a0 userIdentifier:(id)a1;
- (id)makeIdentityWithCommonNamePrefix:(id)a0 userIdentifier:(id)a1;
- (void)removeCertificatesWithPersistentIDs:(id)a0;
- (void)removeIdentitiesWithPersistentIDs:(id)a0;

@end
