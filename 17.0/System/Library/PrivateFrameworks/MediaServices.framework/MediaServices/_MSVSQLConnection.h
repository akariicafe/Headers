@class NSString, NSMutableDictionary, NSMutableArray;

@interface _MSVSQLConnection : NSObject <MSVSQLExecutable> {
    struct sqlite3 { } *_connectionHandle;
    unsigned long long _options;
    NSMutableDictionary *_attachedDatabases;
    NSMutableArray *_scalarFunctions;
    NSMutableArray *_aggregateFunctions;
    BOOL _invalid;
    NSString *_databaseURI;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)resultsForStatement:(id)a0;
- (id)statementWithString:(id)a0 error:(id *)a1;
- (BOOL)executeStatement:(id)a0 error:(id *)a1;
- (void)dealloc;
- (void)unregisterFunctionNamed:(id)a0 arguments:(long long)a1;
- (void)registerFunctionNamed:(id)a0 arguments:(long long)a1 options:(unsigned long long)a2 block:(id /* block */)a3;
- (void).cxx_destruct;
- (BOOL)executeStatementString:(id)a0 error:(id *)a1;
- (void)registerAggregateFunctionNamed:(id)a0 arguments:(long long)a1 options:(unsigned long long)a2 start:(id /* block */)a3 add:(id /* block */)a4 remove:(id /* block */)a5 value:(id /* block */)a6;
- (id)_cloneWithOptions:(unsigned long long)a0 error:(id *)a1;
- (void)_registerAggregateFunctionDescriptor:(id)a0;
- (void)_registerScalarFunctionDescriptor:(id)a0;

@end
