@class TRIDatabase;

@interface TRIBackgroundMLTaskDatabase : NSObject {
    TRIDatabase *_db;
}

- (id)initWithDatabase:(id)a0;
- (id)init;
- (BOOL)deactivateDeployment:(id)a0 usingTransaction:(id)a1;
- (struct { unsigned long long x0; })removeRecordWithDeployment:(id)a0;
- (struct _PASDBTransactionCompletion_ { BOOL x0; })writeTransactionWithFailableBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (struct _PASDBTransactionCompletion_ { BOOL x0; })readTransactionWithFailableBlock:(id /* block */)a0;
- (BOOL)_enumerateTaskRecordsMatchingWhereClause:(id)a0 bind:(id /* block */)a1 transaction:(id)a2 block:(id /* block */)a3;
- (BOOL)activateDeployment:(id)a0 withFactorPackSetId:(id)a1 targetingRuleIndex:(id)a2 usingTransaction:(id)a3;
- (struct { unsigned long long x0; })addBackgroundMLTaskWithTaskDeployment:(id)a0 pluginId:(id)a1 status:(long long)a2 endDate:(id)a3 artifact:(id)a4;
- (BOOL)deactivateTaskDeployment:(id)a0 deactivatedFactorPackSetId:(id *)a1 usingTransaction:(id)a2;
- (BOOL)enumerateActiveTasksNotInList:(id)a0 usingTransaction:(id)a1 withBlock:(id /* block */)a2;
- (BOOL)enumerateActiveTasksWithBlock:(id /* block */)a0;
- (BOOL)enumerateActiveTasksWithTransaction:(id)a0 block:(id /* block */)a1;
- (BOOL)enumerateTaskRecordsMatchingTaskId:(id)a0 transaction:(id)a1 block:(id /* block */)a2;
- (BOOL)enumerateTaskRecordsWithBlock:(id /* block */)a0;
- (BOOL)enumerateTaskRecordsWithTransaction:(id)a0 block:(id /* block */)a1;
- (BOOL)setActiveFactorPackSetId:(id)a0 activeTargetingRuleIndex:(id)a1 forTaskDeployment:(id)a2 usingTransaction:(id)a3;
- (BOOL)setStatus:(long long)a0 forTaskDeployment:(id)a1 usingTransaction:(id)a2;
- (BOOL)setTargetedFactorPackSetId:(id)a0 targetedTargetingRuleIndex:(id)a1 forTaskDeployment:(id)a2 usingTransaction:(id)a3;
- (BOOL)targetTaskDeployment:(id)a0 toFactorPackSetId:(id)a1 targetingRuleIndex:(id)a2 usingTransaction:(id)a3;
- (id)taskRecordWithTaskDeployment:(id)a0;

@end
