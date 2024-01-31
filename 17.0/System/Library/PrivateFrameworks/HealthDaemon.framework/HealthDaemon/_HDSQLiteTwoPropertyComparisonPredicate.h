@class NSString;

@interface _HDSQLiteTwoPropertyComparisonPredicate : HDSQLiteComparisonPredicate

@property (readonly, copy, nonatomic) NSString *otherProperty;

- (id)SQLForEntityClass:(Class)a0;
- (void)bindToStatement:(struct sqlite3_stmt { } *)a0 bindingIndex:(int *)a1;
- (id)description;
- (id)initWithProperty:(id)a0 comparisonType:(long long)a1 otherProperty:(id)a2;

@end
