@interface AMSSQLitePredicate : NSObject <NSCopying>

- (id)SQLForEntityClass:(Class)a0;
- (unsigned long long)hash;
- (id)SQLJoinClausesForEntityClass:(Class)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)applyBinding:(id)a0 atIndex:(inout int *)a1;

@end
