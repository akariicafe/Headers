@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface NNMKSQLiteConnection : NSObject

@property (nonatomic) struct sqlite3 { } *db;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dbQueue;
@property (nonatomic) BOOL isInTransaction;
@property (retain, nonatomic) NSString *databasePath;
@property (retain, nonatomic) NSMutableDictionary *cachedPreparedStatementsBySQLPattern;

+ (BOOL)errorCodeMeansCorruptedDatabase:(int)a0;

- (BOOL)beginTransaction;
- (void)dealloc;
- (void)_closeDatabase;
- (BOOL)commitTransaction;
- (int)executeSQL:(id)a0;
- (int)lastErrorCode;
- (void).cxx_destruct;
- (id)lastErrorMessage;
- (BOOL)rollbackTransaction;
- (BOOL)tableExists:(id)a0 inDatabase:(id)a1;
- (int)_executeSQL:(id)a0;
- (int)_lastErrorCode;
- (id)_lastErrorMessage;
- (BOOL)_openDatabaseWithPath:(id)a0 errorCode:(int *)a1;
- (struct sqlite3_stmt { } *)_preparedStatementForPattern:(id)a0 cacheStatement:(BOOL)a1;
- (int)_runRetryingIfNeeded:(id /* block */)a0;
- (int)_stepPreparedStatement:(struct sqlite3_stmt { } *)a0;
- (id)initWithPath:(id)a0 errorCode:(int *)a1;
- (struct sqlite3_stmt { } *)preparedStatementForPattern:(id)a0;
- (struct sqlite3_stmt { } *)preparedStatementForPattern:(id)a0 cacheStatement:(BOOL)a1;
- (int)stepPreparedStatement:(struct sqlite3_stmt { } *)a0;

@end
