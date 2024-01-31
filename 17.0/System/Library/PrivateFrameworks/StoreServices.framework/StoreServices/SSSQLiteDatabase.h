@class NSString, BKSProcessAssertion, NSObject;
@protocol OS_dispatch_queue;

@interface SSSQLiteDatabase : NSObject {
    struct sqlite3 { } *_db;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_databasePath;
    BOOL _readOnly;
    BOOL _shouldAttemptToReopenDB;
    BOOL _isInTransaction;
    NSString *_protectionType;
    struct __CFDictionary { } *_statementCache;
    BOOL _takesTaskCompletionAssertions;
    BKSProcessAssertion *_taskAssertion;
    long long _taskAssertionCount;
}

@property BOOL takesTaskCompletionAssertions;
@property (copy, nonatomic) id /* block */ setupBlock;

+ (void)_setTakesTaskCompletionAssertions:(BOOL)a0;
+ (void)_stepStatement:(struct sqlite3_stmt { } *)a0 hasRow:(BOOL *)a1 didFinish:(BOOL *)a2 isCorrupt:(BOOL *)a3;
+ (BOOL)statementHasRowAfterStepping:(struct sqlite3_stmt { } *)a0;
+ (BOOL)statementDidFinishAfterStepping:(struct sqlite3_stmt { } *)a0;

- (id)initWithDatabaseURL:(id)a0;
- (void)dealloc;
- (long long)countChanges;
- (void)expireBackgroundTask;
- (struct sqlite3_stmt { } *)_statementForSQL:(id)a0 cache:(BOOL)a1;
- (long long)userVersion;
- (id)_openDatabaseIfNotOpen;
- (void)endTaskCompletionAssertion;
- (void)prepareStatementForSQL:(id)a0 cache:(BOOL)a1 usingBlock:(id /* block */)a2;
- (void)_expireBackgroundTask;
- (void)accessDatabaseUsingBlock:(id /* block */)a0;
- (int)_openFlags;
- (BOOL)setUserVersion:(long long)a0 forDatabase:(id)a1;
- (void)_accessDatabaseUsingBlock:(id /* block */)a0;
- (void)dispatchBlockSync:(id /* block */)a0;
- (BOOL)executeSQL:(id)a0;
- (void)_resetDatabaseWithPath:(id)a0;
- (BOOL)statementHasRowAfterStepping:(struct sqlite3_stmt { } *)a0;
- (BOOL)setUserVersion:(long long)a0;
- (void)_endTaskCompletionAssertion;
- (id)initWithDatabaseURL:(id)a0 readOnly:(BOOL)a1;
- (long long)userVersionForDatabase:(id)a0;
- (BOOL)columnName:(id)a0 existsInTable:(id)a1;
- (BOOL)statementDidFinishAfterStepping:(struct sqlite3_stmt { } *)a0;
- (id)initWithDatabaseURL:(id)a0 readOnly:(BOOL)a1 protectionType:(id)a2;
- (void)performTransactionWithBlock:(id /* block */)a0;
- (void)dispatchBlockAsync:(id /* block */)a0;
- (void)beginTaskCompletionAssertion;
- (int)_closeDatabaseIfOpen;
- (void)dispatchAfter:(unsigned long long)a0 block:(id /* block */)a1;
- (id)newDispatchSourceWithType:(struct dispatch_source_type_s { } *)a0;
- (void)_beginTaskCompletionAssertion;
- (int)_resetAndReopenDatabaseWithPath:(id)a0;
- (void)_resetCorruptDatabase;

@end
