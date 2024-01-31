@interface NSConstantValueExpression : NSExpression {
    id constantValue;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithObject:(id)a0;
- (id)expressionValueWithObject:(id)a0 context:(id)a1;
- (unsigned long long)expressionType;
- (unsigned long long)hash;
- (id)predicateFormat;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)expressionValueWithObject:(id)a0;
- (id)constantValue;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
