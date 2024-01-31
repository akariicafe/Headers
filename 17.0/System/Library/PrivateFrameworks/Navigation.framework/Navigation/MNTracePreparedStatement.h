@interface MNTracePreparedStatement : NSObject {
    struct sqlite3 { } *_db;
    struct sqlite3_stmt { } *_preparedStatement;
}

+ (id)preparedStatementForTrace:(id)a0 statement:(id)a1 outError:(out id *)a2;

- (id)init;
- (BOOL)reset;
- (void)dealloc;
- (BOOL)clearBindings;
- (BOOL)execute;
- (void)finalize;
- (BOOL)step;
- (id)debugDescription;
- (BOOL)stepRow;
- (BOOL)_prepareStatementForTrace:(id)a0 statement:(id)a1 outError:(out id *)a2;
- (void)bind:(unsigned long long)a0 data:(id)a1;
- (void)bind:(unsigned long long)a0 double:(double)a1;
- (void)bind:(unsigned long long)a0 int:(int)a1;
- (void)bind:(unsigned long long)a0 string:(id)a1;
- (void)bindNull:(unsigned long long)a0;
- (id)columnData:(unsigned long long)a0;
- (double)columnDouble:(unsigned long long)a0;
- (int)columnInt:(unsigned long long)a0;
- (id)columnObjects:(unsigned long long)a0 ofClasses:(id)a1;
- (id)columnObjectsOld:(unsigned long long)a0 ofClasses:(id)a1;
- (id)columnString:(unsigned long long)a0;
- (id)initForTrace:(id)a0 statement:(id)a1 outError:(out id *)a2;

@end
