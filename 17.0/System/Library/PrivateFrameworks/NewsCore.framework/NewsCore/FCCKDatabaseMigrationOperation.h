@class NSMutableArray, FCCKPrivateDatabase;
@protocol FCCKDatabaseMigrator;

@interface FCCKDatabaseMigrationOperation : FCOperation {
    FCCKPrivateDatabase *_database;
    id<FCCKDatabaseMigrator> _migrator;
    id /* block */ _migrationCompletionHandler;
    NSMutableArray *_resultZoneIDsEligibleForDeletion;
    NSMutableArray *_resultRecordIDsEligibleForDeletion;
}

- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;
- (BOOL)validateOperation;
- (void).cxx_destruct;
- (void)prepareOperation;
- (BOOL)canRetryWithError:(id)a0 retryAfter:(id *)a1;

@end
