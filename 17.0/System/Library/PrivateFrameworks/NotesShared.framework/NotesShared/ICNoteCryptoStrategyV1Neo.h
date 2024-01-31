@class NSString;

@interface ICNoteCryptoStrategyV1Neo : ICCloudSyncingObjectCryptoStrategyV1Neo <ICNoteCryptoStrategy>

@property (readonly, nonatomic) long long intrinsicNotesVersion;
@property (readonly, nonatomic) BOOL canAuthenticate;
@property (readonly, nonatomic) BOOL isAuthenticated;
@property (readonly, nonatomic) BOOL hasPassphraseSet;
@property (readonly, copy, nonatomic) NSString *passphraseHint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)decrypt;
- (id)decryptNotePrimitiveData;
- (id)decryptTextDataOrSaveAsUnappliedRecordIfNotAuthenticated:(id)a0;
- (void)mergeEncryptedData:(id)a0 mergeConflict:(id)a1;
- (void)mergeEncryptedDataFromRecord:(id)a0;
- (BOOL)rewrapWithMainKey:(id)a0;
- (void)writeEncryptedNoteData:(id)a0;

@end
