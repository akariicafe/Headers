@interface _PPSSQLiteComparisonPredicateIfNull : PPSSQLiteComparisonPredicate

@property (readonly, copy, nonatomic) id ifPropertyIsNullValue;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithProperty:(id)a0 ifPropertyIsNullValue:(id)a1 value:(id)a2 comparisonType:(long long)a3;
- (BOOL)isEqual:(id)a0;
- (id)sqlForEntity:(id)a0;

@end
