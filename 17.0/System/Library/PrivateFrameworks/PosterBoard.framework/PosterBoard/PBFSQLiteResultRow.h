@class NSString, NSArray;

@interface PBFSQLiteResultRow : NSObject <BSInvalidatable, NSCopying> {
    struct sqlite3_stmt { } *_statement;
    NSArray *_columnNames;
}

@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (long long)integerAtIndex:(unsigned long long)a0;
- (double)doubleAtIndex:(unsigned long long)a0;
- (id)stringAtIndex:(unsigned long long)a0;
- (id)keyAtIndex:(unsigned long long)a0;
- (id)objectAtIndex:(unsigned long long)a0;
- (void)invalidate;
- (id)dataAtIndex:(unsigned long long)a0;
- (double)doubleForKey:(id)a0;
- (void).cxx_destruct;
- (long long)integerForKey:(id)a0;
- (id)stringForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dataForKey:(id)a0;

@end
