@interface _HDSQLiteStatementCacheStorage : NSObject {
    _HDSQLiteStatementCacheStorage *_parentStorage;
    struct __CFDictionary { } *_statementsBySQL;
    struct __CFDictionary { } *_statementsByKey;
}

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
