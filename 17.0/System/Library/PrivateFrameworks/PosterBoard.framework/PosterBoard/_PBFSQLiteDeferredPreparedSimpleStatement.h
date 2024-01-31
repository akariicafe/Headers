@class NSString;

@interface _PBFSQLiteDeferredPreparedSimpleStatement : _PBFSQLitePreparedSimpleStatement {
    NSString *_deferredSql;
}

- (void).cxx_destruct;
- (BOOL)executeWithBindings:(id)a0 resultRowHandler:(id /* block */)a1 error:(out id *)a2;

@end
