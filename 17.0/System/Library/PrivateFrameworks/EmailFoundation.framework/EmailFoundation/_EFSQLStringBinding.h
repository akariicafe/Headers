@class NSString;

@interface _EFSQLStringBinding : EFSQLBinding

@property (readonly, copy, nonatomic) NSString *stringValue;

- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (void)bindTo:(struct sqlite3_stmt { } *)a0 withSQLIndex:(int)a1;

@end
