@class NSDictionary, NSArray;

@interface FCCKPrivateFetchRecordsOperation : FCCKPrivateDatabaseOperation

@property (retain, nonatomic) NSDictionary *resultRecordsByRecordID;
@property (copy, nonatomic) NSArray *recordIDs;
@property (copy, nonatomic) NSArray *desiredKeys;
@property (copy, nonatomic) id /* block */ fetchRecordsCompletionBlock;

- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;
- (BOOL)validateOperation;
- (void).cxx_destruct;

@end
