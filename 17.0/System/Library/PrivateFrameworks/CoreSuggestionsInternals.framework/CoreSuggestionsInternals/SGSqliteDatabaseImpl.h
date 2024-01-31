@class SGSqliteDatabase;

@interface SGSqliteDatabaseImpl : _PASSqliteDatabase {
    SGSqliteDatabase *_sgDb;
}

- (id)initWithFilename:(id)a0 flags:(int)a1 error:(id *)a2 sgDb:(id)a3;
- (BOOL)handleError:(long long)a0 sqliteError:(int)a1 forQuery:(id)a2 onError:(id /* block */)a3;
- (void).cxx_destruct;

@end
