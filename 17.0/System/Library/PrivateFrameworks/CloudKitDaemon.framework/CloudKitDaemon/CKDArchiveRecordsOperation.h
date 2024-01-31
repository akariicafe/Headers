@class NSArray;
@protocol CKArchiveRecordsOperationCallbacks;

@interface CKDArchiveRecordsOperation : CKDDatabaseOperation

@property (retain, nonatomic) NSArray *recordIDs;
@property (retain, nonatomic) id<CKArchiveRecordsOperationCallbacks> clientOperationCallbackProxy;
@property (copy, nonatomic) id /* block */ recordArchivedBlock;

- (id)relevantZoneIDs;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (int)operationType;
- (id)activityCreate;
- (void)main;
- (void).cxx_destruct;
- (void)_handleRecordArchived:(id)a0 responseCode:(id)a1;

@end
