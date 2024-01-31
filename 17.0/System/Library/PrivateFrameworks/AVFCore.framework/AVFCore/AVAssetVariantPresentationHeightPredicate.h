@class NSPredicateOperator;

@interface AVAssetVariantPresentationHeightPredicate : NSPredicate {
    double _height;
    NSPredicateOperator *_operator;
}

+ (BOOL)supportsSecureCoding;

- (id)predicateFormat;
- (void)dealloc;
- (void)acceptVisitor:(id)a0 flags:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;
- (BOOL)evaluateWithObject:(id)a0 substitutionVariables:(id)a1;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPresentationHeight:(double)a0 operatorType:(unsigned long long)a1;

@end
