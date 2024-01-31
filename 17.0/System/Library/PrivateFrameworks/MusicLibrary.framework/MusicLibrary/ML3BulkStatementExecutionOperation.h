@interface ML3BulkStatementExecutionOperation : ML3DatabaseOperation

- (unsigned long long)type;
- (BOOL)_execute:(id *)a0;
- (BOOL)_executeStatements:(id)a0 onConnection:(id)a1 withError:(id *)a2;

@end
