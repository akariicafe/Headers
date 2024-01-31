@interface MLKeyManager : NSObject

+ (id)syncQueue;
+ (id)extractKeyIdentifierFromModelAtURL:(id)a0 usesCodeSigningIdentityForEncryption:(BOOL *)a1 error:(id *)a2;
+ (BOOL)isModelEncrypted:(id)a0;
+ (id)decryptSessionForModelAtURL:(id)a0 error:(id *)a1;
+ (id)loadDecryptionKeyForModelAtURL:(id)a0 retUsesCodeSigningIdentityForEncryption:(BOOL *)a1 error:(id *)a2;
+ (id)createPersistentKeyBlobForKeyID:(id)a0 usesCodeSigningIdentityForEncryption:(BOOL)a1 error:(id *)a2;

@end
