@class NSString;

@interface ICMediaCryptoStrategyV1 : ICCloudSyncingObjectCryptoStrategyV1 <ICMediaCryptoStrategy>

@property (readonly, nonatomic) long long intrinsicNotesVersion;
@property (readonly, nonatomic) BOOL canAuthenticate;
@property (readonly, nonatomic) BOOL isAuthenticated;
@property (readonly, nonatomic) BOOL hasPassphraseSet;
@property (readonly, copy, nonatomic) NSString *passphraseHint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)decryptedData;
- (BOOL)encryptFileFromURL:(id)a0 toURL:(id)a1;
- (id)fileURLEncryptionCryptoInitialzationVector;
- (id)fileURLEncryptionCryptoTag;

@end
