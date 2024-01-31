@class NSArray, FCCKPrivateDatabaseServerChangeToken;

@interface FCCKPrivateFetchDatabaseChangesOperation : FCCKPrivateDatabaseOperation

@property (retain, nonatomic) NSArray *resultChangedZoneIDs;
@property (retain, nonatomic) NSArray *resultDeletedZoneIDs;
@property (retain, nonatomic) FCCKPrivateDatabaseServerChangeToken *resultServerChangeToken;
@property (nonatomic) BOOL resultMoreComing;
@property (copy, nonatomic) FCCKPrivateDatabaseServerChangeToken *previousServerChangeToken;
@property (copy, nonatomic) id /* block */ fetchDatabaseChangesCompletionBlock;

- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;
- (BOOL)validateOperation;
- (void).cxx_destruct;

@end
