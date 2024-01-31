@class NSString;

@interface ABPhonePredicate : ABPredicate {
    NSString *_homeCountryCode;
}

@property (copy, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic) NSString *country;

- (id)predicateFormat;
- (void)dealloc;
- (BOOL)isValid;
- (id)homeCountryCode;
- (void)ab_bindWhereClauseComponentOfStatement:(struct CPSqliteStatement { struct CPSqliteConnection *x0; struct sqlite3_stmt *x1; double x2; BOOL x3; } *)a0 withBindingOffset:(int *)a1 predicateIdentifier:(int)a2;
- (void)evaluateCallbackWithSqliteContext:(struct sqlite3_context { } *)a0 predicateContext:(id)a1 values:(struct sqlite3_value **)a2 count:(int)a3;
- (BOOL)hasCallback;
- (id)queryJoinsInCompound:(BOOL)a0 predicateIdentifier:(int)a1;
- (id)queryWhereStringForPredicateIdentifier:(int)a0;

@end
