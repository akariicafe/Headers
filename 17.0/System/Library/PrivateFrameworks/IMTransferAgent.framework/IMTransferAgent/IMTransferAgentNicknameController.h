@class CKContainer;

@interface IMTransferAgentNicknameController : NSObject

@property (readonly, nonatomic) CKContainer *nickNameContainer;

+ (id)sharedInstance;

- (id)_nickNameContainerIdentifier;
- (id)_nickNameContainer;
- (id)lockdownManager;
- (id)nickNamePublicDatabase;
- (BOOL)shouldUseDevNickNameContainer;
- (void)fetchCurrentUserForNicknameContainer:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)_serverSaysToUseOldContainer;
- (void)_handleSaveNicknameError:(id)a0 queue:(id)a1 withCompletionBlock:(id /* block */)a2;
- (id)_nickNameFetchConfiguration;
- (id)_nickNamePublicDB;
- (id)_nickNameSaveConfiguration;
- (double)_retryIntervalForRetryCount:(unsigned long long)a0;
- (void)_updateEncryptedPersonalNicknameToPublicCloudKitDBSavingRecord:(id)a0 wallpaperRecordToSave:(id)a1 deletingRecordID:(id)a2 queue:(id)a3 withCompletionBlock:(id /* block */)a4;
- (void)_updateEncryptedPersonalNicknameToPublicCloudKitDBSavingRecords:(id)a0 deletingRecordIDs:(id)a1 queue:(id)a2 withCompletionBlock:(id /* block */)a3;
- (void)cloudKitOperationWithRetryCount:(unsigned long long)a0 queue:(id)a1 withError:(id)a2 operation:(id /* block */)a3;
- (void)deleteAllPersonalNicknamesOnQueue:(id)a0 withCompletion:(id /* block */)a1;
- (void)fetchAllNicknamesForCurrentUser:(id /* block */)a0;
- (void)getNicknameWithRecordID:(id)a0 decryptionKey:(id)a1 wallpaperDataTag:(id)a2 wallpaperLowResDataTag:(id)a3 wallpaperMetadataTag:(id)a4 knownSender:(BOOL)a5 queue:(id)a6 completionBlock:(id /* block */)a7;
- (void)performCloudKitOperation:(id /* block */)a0 queue:(id)a1 withError:(id)a2;
- (void)setPersonalNickname:(id)a0 oldRecordID:(id)a1 queue:(id)a2 completionBlock:(id /* block */)a3;
- (void)setPersonalNicknameData:(id)a0 oldRecordID:(id)a1 queue:(id)a2 completionBlock:(id /* block */)a3;

@end
