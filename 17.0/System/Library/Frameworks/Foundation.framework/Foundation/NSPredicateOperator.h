@interface NSPredicateOperator : NSObject <NSSecureCoding, NSCopying> {
    unsigned long long _operatorType;
    unsigned long long _modifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (SEL)_getSelectorForType:(unsigned long long)a0;
+ (id)_getSymbolForType:(unsigned long long)a0;
+ (id)_newOperatorWithType:(unsigned long long)a0 modifier:(unsigned long long)a1 options:(unsigned long long)a2;
+ (id)operatorWithCustomSelector:(SEL)a0 modifier:(unsigned long long)a1;
+ (id)operatorWithType:(unsigned long long)a0 modifier:(unsigned long long)a1 options:(unsigned long long)a2;

- (void)_setOptions:(unsigned long long)a0;
- (BOOL)performPrimitiveOperationUsingObject:(id)a0 andObject:(id)a1;
- (id)symbol;
- (unsigned long long)hash;
- (id)predicateFormat;
- (SEL)selector;
- (void)acceptVisitor:(id)a0 flags:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithOperatorType:(unsigned long long)a0;
- (id)description;
- (unsigned long long)options;
- (unsigned long long)modifier;
- (unsigned long long)operatorType;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_setModifier:(unsigned long long)a0;
- (id)initWithOperatorType:(unsigned long long)a0 modifier:(unsigned long long)a1;
- (id)initWithOperatorType:(unsigned long long)a0 modifier:(unsigned long long)a1 options:(unsigned long long)a2;
- (BOOL)performOperationUsingObject:(id)a0 andObject:(id)a1;

@end
