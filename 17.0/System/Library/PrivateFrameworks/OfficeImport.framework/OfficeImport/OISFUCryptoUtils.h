@interface OISFUCryptoUtils : NSObject

+ (unsigned int)ivLengthForKey:(id)a0;
+ (BOOL)checkKey:(id)a0 againstPassphraseVerifier:(id)a1;
+ (id)decodePassphraseHint:(id)a0;
+ (id)encodePassphraseHint:(id)a0;
+ (id)generatePassphraseVerifierForKey:(id)a0 verifierVersion:(unsigned short)a1;
+ (BOOL)generateRandomDataInBuffer:(char *)a0 length:(unsigned long long)a1;
+ (id)generateRandomSalt;
+ (id)generateRandomSaltWithLength:(unsigned long long)a0;
+ (id)hashForPassphrase:(id)a0 withSalt:(id)a1;
+ (BOOL)isEncryptionVersionAndFormatSupportedInPassphraseVerifier:(id)a0;
+ (unsigned int)iterationCountFromPassphraseVerifier:(id)a0;
+ (id)newBufferedInputStreamForDecryptingFile:(id)a0 key:(id)a1 isDeflated:(BOOL)a2 zipStream:(id *)a3;
+ (id)newBufferedInputStreamForDecryptingZippedBundle:(id)a0 key:(id)a1 zipArchive:(id)a2 isDeflated:(BOOL)a3 zipStream:(id *)a4;
+ (id)saltForSageFiles;
+ (id)saltFromVerifier:(id)a0 saltLength:(unsigned long long)a1;
+ (id)sha1HashFromStorage:(id)a0;
+ (id)sha256HashFromData:(id)a0;
+ (id)sha256HashFromStorage:(id)a0;
+ (id)sha256HashFromString:(id)a0;

@end
