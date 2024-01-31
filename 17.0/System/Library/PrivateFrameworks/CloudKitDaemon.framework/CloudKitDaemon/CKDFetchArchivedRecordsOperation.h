@class NSString, NSObject;
@protocol CKFetchArchivedRecordsOperationCallbacks, OS_dispatch_queue;

@interface CKDFetchArchivedRecordsOperation : CKDFetchBatchedRecordsOperation <CKDOperationPipelining>

@property (retain, nonatomic) id<CKFetchArchivedRecordsOperationCallbacks> clientOperationCallbackProxy;
@property (copy, nonatomic) id /* block */ recordFetchedBlock;
@property (copy, nonatomic) id /* block */ serverChangeTokenUpdatedBlock;
@property (readonly, nonatomic) NSString *pipeliningDescription;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_noteCompletedURLRequest:(id)a0 withSchedulerInfo:(id)a1;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (int)operationType;
- (id)activityCreate;
- (void)_noteOperationEnding;
- (id)_createAndConfigureURLRequestForZoneIDs:(id)a0 optionsByZoneID:(id)a1;
- (void)_noteDeletedRecordWithID:(id)a0 recordType:(id)a1;
- (void)_noteOperationBeginning;
- (void)_noteOperationFinishedBlockEnd;
- (void).cxx_destruct;
- (void)_noteChangedRecordWithID:(id)a0 record:(id)a1 error:(id)a2;
- (id)_optionsForZonesWithPendingChangesAfterRequest:(id)a0;

@end
