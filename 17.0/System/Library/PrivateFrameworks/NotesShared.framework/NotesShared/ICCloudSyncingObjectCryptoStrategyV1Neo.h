@class NSString, ICEncryptionKey, ICEncryptionObject;

@interface ICCloudSyncingObjectCryptoStrategyV1Neo : ICCryptoStrategyBase <ICCloudSyncingObjectCryptoStrategy>

@property (readonly, copy, nonatomic) ICEncryptionKey *sidecarMainKey;
@property (readonly, copy, nonatomic) ICEncryptionKey *fallbackSidecarMainKey;
@property (readonly, nonatomic) ICEncryptionObject *primaryEncryptionObject;
@property (readonly, nonatomic) long long intrinsicNotesVersion;
@property (readonly, nonatomic) BOOL canAuthenticate;
@property (readonly, nonatomic) BOOL isAuthenticated;
@property (readonly, nonatomic) BOOL hasPassphraseSet;
@property (readonly, copy, nonatomic) NSString *passphraseHint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)encryptData:(id)a0;
- (id)decryptData:(id)a0;
- (BOOL)authenticateWithPassphrase:(id)a0;
- (void)initializeCryptoPropertiesFromObject:(id)a0;
- (BOOL)isPassphraseCorrect:(id)a0;
- (id)decryptObject:(id)a0 encryptionKey:(id)a1 mainKey:(id)a2;
- (id)decryptSidecarData:(id)a0;
- (id)decryptedDataFromFileURL:(id)a0;
- (id)encryptData:(id)a0 encryptionKey:(id)a1 mainKey:(id)a2;
- (BOOL)encryptFileFromURL:(id)a0 toURL:(id)a1;
- (id)encryptSidecarData:(id)a0;
- (BOOL)encryptSidecarFileFromURL:(id)a0 toURL:(id)a1;
- (id)encryptedData:(id)a0 rewrappedWithMainKey:(id)a1;
- (BOOL)isRecordAuthenticated:(id)a0;
- (BOOL)loadDecryptedValuesIfNecessary;
- (BOOL)mainKeyDecryptsPrimaryData:(id)a0;
- (id)mainKeyForPassphrase:(id)a0;
- (void)mergeEncryptedDataFromRecord:(id)a0;
- (BOOL)recordHasChangedPassphrase:(id)a0;
- (BOOL)rewrapDataAtURL:(id)a0 withMainKey:(id)a1;
- (BOOL)rewrapFile:(id /* block */)a0 withMainKey:(id)a1 generationManager:(id)a2;
- (BOOL)rewrapWithMainKey:(id)a0;
- (BOOL)saveEncryptedJSON;
- (BOOL)serialize:(id)a0 toURL:(id)a1;
- (id)sidecarMainKeyCreateIfNeeded;

@end
