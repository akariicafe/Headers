@interface SCRCMathTableExpression : SCRCMathArrayExpression

- (unsigned long long)_numberOfColumns;
- (BOOL)isMultiRowTable;
- (BOOL)canBeWrappedInLatexMathIndicators;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)a0 treePosition:(id)a1;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)a0 treePosition:(id)a1 openOperator:(id)a2 openOperatorTreePosition:(id)a3 closeOperator:(id)a4 closeOperatorTreePosition:(id)a5;
- (id)latexDescriptionInMathMode:(BOOL)a0;
- (id)mathMLTag;
- (unsigned long long)numberOfTables;
- (id)speakableDescriptionWithSpeakingStyle:(long long)a0 arePausesAllowed:(BOOL)a1;
- (id)speakableSegmentsWithSpeakingStyle:(long long)a0 upToDepth:(unsigned long long)a1 treePosition:(id)a2;

@end
