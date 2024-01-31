@class NSString, ICEncryptionKey;

@interface ICAccountCryptoStrategyV1Neo : ICCloudSyncingObjectCryptoStrategyV1Neo <ICAccountCryptoStrategy>

@property (readonly, nonatomic) ICEncryptionKey *passphraseVerifier;
@property (readonly, nonatomic) long long intrinsicNotesVersion;
@property (readonly, nonatomic) BOOL canAuthenticate;
@property (readonly, nonatomic) BOOL isAuthenticated;
@property (readonly, nonatomic) BOOL hasPassphraseSet;
@property (readonly, copy, nonatomic) NSString *passphraseHint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)hasSamePassphraseForObject:(id)a0;
- (void)removePassphrase;
- (BOOL)setPassphrase:(id)a0 hint:(id)a1;
- (BOOL)mainKeyDecryptsPrimaryData:(id)a0;
- (id)mainKeyForPassphrase:(id)a0;

@end
