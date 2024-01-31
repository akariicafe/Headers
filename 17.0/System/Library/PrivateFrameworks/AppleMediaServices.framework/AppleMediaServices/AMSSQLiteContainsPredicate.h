@class NSString, AMSSQLiteQuery;

@interface AMSSQLiteContainsPredicate : AMSSQLitePropertyPredicate <NSCopying>

@property (readonly, nonatomic, getter=isNegative) BOOL negative;
@property (readonly, nonatomic) AMSSQLiteQuery *query;
@property (readonly, nonatomic) NSString *queryProperty;
@property (readonly, nonatomic) id values;

+ (id)containsPredicateWithProperty:(id)a0 values:(id)a1;
+ (id)doesNotContainPredicateWithProperty:(id)a0 values:(id)a1;
+ (id)containsPredicateWithProperty:(id)a0 query:(id)a1 queryProperty:(id)a2;

- (id)SQLForEntityClass:(Class)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)applyBinding:(id)a0 atIndex:(inout int *)a1;

@end
