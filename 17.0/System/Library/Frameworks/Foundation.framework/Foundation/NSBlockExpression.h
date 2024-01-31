@class NSArray;

@interface NSBlockExpression : NSExpression {
    id /* block */ _block;
    NSArray *_arguments;
}

+ (BOOL)supportsSecureCoding;

- (id)expressionValueWithObject:(id)a0 context:(id)a1;
- (unsigned long long)expressionType;
- (id)predicateFormat;
- (id)arguments;
- (void)dealloc;
- (void)acceptVisitor:(id)a0 flags:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_expressionWithSubstitutionVariables:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id /* block */)expressionBlock;
- (id)initWithType:(unsigned long long)a0 block:(id /* block */)a1 arguments:(id)a2;

@end
