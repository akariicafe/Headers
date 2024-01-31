@class NSArray, NSString;

@interface ML3SearchStringPredicate : ML3Predicate

@property (copy, nonatomic) NSArray *properties;
@property (copy, nonatomic) NSString *searchString;

+ (BOOL)supportsSecureCoding;
+ (id)predicateWithConcatenatedProperties:(id)a0 searchString:(id)a1;

- (unsigned long long)hash;
- (id)SQLJoinClausesForClass:(Class)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isDynamicForEntityClass:(Class)a0;
- (void)appendSQLToMutableString:(id)a0 entityClass:(Class)a1;
- (id)databaseStatementParameters;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithConcatenatedProperties:(id)a0 searchString:(id)a1;

@end
