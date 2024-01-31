@class NSString;

@interface NSKeyPathSpecifierExpression : NSExpression {
    NSString *_value;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithObject:(id)a0;
- (id)expressionValueWithObject:(id)a0 context:(id)a1;
- (unsigned long long)expressionType;
- (id)keyPath;
- (unsigned long long)hash;
- (id)predicateFormat;
- (void)dealloc;
- (void)acceptVisitor:(id)a0 flags:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;
- (id)constantValue;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
