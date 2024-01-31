@class TRIDatabase;

@interface TRIBackgroundMLTaskHistoryDatabase : NSObject {
    TRIDatabase *_db;
}

- (BOOL)addRecord:(id)a0;
- (id)initWithDatabase:(id)a0;
- (id)init;
- (BOOL)expireRecordsOlderThanDate:(id)a0 deletedCount:(unsigned long long *)a1;
- (struct _PASDBTransactionCompletion_ { BOOL x0; })writeTransactionWithFailableBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)enumerateRecordsNewerThanDate:(id)a0 block:(id /* block */)a1;
- (struct _PASDBTransactionCompletion_ { BOOL x0; })readTransactionWithFailableBlock:(id /* block */)a0;
- (BOOL)_enumerateRecordsMatchingWhereClause:(id)a0 bind:(id /* block */)a1 block:(id /* block */)a2;
- (id)getAllAllocationStatusesForBMLTId:(id)a0 deploymentId:(int)a1 factorPackSetId:(id)a2;

@end
