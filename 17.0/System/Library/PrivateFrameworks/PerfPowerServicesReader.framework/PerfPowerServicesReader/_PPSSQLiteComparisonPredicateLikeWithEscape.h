@class NSString;

@interface _PPSSQLiteComparisonPredicateLikeWithEscape : PPSSQLiteComparisonPredicate

@property (readonly, copy, nonatomic) NSString *escapeCharacter;

- (id)initWithProperty:(id)a0 value:(id)a1 escapeCharacter:(id)a2;
- (void).cxx_destruct;
- (id)sqlForEntity:(id)a0;

@end
