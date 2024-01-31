@class NSArray, NSDictionary, WBSSQLiteDatabase;

@interface WBSSQLiteStatement : NSObject {
    NSDictionary *_columnNamesToIndexes;
    NSArray *_columnNames;
}

@property (readonly, nonatomic) NSArray *columnNames;
@property (readonly, nonatomic) NSDictionary *columnNamesToIndexes;
@property (readonly, nonatomic) struct sqlite3_stmt { } *handle;
@property (readonly, nonatomic) WBSSQLiteDatabase *database;

- (id)fetch;
- (void)bindNullAtParameterIndex:(unsigned long long)a0;
- (id)init;
- (void)reset;
- (void)dealloc;
- (void)bindDouble:(double)a0 atParameterIndex:(unsigned long long)a1;
- (BOOL)_isValid;
- (int)execute;
- (void)invalidate;
- (BOOL)execute:(id *)a0;
- (void)bindData:(id)a0 atParameterIndex:(unsigned long long)a1;
- (id)initWithDatabase:(id)a0 query:(id)a1;
- (BOOL)fetchWithEnumerationBlock:(id /* block */)a0 error:(id *)a1;
- (id)initWithDatabase:(id)a0 query:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (void)bindString:(id)a0 atParameterIndex:(unsigned long long)a1;
- (void)bindInt:(int)a0 atParameterIndex:(unsigned long long)a1;
- (void)bindInt64:(long long)a0 atParameterIndex:(unsigned long long)a1;

@end
