@interface WFRepeatIndexVariableNameMigration : WFWorkflowMigration

+ (BOOL)workflowNeedsMigration:(id)a0 fromClientVersion:(id)a1;

- (void)migrateWorkflow;
- (void)calculateVariableNamesAtActionIndex:(unsigned long long)a0 oldRepeatScopeVariables:(id *)a1;

@end
