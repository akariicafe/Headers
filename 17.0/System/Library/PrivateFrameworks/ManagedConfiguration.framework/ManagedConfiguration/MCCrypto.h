@interface MCCrypto : NSObject

+ (id)_decryptionFailedErrorWithUnderlyingError:(id)a0;
+ (void)clearStoredActivationLockBypassCode;
+ (void)clearStoredActivationLockHash;
+ (struct __SecCertificate { } *)copyCertificateRefFromPEMData:(id)a0;
+ (struct __SecCertificate { } *)copyCertificateRefFromPKCS1Data:(id)a0;
+ (id)createAndStoreNewActivationLockBypassCodeAndHash;
+ (id)createAndStoreNewActivationLockBypassCodeAndHashIfNeeded;
+ (void)createNewActivationLockBypassCodeOutCode:(char *)a0 outRawBytes:(char *)a1 outHash:(char *)a2;
+ (BOOL)isValidPKCS12Data:(id)a0;
+ (id)objectFromEncryptedData:(id)a0 outCertificate:(struct __SecCertificate **)a1 outError:(id *)a2;
+ (id)storeActivationLockBypassCode:(id)a0 hash:(id)a1;
+ (id)storedActivationLockBypassCodeHash;
+ (id)storedActivationLockBypassCodeWithOutError:(id *)a0;

@end
