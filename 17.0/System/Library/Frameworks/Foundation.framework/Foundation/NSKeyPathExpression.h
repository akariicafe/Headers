@interface NSKeyPathExpression : NSFunctionExpression

- (id)expressionValueWithObject:(id)a0 context:(id)a1;
- (id)pathExpression;
- (unsigned long long)expressionType;
- (id)keyPath;
- (id)predicateFormat;
- (void)dealloc;
- (void)acceptVisitor:(id)a0 flags:(unsigned long long)a1;
- (id)initWithOperand:(id)a0 andKeyPath:(id)a1;
- (id)initWithKeyPath:(id)a0;

@end
