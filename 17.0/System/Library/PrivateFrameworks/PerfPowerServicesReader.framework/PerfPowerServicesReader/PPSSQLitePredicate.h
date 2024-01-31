@interface PPSSQLitePredicate : NSObject <NSCopying>

- (void)bindToStatement:(struct sqlite3_stmt { } *)a0 bindingIndex:(inout int *)a1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)sqlForEntity:(id)a0;
- (id)sqlJoinClausesForEntity:(id)a0;

@end
