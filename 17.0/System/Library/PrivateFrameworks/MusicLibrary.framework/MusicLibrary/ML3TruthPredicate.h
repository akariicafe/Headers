@interface ML3TruthPredicate : ML3Predicate {
    BOOL _truthValue;
}

+ (BOOL)supportsSecureCoding;
+ (id)falsePredicate;
+ (id)truePredicate;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void)appendSQLToMutableString:(id)a0 entityClass:(Class)a1;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_predicateString;
- (BOOL)isFalseAlways;
- (BOOL)isTrueAlways;

@end
