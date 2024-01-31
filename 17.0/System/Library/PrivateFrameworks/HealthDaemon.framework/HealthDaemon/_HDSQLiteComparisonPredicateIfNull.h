@protocol NSObject;

@interface _HDSQLiteComparisonPredicateIfNull : HDSQLiteComparisonPredicate

@property (readonly, copy, nonatomic) id<NSObject> ifPropertyIsNullValue;

- (id)SQLForEntityClass:(Class)a0;
- (void)bindToStatement:(struct sqlite3_stmt { } *)a0 bindingIndex:(int *)a1;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithProperty:(id)a0 ifPropertyIsNullValue:(id)a1 value:(id)a2 comparisonType:(long long)a3;
- (BOOL)isEqual:(id)a0;

@end
