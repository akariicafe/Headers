@interface ML3NegationPredicate : ML3UnaryPredicate

+ (BOOL)supportsSecureCoding;

- (void)appendSQLToMutableString:(id)a0 entityClass:(Class)a1;
- (id)description;

@end
