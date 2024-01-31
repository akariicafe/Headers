@class NSArray, NSDictionary;

@interface WBSRetryableCKFetchRecordZoneChangesOperation : WBSRetryableCKDatabaseOperation

@property (copy, nonatomic) NSArray *recordZoneIDs;
@property (copy, nonatomic) NSDictionary *configurationsByRecordZoneID;
@property (nonatomic) BOOL fetchAllChanges;
@property (copy, nonatomic) id /* block */ recordWasChangedBlock;
@property (copy, nonatomic) id /* block */ recordWithIDWasDeletedBlock;
@property (copy, nonatomic) id /* block */ recordZoneChangeTokensUpdatedBlock;
@property (copy, nonatomic) id /* block */ recordZoneFetchCompletionBlock;
@property (copy, nonatomic) id /* block */ fetchRecordZoneChangesCompletionBlock;

- (id)_makeOperation;
- (void)_setUpOperation:(id)a0;
- (void).cxx_destruct;

@end
