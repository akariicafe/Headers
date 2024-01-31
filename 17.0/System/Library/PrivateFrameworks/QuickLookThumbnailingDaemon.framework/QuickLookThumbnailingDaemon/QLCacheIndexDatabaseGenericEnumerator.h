@class QLSqliteDatabase;

@interface QLCacheIndexDatabaseGenericEnumerator : NSObject {
    QLSqliteDatabase *_sqliteDatabase;
    struct sqlite3_stmt { } *_stmt;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithSqliteDatabase:(id)a0;

@end
