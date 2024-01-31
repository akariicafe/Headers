@class NSString, NSDictionary, CRKAnnotatedCredentialManifest;
@protocol CRKKeychain;

@interface CRKAnnotatedCredentialStore : NSObject

@property (readonly, nonatomic) id<CRKKeychain> keychain;
@property (readonly, copy, nonatomic) NSString *accessGroup;
@property (readonly, copy, nonatomic) NSString *manifestStorageKey;
@property (readonly, nonatomic) id /* block */ addBlock;
@property (readonly, nonatomic) id /* block */ fetchBlock;
@property (readonly, copy, nonatomic) NSDictionary *debugInfo;
@property (readonly, copy, nonatomic) CRKAnnotatedCredentialManifest *manifest;

+ (id)certificateStoreWithKeychain:(id)a0 accessGroup:(id)a1 manifestStorageKey:(id)a2;
+ (id)identityStoreWithKeychain:(id)a0 accessGroup:(id)a1 manifestStorageKey:(id)a2;

- (void).cxx_destruct;
- (id)addCredentials:(id)a0;
- (id)addCredential:(id)a0 manifest:(id)a1;
- (id)credentialWithPersistentID:(id)a0;
- (id)dataForStorageKey:(id)a0;
- (void)forgetCredentialsWithPersistentIDs:(id)a0;
- (id)initWithKeychain:(id)a0 accessGroup:(id)a1 manifestStorageKey:(id)a2 addBlock:(id /* block */)a3 fetchBlock:(id /* block */)a4;
- (void)removeCredentialsWithPersistentIDs:(id)a0;
- (void)removePersistentIDsFromKeychain:(id)a0;
- (void)setData:(id)a0 forStorageKey:(id)a1;
- (void)setStoredManifest:(id)a0;
- (void)setStoredManifestData:(id)a0;
- (id)storedManifest;
- (id)storedManifestData;

@end
