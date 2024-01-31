@class NSExpression, NSArray;

@interface NSFunctionExpression : NSExpression {
    NSExpression *_operand;
    SEL _selector;
    NSArray *_arguments;
}

+ (BOOL)supportsSecureCoding;

- (id)function;
- (id)expressionValueWithObject:(id)a0 context:(id)a1;
- (unsigned long long)expressionType;
- (unsigned long long)hash;
- (id)predicateFormat;
- (id)arguments;
- (void)dealloc;
- (void)allowEvaluation;
- (SEL)selector;
- (void)acceptVisitor:(id)a0 flags:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_allowsEvaluation;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_expressionWithSubstitutionVariables:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSelector:(SEL)a0 argumentArray:(id)a1;
- (id)operand;
- (BOOL)_shouldUseParensWithDescription;
- (id)binaryOperatorForSelector;
- (id)initWithExpressionType:(unsigned long long)a0 operand:(id)a1 selector:(SEL)a2 argumentArray:(id)a3;
- (id)initWithTarget:(id)a0 selectorName:(id)a1 arguments:(id)a2;

@end
