@interface ML3Predicate : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

- (id)SQLForEntityClass:(Class)a0;
- (unsigned long long)hash;
- (id)SQLJoinClausesForClass:(Class)a0;
- (BOOL)containsPropertyPredicate:(id)a0 matchingValue:(id)a1 usingComparison:(int)a2;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isDynamicForEntityClass:(Class)a0;
- (void)appendSQLToMutableString:(id)a0 entityClass:(Class)a1;
- (id)spotlightPredicate;
- (id)databaseStatementParameters;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isFalseAlways;
- (BOOL)isTrueAlways;

@end
