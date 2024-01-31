@class CKDFetchRecordsOperation, NSSet, NSDictionary, NSMutableDictionary, NSObject, CKDRecordCache;
@protocol OS_dispatch_source, OS_dispatch_queue, OS_dispatch_group;

@interface CKDRecordFetchAggregator : CKDDatabaseOperation {
    CKDRecordCache *_recordCache;
}

@property (nonatomic) BOOL fetchAssetContents;
@property (nonatomic) BOOL fetchMergeableValues;
@property (retain, nonatomic) NSDictionary *assetTransferOptionsByRecordTypeAndKey;
@property (nonatomic) BOOL preserveOrdering;
@property (retain, nonatomic) NSSet *desiredKeys;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *recordReadySource;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *fetchQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *fetchSource;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *fetchGroup;
@property (readonly, nonatomic) NSMutableDictionary *fetchInfosByOrder;
@property unsigned long long curFetchOrder;
@property unsigned long long highestReturnedOrder;
@property (weak, nonatomic) CKDFetchRecordsOperation *currentFetchOp;
@property BOOL started;
@property (getter=isMarkedToFinishByParent) BOOL markedToFinishByParent;
@property (nonatomic) BOOL forceDecryptionAttempt;
@property (nonatomic) BOOL useRecordCache;
@property (copy, nonatomic) id /* block */ fetchAggregatorCompletionBlock;

- (BOOL)supportsClearAssetEncryption;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (int)operationType;
- (id)activityCreate;
- (void)dealloc;
- (void)main;
- (void)_recordFetchesAvailable;
- (id)CKPropertiesDescription;
- (void)_flushFetchedRecordsToConsumerNoOrderingLocked;
- (id)description;
- (void).cxx_destruct;
- (void)_performCallbackForFetchInfoLocked:(id)a0;
- (void)_addRecordFetchInfos:(id)a0;
- (void)fetchRecords:(id)a0 withPerRecordCompletion:(id /* block */)a1;
- (void)_lockedSendFetchRequest;
- (void)_flushFetchedRecordsToConsumerOrderedLocked;
- (void)_finishRecordFetchAggregator;
- (id)_fetchRecord:(id)a0 recordReadyHandle:(BOOL *)a1 withRecordCompletion:(id /* block */)a2;
- (void)finishIfAppropriate;
- (void)_flushFetchedRecordsToConsumerLocked;

@end
