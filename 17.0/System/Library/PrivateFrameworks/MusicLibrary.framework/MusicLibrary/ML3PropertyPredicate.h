@class NSString;

@interface ML3PropertyPredicate : ML3Predicate

@property (copy, nonatomic) NSString *property;

+ (BOOL)supportsSecureCoding;
+ (id)predicateWithProperty:(id)a0;

- (id)initWithProperty:(id)a0;
- (unsigned long long)hash;
- (id)SQLJoinClausesForClass:(Class)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isDynamicForEntityClass:(Class)a0;
- (void)appendSQLToMutableString:(id)a0 entityClass:(Class)a1;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
