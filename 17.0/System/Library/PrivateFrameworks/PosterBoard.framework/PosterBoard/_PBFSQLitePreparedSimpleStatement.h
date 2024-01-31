@class NSString;

@interface _PBFSQLitePreparedSimpleStatement : PBFSQLitePreparedStatement <PBFSQLiteDatabaseConnectionObserver> {
    struct sqlite3_stmt { } *_statement;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)sqliteDatabaseConnectionWillClose:(id)a0;
- (BOOL)executeWithBindings:(id)a0 resultRowHandler:(id /* block */)a1 error:(out id *)a2;

@end
