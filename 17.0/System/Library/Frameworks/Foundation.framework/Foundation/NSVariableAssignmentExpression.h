@class NSExpression, NSVariableExpression;

@interface NSVariableAssignmentExpression : NSExpression {
    NSVariableExpression *_assignmentVariable;
    NSExpression *_subexpression;
}

+ (BOOL)supportsSecureCoding;

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
- (id)initWithCoder:(id)a0;
- (id)_expressionWithSubstitutionVariables:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)assignmentVariable;
- (id)initWithAssignmentExpression:(id)a0 expression:(id)a1;
- (id)initWithAssignmentVariable:(id)a0 expression:(id)a1;
- (id)subexpression;

@end
