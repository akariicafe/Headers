@interface HDAssociationEntityParentIDPredicate : HDSQLitePredicate {
    long long _parentID;
}

+ (id)predicateWithParentID:(long long)a0;

- (id)SQLForEntityClass:(Class)a0;
- (void)bindToStatement:(struct sqlite3_stmt { } *)a0 bindingIndex:(int *)a1;
- (id)SQLJoinClausesForEntityClass:(Class)a0;
- (id)description;

@end
