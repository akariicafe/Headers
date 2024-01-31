@interface PLDatabaseReader : NSObject

@property struct sqlite3 { } *dbConnection;

- (void)dealloc;
- (id)performStatement:(struct sqlite3_stmt { } *)a0;
- (id)initWithDatabaseFile:(id)a0;
- (id)stringValueOfTable:(id)a0;
- (id)tableNamesFromDatabase;
- (struct sqlite3 { } *)openDatabaseFile:(id)a0;
- (id)prepareStatementAndPerformWithString:(id)a0;

@end
