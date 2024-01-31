@class SCRCMathExpression;

@interface SCRCMathFractionExpression : SCRCMathExpression

@property (retain, nonatomic) SCRCMathExpression *numerator;
@property (retain, nonatomic) SCRCMathExpression *denominator;
@property (retain, nonatomic) SCRCMathExpression *operator;
@property (nonatomic) double lineThickness;

- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)mathMLString;
- (id)_dollarCodeDescriptionAsBinomialCoefficient:(BOOL)a0 orMixedNumberFraction:(BOOL)a1 withNumberOfOuterRadicals:(unsigned long long)a2 treePosition:(id)a3;
- (id)_speakableDescriptionWithSpeakingStyle:(long long)a0 arePausesAllowed:(BOOL)a1 asBinomialCoefficient:(BOOL)a2;
- (id)_speakableSegmentsWithSpeakingStyle:(long long)a0 upToDepth:(unsigned long long)a1 treePosition:(id)a2 asBinomialCoefficient:(BOOL)a3;
- (id)dollarCodeDescriptionAsBinomialCoefficientWithTreePosition:(id)a0 numberOfOuterRadicals:(unsigned long long)a1;
- (id)dollarCodeDescriptionAsMixedNumberFractionWithTreePosition:(id)a0;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)a0 treePosition:(id)a1;
- (unsigned long long)fractionLevel;
- (BOOL)isSimpleNumericalFraction;
- (BOOL)isUnlinedFraction;
- (id)latexMathModeDescription;
- (id)speakableDescriptionAsBinomialCoefficientWithSpeakingStyle:(long long)a0;
- (id)speakableDescriptionWithSpeakingStyle:(long long)a0 arePausesAllowed:(BOOL)a1;
- (id)speakableSegmentsAsBinomialCoefficientWithSpeakingStyle:(long long)a0 upToDepth:(unsigned long long)a1 treePosition:(id)a2;
- (id)speakableSegmentsWithSpeakingStyle:(long long)a0 upToDepth:(unsigned long long)a1 treePosition:(id)a2;
- (id)subExpressions;

@end
