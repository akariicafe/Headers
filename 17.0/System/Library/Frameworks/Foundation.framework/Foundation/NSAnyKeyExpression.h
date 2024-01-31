@interface NSAnyKeyExpression : NSExpression

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)supportsSecureCoding;
+ (void)initialize;
+ (BOOL)_allowsEvaluation;
+ (id)defaultInstance;

- (id)expressionValueWithObject:(id)a0 context:(id)a1;
- (id)retain;
- (id)_initPrivate;
- (unsigned long long)expressionType;
- (id)init;
- (unsigned long long)hash;
- (id)predicateFormat;
- (unsigned long long)retainCount;
- (void)encodeWithCoder:(id)a0;
- (id)autorelease;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (BOOL)isEqual:(id)a0;
- (oneway void)release;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
