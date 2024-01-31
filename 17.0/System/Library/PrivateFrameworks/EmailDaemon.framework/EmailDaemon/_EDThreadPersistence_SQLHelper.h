@class _EDThreadPersistence_StatementCache, EDPersistenceDatabaseConnection;

@interface _EDThreadPersistence_SQLHelper : NSObject

@property (readonly, nonatomic) EDPersistenceDatabaseConnection *connection;
@property (readonly, nonatomic) _EDThreadPersistence_StatementCache *cache;

- (void).cxx_destruct;
- (id)initWithCache:(id)a0;
- (BOOL)executeSQL:(id)a0 errorHandler:(id /* block */)a1;
- (BOOL)executeSQL:(id)a0 indexBindings:(id)a1 errorHandler:(id /* block */)a2;
- (BOOL)executeSelectSQL:(id)a0 bindings:(id /* block */)a1 errorHandler:(id /* block */)a2 rowHandler:(id /* block */)a3;
- (int)executeUpdateSQL:(id)a0 bindings:(id /* block */)a1 errorHandler:(id /* block */)a2;
- (long long)executeUpsertSQL:(id)a0 bindings:(id /* block */)a1 errorHandler:(id /* block */)a2;

@end
