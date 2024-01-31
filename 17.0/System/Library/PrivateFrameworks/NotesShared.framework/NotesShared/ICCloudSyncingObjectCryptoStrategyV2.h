@class NSString, NSMutableDictionary;

@interface ICCloudSyncingObjectCryptoStrategyV2 : ICCryptoStrategyBase <ICCloudSyncingObjectCryptoStrategy>

@property (class, readonly, nonatomic) NSMutableDictionary *accountKeyByIdentifier;

@property (readonly, nonatomic) long long intrinsicNotesVersion;
@property (readonly, nonatomic) BOOL canAuthenticate;
@property (readonly, nonatomic) BOOL isAuthenticated;
@property (readonly, nonatomic) BOOL hasPassphraseSet;
@property (readonly, copy, nonatomic) NSString *passphraseHint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)accountIdentifier;
- (id)encryptData:(id)a0;
- (id)decryptData:(id)a0;
- (BOOL)authenticateWithPassphrase:(id)a0;
- (void)initializeCryptoPropertiesFromObject:(id)a0;
- (BOOL)isInICloudAccount;
- (BOOL)isPassphraseCorrect:(id)a0;
- (void)serializeToEncryptedValuesJSON:(id)a0;
- (id)accountDsid;
- (id)accountKeyWithIdentifier:(id)a0 createIfNotExist:(BOOL)a1;
- (id)currentAccountKeyIdentifier;
- (void)decryptAndMergeEncryptedJSON:(id)a0;
- (id)decryptObject:(id)a0;
- (id)decryptSidecarData:(id)a0;
- (id)decryptedDataFromFileURL:(id)a0;
- (BOOL)encryptFileFromURL:(id)a0 toURL:(id)a1;
- (id)encryptSidecarData:(id)a0;
- (BOOL)encryptSidecarFileFromURL:(id)a0 toURL:(id)a1;
- (id)encryptedData:(id)a0 rewrappedWithMainKey:(id)a1;
- (id)encryptedDataFromRecord:(id)a0;
- (BOOL)isAuthenticatedForBothObjectAndRecord:(id)a0;
- (BOOL)isRecordAuthenticated:(id)a0;
- (BOOL)loadDecryptedValuesIfNecessary;
- (BOOL)mainKeyDecryptsPrimaryData:(id)a0;
- (id)mainKeyForPassphrase:(id)a0;
- (void)mergeEncryptedDataFromRecord:(id)a0;
- (BOOL)recordHasChangedPassphrase:(id)a0;
- (BOOL)rewrapDataAtURL:(id)a0 withMainKey:(id)a1;
- (BOOL)rewrapWithMainKey:(id)a0;
- (BOOL)saveEncryptedJSON;
- (BOOL)serialize:(id)a0 toURL:(id)a1;
- (BOOL)shouldSpoofAccountKey;

@end
