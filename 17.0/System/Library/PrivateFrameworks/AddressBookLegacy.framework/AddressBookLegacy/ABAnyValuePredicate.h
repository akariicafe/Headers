@interface ABAnyValuePredicate : ABPredicate

@property (nonatomic) int property;

- (id)init;
- (BOOL)isValid;
- (void)ab_bindWhereClauseComponentOfStatement:(struct CPSqliteStatement { struct CPSqliteConnection *x0; struct sqlite3_stmt *x1; double x2; BOOL x3; } *)a0 withBindingOffset:(int *)a1 predicateIdentifier:(int)a2;
- (id)queryGroupByProperties;
- (id)queryJoinsInCompound:(BOOL)a0 predicateIdentifier:(int)a1;
- (id)queryWhereStringForPredicateIdentifier:(int)a0;

@end
