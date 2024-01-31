@interface SCRCMathSpaceExpression : SCRCMathExpression

- (id)initWithDictionary:(id)a0;
- (id)mathMLString;
- (BOOL)beginsWithSpace;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)a0 treePosition:(id)a1;
- (BOOL)endsWithSpace;

@end
