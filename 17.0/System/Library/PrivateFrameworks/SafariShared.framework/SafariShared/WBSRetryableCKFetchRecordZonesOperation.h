@class NSArray;

@interface WBSRetryableCKFetchRecordZonesOperation : WBSRetryableCKDatabaseOperation

@property (copy, nonatomic) NSArray *recordZoneIDs;
@property (copy, nonatomic) id /* block */ perRecordZoneCompletionBlock;
@property (copy, nonatomic) id /* block */ fetchRecordZonesCompletionBlock;

- (id)_makeOperation;
- (void)_setUpOperation:(id)a0;
- (void).cxx_destruct;

@end
