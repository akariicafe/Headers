@class NSString;

@interface SCRCMathSimpleExpression : SCRCMathExpression

@property (copy, nonatomic) NSString *content;

- (long long)integerValue;
- (BOOL)isInteger;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)_functionNames;
- (BOOL)canBeUsedWithBase;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)a0 treePosition:(id)a1;
- (BOOL)isFunctionName;
- (BOOL)isWordOrAbbreviation;
- (id)latexMathModeDescription;
- (id)speakableDescriptionWithSpeakingStyle:(long long)a0 arePausesAllowed:(BOOL)a1;

@end
