@class NSString;

@interface _MSVSQLDatabaseFunctionContext : NSObject <NSObject> {
    struct sqlite3_context { } *_context;
    int _argc;
    struct sqlite3_value **_argv;
}

@property (readonly, nonatomic) long long numberOfArguments;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct sqlite3_value { } *)_valueAtIndex:(long long)a0;
- (id)jsonValueAtArgumentIndex:(long long)a0 error:(id *)a1;
- (id)memoizedObjectForArgumentIndex:(long long)a0;
- (void)memoizeObject:(id)a0 forArgumentIndex:(long long)a1;
- (BOOL)boolValueAtArgumentIndex:(long long)a0;
- (id)dataValueAtArgumentIndex:(long long)a0;
- (id)dateValueAtArgumentIndex:(long long)a0;
- (double)doubleValueAtArgumentIndex:(long long)a0;
- (float)floatValueAtArgumentIndex:(long long)a0;
- (id)functionContextOfClass:(Class)a0 atArgumentIndex:(long long)a1;
- (long long)int64ValueAtArgumentIndex:(long long)a0;
- (BOOL)isNullValueAtArgumentIndex:(long long)a0;
- (id)jsonDataAtArgumentIndex:(long long)a0;
- (id)objectValueAtArgumentIndex:(long long)a0;
- (id)returnBool:(BOOL)a0;
- (id)returnData:(id)a0;
- (id)returnDate:(id)a0;
- (id)returnDouble:(double)a0;
- (id)returnError:(id)a0;
- (id)returnError:(id)a0 sqliteCode:(int)a1;
- (id)returnErrorNoMemory;
- (id)returnErrorTooBig;
- (id)returnFloat:(float)a0;
- (id)returnFunctionContext:(id)a0;
- (id)returnInt64:(long long)a0;
- (id)returnJSON:(id)a0 error:(id *)a1;
- (id)returnNull;
- (id)returnString:(id)a0;
- (id)returnUInt64:(unsigned long long)a0;
- (id)stringValueAtArgumentIndex:(long long)a0;
- (unsigned long long)uint64ValueAtArgumentIndex:(long long)a0;

@end
