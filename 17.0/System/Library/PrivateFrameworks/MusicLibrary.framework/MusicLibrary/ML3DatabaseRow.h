@class ML3DatabaseResult;

@interface ML3DatabaseRow : NSObject {
    struct sqlite3_stmt { } *_stmt;
}

@property (readonly, nonatomic) ML3DatabaseResult *parentResult;

- (id)stringForColumnIndex:(unsigned long long)a0;
- (id)numberForColumnIndex:(unsigned long long)a0;
- (const char *)cStringForColumnIndex:(unsigned long long)a0;
- (id)dataForColumnIndex:(unsigned long long)a0;
- (long long)int64ForColumnIndex:(unsigned long long)a0;
- (int)intForColumnIndex:(unsigned long long)a0;
- (id)stringForColumnName:(id)a0;
- (id)valueForColumnName:(id)a0;
- (int)intForColumnName:(id)a0;
- (void)getBlobBytes:(const void **)a0 outLength:(int *)a1 forColumnName:(id)a2;
- (double)doubleForColumnName:(id)a0;
- (double)doubleForColumnIndex:(unsigned long long)a0;
- (id)dataForColumnName:(id)a0;
- (const char *)cStringForColumnName:(id)a0;
- (unsigned long long)columnCount;
- (void)getBlobBytes:(const void **)a0 outLength:(int *)a1 forColumnIndex:(unsigned long long)a2;
- (long long)int64ForColumnName:(id)a0;
- (id)init;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (id)numberForColumnName:(id)a0;
- (void).cxx_destruct;
- (id)initWithParentResult:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (id)dictionaryRepresentation;
- (id)valueForColumnIndex:(unsigned long long)a0;
- (id)arrayRepresentation;

@end
