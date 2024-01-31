@class NSData, NSString;

@interface ICCloudSyncingObjectCryptoStrategyV1 : ICCryptoStrategyBase <ICCloudSyncingObjectCryptoStrategy>

@property (readonly) NSData *fileURLEncryptionCryptoTag;
@property (readonly) NSData *fileURLEncryptionCryptoInitialzationVector;
@property (readonly, nonatomic) long long intrinsicNotesVersion;
@property (readonly, nonatomic) BOOL canAuthenticate;
@property (readonly, nonatomic) BOOL isAuthenticated;
@property (readonly, nonatomic) BOOL hasPassphraseSet;
@property (readonly, copy, nonatomic) NSString *passphraseHint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)decryptWithMainKeyOfObject:(id)a0 decryptable:(id)a1 fallbackAttemptSuccessCleanupHandler:(id /* block */)a2;
+ (id)decryptWithMainKeyOfObject:(id)a0 decryptablePreparationBlock:(id /* block */)a1 fallbackAttemptSuccessCleanupHandler:(id /* block */)a2;
+ (void)encryptWithMainKeyOfObject:(id)a0 dataPreparationBlock:(id /* block */)a1 failureHandler:(id /* block */)a2 successHandler:(id /* block */)a3;
+ (void)encryptWithMainKeyOfObject:(id)a0 dataToEncrypt:(id)a1 failureHandler:(id /* block */)a2 successHandler:(id /* block */)a3;

- (id)decryptData:(id)a0;
- (BOOL)authenticateWithPassphrase:(id)a0;
- (void)initializeCryptoPropertiesFromObject:(id)a0;
- (BOOL)isPassphraseCorrect:(id)a0;
- (BOOL)canMainKey:(id)a0 decryptObject:(id)a1;
- (void)decryptAndMergeEncryptedJSON:(id)a0;
- (id)decryptSidecarData:(id)a0;
- (id)decryptedDataFromFileURL:(id)a0;
- (BOOL)encryptFileFromURL:(id)a0 toURL:(id)a1;
- (BOOL)encryptFileFromURL:(id)a0 toURL:(id)a1 setTagAndIVHandler:(id /* block */)a2;
- (id)encryptSidecarData:(id)a0;
- (BOOL)encryptSidecarFileFromURL:(id)a0 toURL:(id)a1;
- (id)encryptedData:(id)a0 rewrappedWithMainKey:(id)a1;
- (BOOL)loadDecryptedValuesIfNecessary;
- (BOOL)mainKeyDecryptsPrimaryData:(id)a0;
- (id)mainKeyForPassphrase:(id)a0;
- (void)mergeEncryptedDataFromRecord:(id)a0;
- (id)newWrappedKeyData;
- (BOOL)recordHasChangedPassphrase:(id)a0;
- (void)rewrapAndDivergeKeyUsingPassphrase:(id)a0;
- (BOOL)rewrapDataAtURL:(id)a0 withMainKey:(id)a1;
- (void)rewrapKeyWithNewMainKey:(id)a0 salt:(id)a1 iterationCount:(unsigned long long)a2 hint:(id)a3;
- (BOOL)rewrapWithMainKey:(id)a0;
- (BOOL)saveEncryptedJSON;
- (id)unwrappedKey;

@end
