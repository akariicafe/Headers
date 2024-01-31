@class FCThreadSafeMutableDictionary, NSArray, NSDictionary, CKRecordID, FCThreadSafeMutableArray, FCCKContentDatabase, FCThreadSafeMutableSet;

@interface FCCKContentBatchedRefreshRecordsOperation : FCOperation {
    BOOL _checkForDeletions;
    FCCKContentDatabase *_database;
    NSArray *_recordIDs;
    NSDictionary *_changeTagsByRecordID;
    NSArray *_desiredKeys;
    CKRecordID *_canaryRecordID;
    id /* block */ _refreshRecordsCompletionBlock;
    FCThreadSafeMutableArray *_remainingRecordIDBatches;
    FCThreadSafeMutableSet *_refreshedRecordIDs;
    FCThreadSafeMutableDictionary *_updatedRecordsByRecordID;
    FCThreadSafeMutableSet *_deletedRecordIDs;
    FCThreadSafeMutableDictionary *_errorsByRecordID;
    FCThreadSafeMutableArray *_allOperationErrors;
}

- (id)init;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;
- (BOOL)validateOperation;
- (void).cxx_destruct;
- (void)prepareOperation;

@end
