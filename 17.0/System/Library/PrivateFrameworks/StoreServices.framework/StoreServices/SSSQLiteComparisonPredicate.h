@interface SSSQLiteComparisonPredicate : SSSQLitePropertyPredicate <NSCopying>

@property (readonly, nonatomic) long long comparisonType;
@property (readonly, nonatomic) id value;

+ (id)predicateWithProperty:(id)a0 value:(id)a1 comparisonType:(long long)a2;
+ (id)predicateWithProperty:(id)a0 equalToLongLong:(long long)a1;
+ (id)predicateWithProperty:(id)a0 equalToValue:(id)a1;

- (id)SQLForEntityClass:(Class)a0;
- (void)bindToStatement:(struct sqlite3_stmt { } *)a0 bindingIndex:(inout int *)a1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)_comparisonTypeString;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
