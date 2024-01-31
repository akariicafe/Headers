@class NSExpression, NSPredicate;

@interface NSSubqueryExpression : NSExpression {
    NSExpression *_collection;
    NSExpression *_variableExpression;
    NSPredicate *_subpredicate;
}

+ (BOOL)supportsSecureCoding;

- (id)collection;
- (id)expressionValueWithObject:(id)a0 context:(id)a1;
- (unsigned long long)expressionType;
- (unsigned long long)hash;
- (id)predicateFormat;
- (void)dealloc;
- (void)allowEvaluation;
- (void)acceptVisitor:(id)a0 flags:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;
- (id)variable;
- (BOOL)isEqual:(id)a0;
- (id)predicate;
- (id)initWithCoder:(id)a0;
- (id)_expressionWithSubstitutionVariables:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_shouldUseParensWithDescription;
- (id)initWithExpression:(id)a0 usingIteratorExpression:(id)a1 predicate:(id)a2;
- (id)initWithExpression:(id)a0 usingIteratorVariable:(id)a1 predicate:(id)a2;
- (id)variableExpression;

@end
