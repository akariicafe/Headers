@class NSArray, NSSet, CKDDecryptRecordsOperation, NSMutableDictionary, NSDictionary, NSObject, NSMutableArray, NSMapTable;
@protocol OS_dispatch_group, CKFetchRecordsOperationCallbacks;

@interface CKDFetchRecordsOperation : CKDDatabaseOperation {
    CKDDecryptRecordsOperation *_decryptOperation;
}

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSArray *recordIDsToFetch;
@property (retain, nonatomic) NSMutableDictionary *cachedRecords;
@property (retain, nonatomic) NSSet *desiredKeySet;
@property (retain, nonatomic) NSDictionary *recordIDsToETags;
@property (retain, nonatomic) NSDictionary *recordIDsToVersionETags;
@property (retain, nonatomic) NSDictionary *desiredPackageFileIndices;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *fetchRecordsGroup;
@property (retain, nonatomic) NSMutableDictionary *errorsByRecordID;
@property (retain, nonatomic) NSMapTable *downloadTasksByRecordID;
@property (retain, nonatomic) NSDictionary *assetTransferOptionsByRecordTypeAndKey;
@property (nonatomic) BOOL shouldFetchAssetContent;
@property (nonatomic) BOOL shouldFetchAssetContentInMemory;
@property (nonatomic) BOOL shouldFetchMergeableValues;
@property (nonatomic) BOOL shouldCloneFileInAssetCache;
@property (retain, nonatomic) NSSet *assetFieldNamesToPublishURLs;
@property (nonatomic) unsigned long long requestedTTL;
@property (nonatomic) unsigned long long URLOptions;
@property (readonly, nonatomic) CKDDecryptRecordsOperation *recordDecryptOperation;
@property (readonly, nonatomic) BOOL hasRecordDecryptOperation;
@property (retain, nonatomic) NSMutableArray *recordIDsToRefetch;
@property (retain, nonatomic) NSMutableDictionary *keyOrErrorForHostname;
@property (retain, nonatomic) NSMutableDictionary *shareRecordsToUpdateByRecordID;
@property (retain, nonatomic) NSMutableDictionary *mergeableValueDownloadTasks;
@property (retain, nonatomic) NSDictionary *webSharingIdentityDataByRecordID;
@property (nonatomic) BOOL shouldRollSharePCSOnFetch;
@property (retain, nonatomic) id<CKFetchRecordsOperationCallbacks> clientOperationCallbackProxy;
@property (nonatomic) BOOL useCachedEtags;
@property (nonatomic) BOOL useRecordCache;
@property (nonatomic) BOOL forcePCSDecrypt;
@property (nonatomic) BOOL skipDecryption;
@property (retain, nonatomic) NSArray *fullRecordsToFetch;
@property (nonatomic) BOOL shouldUpdateTimestampsForFetchedMergeableValues;
@property (copy, nonatomic) id /* block */ recordFetchProgressBlock;
@property (copy, nonatomic) id /* block */ recordFetchCommandBlock;
@property (copy, nonatomic) id /* block */ recordFetchCompletionBlock;

+ (id)nameForState:(unsigned long long)a0;

- (id)relevantZoneIDs;
- (BOOL)makeStateTransition;
- (void)_downloadAssets;
- (BOOL)supportsClearAssetEncryption;
- (void)setError:(id)a0 forRecordID:(id)a1;
- (void)_finishAllDownloadTasksWithError:(id)a0;
- (void)fetchRecordsWithIDs:(id)a0 andFullRecords:(id)a1;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (void)_continueHandleFetchedRecord:(id)a0 recordID:(id)a1;
- (void)_decryptPropertiesIfNeededForRecord:(id)a0 record:(id)a1;
- (void)_fetchPCSForMergeableValueDeltaRecord:(id)a0 recordID:(id)a1;
- (void)_didDownloadAssetsWithError:(id)a0;
- (int)_prepareAsset:(id)a0 record:(id)a1 recordKey:(id)a2 assetTransferOptions:(id)a3;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (void)_fetchCloudCerts;
- (void)_addAssetDownloadTaskForRecord:(id)a0 completionBlock:(id /* block */)a1;
- (int)operationType;
- (id)errorForRecordID:(id)a0;
- (void)_reallyDecryptPropertiesOnRecord:(id)a0 recordID:(id)a1;
- (id)desiredIndexedListKeys;
- (void)_decryptPropertiesOnRecord:(id)a0 recordID:(id)a1;
- (void)_findSpecialParticipantsOnShare:(id)a0 identityDelegate:(id)a1;
- (id)activityCreate;
- (void)_addDownloadTasksForRecord:(id)a0 completionBlock:(id /* block */)a1;
- (void)main;
- (void)_saveUpdatedShareRecords;
- (void)_handleRecordFetch:(id)a0 recordID:(id)a1 etagMatched:(BOOL)a2 responseCode:(id)a3;
- (void).cxx_destruct;
- (void)_handleSharePCSPrepForShare:(id)a0 recordID:(id)a1;
- (void)_downloadMergeableValues;
- (void)_addMergeableValueDownloadTasksForRecord:(id)a0 completionBlock:(id /* block */)a1;
- (void)finishWithError:(id)a0;

@end
