@interface HDSQLiteNullPredicate : HDSQLitePropertyPredicate <NSCopying>

@property (readonly, nonatomic) BOOL matchesNull;

+ (id)isNotNullPredicateWithProperty:(id)a0;
+ (id)isNullPredicateWithProperty:(id)a0;

- (id)SQLForEntityClass:(Class)a0;
- (id)description;
- (BOOL)isCompatibleWithPredicate:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
