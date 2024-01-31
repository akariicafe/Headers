@interface MFMessageKeychainManager : NSObject

+ (void)initialize;
+ (id)newTrustManager;
+ (BOOL)_addAllIdentitiesToArray:(id *)a0 fromSyncableKeychain:(BOOL)a1 withError:(id *)a2 usingBlock:(id /* block */)a3;
+ (id)_addCertificate:(struct __SecCertificate { } *)a0 persistent:(id *)a1;
+ (id)_addPersistentMapping:(id)a0 forAddress:(id)a1;
+ (id)_copyAllIdentitiesWithError:(id *)a0 usingBlock:(id /* block */)a1;
+ (struct __SecCertificate { } *)_copyCertificateForPersistent:(id)a0 error:(id *)a1;
+ (BOOL)_matchSSLClientIdentity:(struct __SecIdentity { } *)a0 withHostname:(id)a1;
+ (id)_passwordForGenericAccount:(id)a0 service:(id)a1 error:(id *)a2;
+ (id)_passwordForHost:(id)a0 username:(id)a1 port:(int)a2 keychainProtocol:(struct __CFString { } *)a3;
+ (id)_removeCertificateForPersistent:(id)a0;
+ (BOOL)_validateIdentity:(struct __SecIdentity { } *)a0 forAddress:(id)a1 policy:(struct __SecPolicy { } *)a2 usage:(unsigned int)a3 error:(id *)a4;
+ (BOOL)addPassword:(id)a0 forServiceName:(id)a1 accountName:(id)a2 keychainAccessibility:(void *)a3 synchronizable:(BOOL)a4 error:(id *)a5;
+ (id)copyAllEncryptionIdentitiesForAddress:(id)a0 error:(id *)a1;
+ (id)copyAllSigningIdentitiesForAddress:(id)a0 error:(id *)a1;
+ (struct __SecIdentity { } *)copyClientSSLIdentityForHostName:(id)a0 error:(id *)a1;
+ (struct __SecCertificate { } *)copyEncryptionCertificateForAddress:(id)a0 error:(id *)a1;
+ (struct __SecIdentity { } *)copyIdentityForPersistentReference:(id)a0 error:(id *)a1;
+ (struct __SecPolicy { } *)copySMIMEEncryptionPolicyForAddress:(id)a0;
+ (struct __SecPolicy { } *)copySMIMESigningPolicyForAddress:(id)a0;
+ (id)passwordForHost:(id)a0 username:(id)a1 port:(int)a2 keychainProtocol:(void *)a3;
+ (id)passwordForServiceName:(id)a0 accountName:(id)a1;
+ (id)passwordForServiceName:(id)a0 accountName:(id)a1 error:(id *)a2;
+ (id)passwordForServiceName:(id)a0 accountName:(id)a1 synchronizable:(BOOL)a2 error:(id *)a3;
+ (id)persistentReferenceForIdentity:(struct __SecIdentity { } *)a0 error:(id *)a1;
+ (void)removePasswordForHost:(id)a0 username:(id)a1 port:(int)a2 keychainProtocol:(void *)a3;
+ (void)removePasswordForServiceName:(id)a0 accountName:(id)a1;
+ (id)saveEncryptionCertificate:(struct __SecCertificate { } *)a0 forAddress:(id)a1;
+ (void)setPassword:(id)a0 forHost:(id)a1 username:(id)a2 port:(int)a3 keychainProtocol:(void *)a4 keychainAccessibility:(void *)a5;
+ (void)setPassword:(id)a0 forServiceName:(id)a1 accountName:(id)a2 keychainAccessibility:(void *)a3;
+ (BOOL)validateEncryptionIdentity:(struct __SecIdentity { } *)a0 forAddress:(id)a1 error:(id *)a2;
+ (BOOL)validateSigningIdentity:(struct __SecIdentity { } *)a0 forAddress:(id)a1 error:(id *)a2;

@end
