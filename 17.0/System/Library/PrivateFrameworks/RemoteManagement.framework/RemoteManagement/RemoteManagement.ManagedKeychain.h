@class NSString, _TtC16RemoteManagement15ManagedKeychain;

@interface RemoteManagement.ManagedKeychain : NSObject {
    void /* unknown type, empty encoding */ accessGroup;
}

@property (class, nonatomic, readonly) _TtC16RemoteManagement15ManagedKeychain *sharedInstance;
@property (class, nonatomic, readonly) NSString *assignedPersistentRef;
@property (class, nonatomic, readonly) NSString *assignedUserName;

- (id)init;
- (void).cxx_destruct;
- (id)assetKeysForCertificatesWithScope:(long long)a0 persona:(id)a1 error:(id *)a2;
- (id)assetKeysForIdentitiesWithScope:(long long)a0 persona:(id)a1 error:(id *)a2;
- (id)assetKeysForPasswordsWithScope:(long long)a0 persona:(id)a1 error:(id *)a2;
- (id)assignCertWithAssetKey:(id)a0 scope:(long long)a1 persona:(id)a2 toConfigurationKey:(id)a3 accessibility:(id)a4 accessGroup:(id)a5 error:(id *)a6;
- (id)assignIdentityWithAssetKey:(id)a0 scope:(long long)a1 persona:(id)a2 toConfigurationKey:(id)a3 accessibility:(id)a4 accessGroup:(id)a5 error:(id *)a6;
- (id)assignPasswordWithAssetKey:(id)a0 scope:(long long)a1 persona:(id)a2 toConfigurationKey:(id)a3 accessibility:(id)a4 accessGroup:(id)a5 returnUserName:(id *)a6 error:(id *)a7;
- (id)certificatePersistentRefWithAssetKey:(id)a0 scope:(long long)a1 persona:(id)a2 error:(id *)a3;
- (id)certificatePersistentRefsWithAssetKeys:(id)a0 scope:(long long)a1 persona:(id)a2 error:(id *)a3;
- (struct __SecCertificate { } *)copyCertificateWithAssetKey:(id)a0 scope:(long long)a1 persona:(id)a2 error:(id *)a3;
- (id)debugStateWithScope:(long long)a0 persona:(id)a1;
- (BOOL)deleteWithAssetKey:(id)a0 scope:(long long)a1 persona:(id)a2 error:(id *)a3;
- (BOOL)hasAssetForAssetKey:(id)a0 scope:(long long)a1 persona:(id)a2;
- (BOOL)storeACMEIdentityWithDirectoryURL:(id)a0 clientIdentifier:(id)a1 keySize:(unsigned long long)a2 keyType:(id)a3 hardwareBound:(BOOL)a4 subject:(id)a5 subjectAltName:(id)a6 usageFlags:(unsigned long long)a7 extendedKeyUsage:(id)a8 attest:(BOOL)a9 isUserEnrollment:(BOOL)a10 assetKey:(id)a11 scope:(long long)a12 persona:(id)a13 error:(id *)a14;
- (BOOL)storeSCEPIdentityWithUrl:(id)a0 caInstanceName:(id)a1 caFingerprint:(id)a2 caCapabilities:(id)a3 challenge:(id)a4 subject:(id)a5 keySize:(unsigned long long)a6 usageFlags:(unsigned long long)a7 subjectAltName:(id)a8 retries:(unsigned long long)a9 retryDelay:(unsigned int)a10 assetKey:(id)a11 scope:(long long)a12 persona:(id)a13 error:(id *)a14;
- (BOOL)storeWithDerData:(id)a0 assetKey:(id)a1 scope:(long long)a2 persona:(id)a3 error:(id *)a4;
- (BOOL)storeWithPassword:(id)a0 userName:(id)a1 assetKey:(id)a2 scope:(long long)a3 persona:(id)a4 error:(id *)a5;
- (BOOL)storeWithPemData:(id)a0 assetKey:(id)a1 scope:(long long)a2 persona:(id)a3 error:(id *)a4;
- (BOOL)storeWithPkcs12Data:(id)a0 password:(id)a1 assetKey:(id)a2 scope:(long long)a3 persona:(id)a4 error:(id *)a5;
- (BOOL)unassignAllAssetsFromConfigurationKey:(id)a0 scope:(long long)a1 persona:(id)a2 error:(id *)a3;

@end
