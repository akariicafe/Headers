@interface WFInputParameterMigration : WFWorkflowMigration

+ (BOOL)workflowNeedsMigration:(id)a0 fromClientVersion:(id)a1;

- (void)migrateWorkflow;
- (id)findActionProvidingInputToActionAtIndex:(unsigned long long)a0 inWorkflow:(id)a1 reachedBeginning:(BOOL *)a2 inputActionIndex:(unsigned long long *)a3;
- (id)findGetVariableActionProvidingInputToActionAtIndex:(long long)a0 inWorkflow:(id)a1;
- (void)migrateLegacyInputVariablesInParameterDictionary:(id)a0 toVariable:(id)a1;
- (void)recursivelyFindDictionaryWithKey:(id)a0 inArray:(id)a1 then:(id /* block */)a2;
- (void)recursivelyFindDictionaryWithKey:(id)a0 inDictionary:(id)a1 then:(id /* block */)a2;
- (void)recursivelyFindDictionaryWithKey:(id)a0 inObject:(id)a1 then:(id /* block */)a2;

@end
