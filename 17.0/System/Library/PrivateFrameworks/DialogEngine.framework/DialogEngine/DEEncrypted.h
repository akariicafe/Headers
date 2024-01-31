@interface DEEncrypted : NSObject

+ (id)decrypt:(id)a0;
+ (id)getKey:(unsigned long long)a0;
+ (id)decrypt:(id)a0 allowAllKeys:(BOOL)a1 keyVersion:(id *)a2;
+ (id)decrypt:(id)a0 keyVersion:(id *)a1;
+ (id)decryptAll:(id)a0;
+ (BOOL)decryptAllFrom:(id)a0 to:(id)a1;
+ (id)decryptFrom:(id)a0 name:(id)a1 base:(id)a2;
+ (BOOL)decryptFrom:(id)a0 to:(id)a1 allowAllKeys:(BOOL)a2 keyVersion:(id *)a3;
+ (BOOL)decryptFrom:(id)a0 to:(id)a1 version:(id)a2;
+ (BOOL)decryptFrom:(id)a0 to:(id)a1 version:(id)a2 allowAllKeys:(BOOL)a3;
+ (id)encrypt:(id)a0 keyId:(unsigned long long)a1 privateKey:(id)a2 multipart:(BOOL)a3;
+ (id)encryptFrom:(id)a0 name:(id)a1 base:(id)a2 keyId:(unsigned long long)a3 privateKey:(id)a4 multipart:(BOOL)a5;
+ (BOOL)encryptFrom:(id)a0 to:(id)a1 keyId:(unsigned long long)a2 privateKey:(id)a3 encryptedPb:(void *)a4;
+ (BOOL)encryptFrom:(id)a0 to:(id)a1 keyId:(unsigned long long)a2 privateKey:(id)a3 multipart:(BOOL)a4;
+ (id)getKeyWithVersion:(id)a0;
+ (id)getKeyWithVersion:(id)a0 symmetric:(BOOL *)a1;
+ (id)getSymmetricKey:(id)a0 publicKey:(id)a1 symmetricKeyIV:(id *)a2 signature:(id *)a3;
+ (id)getSymmetricKey:(id)a0 symmetricKeyIV:(id)a1 signature:(id)a2;
+ (id)getSymmetricSrc:(id)a0 publicKey:(id)a1;
+ (BOOL)isPrivateKey:(id)a0 publicKey:(id)a1;
+ (BOOL)isSymmetric:(unsigned long long)a0;
+ (id)toEnvelope:(BOOL)a0 iv:(id)a1 hmac:(id)a2 keyVersion:(id)a3 payload:(id)a4;
+ (id)versionFile:(id)a0;
+ (BOOL)wrapFrom:(id)a0 to:(id)a1 encryptedPb:(void *)a2 multipart:(BOOL)a3;

@end
