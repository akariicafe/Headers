@interface SCRCMathTextExpression : SCRCMathSimpleExpression

- (id)mathMLString;
- (id)latexDescriptionInMathMode:(BOOL)a0;
- (id)speakableDescriptionWithSpeakingStyle:(long long)a0 arePausesAllowed:(BOOL)a1;

@end
