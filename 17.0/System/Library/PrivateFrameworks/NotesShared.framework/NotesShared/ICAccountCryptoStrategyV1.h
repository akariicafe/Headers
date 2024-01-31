@class NSString;

@interface ICAccountCryptoStrategyV1 : ICCloudSyncingObjectCryptoStrategyV1 <ICAccountCryptoStrategy>

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

@end
