@interface ML3ContainsPredicate : ML3PropertyPredicate

@property (copy, nonatomic) id values;

+ (BOOL)supportsSecureCoding;
+ (id)predicateWithProperty:(id)a0 values:(id)a1;
+ (id)predicateWithProperty:(id)a0 valueSet:(id)a1;

- (BOOL)containsPropertyPredicate:(id)a0 matchingValue:(id)a1 usingComparison:(int)a2;
- (void)encodeWithCoder:(id)a0;
- (void)appendSQLToMutableString:(id)a0 entityClass:(Class)a1;
- (id)databaseStatementParameters;
- (id)initWithProperty:(id)a0 values:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
