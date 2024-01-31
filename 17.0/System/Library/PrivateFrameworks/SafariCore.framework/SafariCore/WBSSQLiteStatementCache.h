@class WBSSQLiteDatabase, NSMutableDictionary;

@interface WBSSQLiteStatementCache : NSObject {
    WBSSQLiteDatabase *_database;
    NSMutableDictionary *_statements;
}

- (id)initWithDatabase:(id)a0;
- (id)init;
- (void)dealloc;
- (void)setCachedStatement:(id)a0 forQuery:(id)a1;
- (void)invalidate;
- (void).cxx_destruct;
- (id)statementForQuery:(id)a0 error:(id *)a1;
- (id)cachedStatementForQuery:(id)a0;
- (id)_createStatementForQuery:(id)a0 error:(id *)a1;

@end
