@class NSString;

@interface NSSymbolicExpression : NSExpression {
    NSString *_token;
}

+ (BOOL)supportsSecureCoding;

- (id)expressionValueWithObject:(id)a0 context:(id)a1;
- (unsigned long long)expressionType;
- (unsigned long long)hash;
- (id)predicateFormat;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)constantValue;
- (id)initWithString:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
