@interface NSFalsePredicate : NSPredicate

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)supportsSecureCoding;
+ (id)defaultInstance;

- (id)retain;
- (unsigned long long)hash;
- (id)predicateFormat;
- (unsigned long long)retainCount;
- (void)allowEvaluation;
- (void)acceptVisitor:(id)a0 flags:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;
- (id)autorelease;
- (BOOL)_allowsEvaluation;
- (BOOL)evaluateWithObject:(id)a0 substitutionVariables:(id)a1;
- (BOOL)isEqual:(id)a0;
- (oneway void)release;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
