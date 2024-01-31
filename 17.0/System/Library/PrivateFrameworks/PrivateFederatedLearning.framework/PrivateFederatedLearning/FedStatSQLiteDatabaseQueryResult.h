@interface FedStatSQLiteDatabaseQueryResult : NSObject

@property struct sqlite3_stmt { } *queryStatement;

- (void)dealloc;
- (id)next;
- (id)initWithQueryStatement:(struct sqlite3_stmt { } *)a0;

@end
