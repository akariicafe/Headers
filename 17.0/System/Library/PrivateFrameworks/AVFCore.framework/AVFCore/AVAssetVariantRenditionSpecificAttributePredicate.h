@class NSDictionary, NSNumber, NSPredicateOperator;

@interface AVAssetVariantRenditionSpecificAttributePredicate : NSPredicate {
    NSNumber *_value;
    NSPredicateOperator *_operator;
}

@property (readonly, nonatomic) NSDictionary *mediaSelectionOptionPlist;

+ (BOOL)supportsSecureCoding;

- (id)predicateFormat;
- (void)dealloc;
- (void)acceptVisitor:(id)a0 flags:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;
- (BOOL)evaluateWithObject:(id)a0 substitutionVariables:(id)a1;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithValue:(id)a0 mediaSelectionOption:(id)a1 operatorType:(unsigned long long)a2;
- (id)valueForAlternate:(id)a0;

@end
