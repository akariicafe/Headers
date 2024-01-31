@class ICTTMergeableWallClockValue, NSString, CKRecordID, NSData, ICAccount, CKRecord, NSManagedObjectID;

@interface ICAccountData : ICCloudSyncingObject <ICCloudObject>

@property (class, readonly, nonatomic) BOOL supportsUserSpecificRecords;

@property (readonly, copy, nonatomic) CKRecordID *recordID;
@property (readonly, copy, nonatomic) NSString *recordType;
@property (readonly, nonatomic) BOOL needsToSaveUserSpecificRecord;
@property (readonly, nonatomic) BOOL wantsUserSpecificRecord;
@property (readonly, copy, nonatomic) CKRecordID *userSpecificRecordID;
@property (readonly, retain, nonatomic) CKRecord *userSpecificServerRecord;
@property (readonly, nonatomic) BOOL needsToBeDeletedFromCloud;
@property (readonly, nonatomic) BOOL needsToBePushedToCloud;
@property (readonly, nonatomic) BOOL needsToBeFetchedFromCloud;
@property (readonly, nonatomic) BOOL isInICloudAccount;
@property (readonly, nonatomic) BOOL isValidObject;
@property (readonly, copy, nonatomic) NSString *loggingDescription;
@property (readonly, nonatomic) NSManagedObjectID *objectID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) ICAccount *account;
@property (retain, nonatomic) NSData *mergeableData;
@property (nonatomic) short lockedNotesMode;
@property (nonatomic) BOOL supportsV1Neo;
@property (copy, nonatomic) NSData *cryptoPassphraseVerifier;
@property (readonly, copy, nonatomic) ICTTMergeableWallClockValue *mergeableCryptoPassphraseVerifier;

+ (id)newCloudObjectForRecord:(id)a0 accountID:(id)a1 context:(id)a2;
+ (id)accountDataWithIdentifier:(id)a0 context:(id)a1;
+ (id)existingCloudObjectForRecordID:(id)a0 accountID:(id)a1 context:(id)a2;
+ (id)newAccountDataForAccount:(id)a0;
+ (id)newAccountDataWithIdentifier:(id)a0 account:(id)a1;

- (id)recordZoneName;
- (id)recordName;
- (BOOL)isDeletable;
- (id)cloudAccount;
- (BOOL)mergeWithMergeableData:(id)a0;
- (void)saveMergeableDataIfNeeded;
- (void)updateChangeCountWithReason:(id)a0;
- (void)updateSupportsV1Neo:(id /* block */)a0;
- (id)cryptoPassphraseVerifier;
- (id)makeCloudKitRecordForApproach:(long long)a0 mergeableFieldState:(id)a1;
- (BOOL)mergeCloudKitRecord:(id)a0 accountID:(id)a1 approach:(long long)a2 mergeableFieldState:(id)a3;
- (void)setCryptoPassphraseVerifier:(id)a0;
- (void)updateSupportsV1NeoWithAccountDevices:(id)a0;

@end
