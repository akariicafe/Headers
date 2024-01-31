@interface NSAggregateExpression : NSExpression {
    id _collection;
}

+ (BOOL)supportsSecureCoding;

- (id)collection;
- (id)initWithCollection:(id)a0;
- (id)expressionValueWithObject:(id)a0 context:(id)a1;
- (unsigned long long)expressionType;
- (unsigned long long)hash;
- (id)predicateFormat;
- (void)dealloc;
- (void)allowEvaluation;
- (void)acceptVisitor:(id)a0 flags:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;
- (id)constantValue;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_expressionWithSubstitutionVariables:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
