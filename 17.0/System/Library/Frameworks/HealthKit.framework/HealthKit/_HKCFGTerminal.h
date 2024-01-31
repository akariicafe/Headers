@interface _HKCFGTerminal : _HKCFGExpression

+ (id)terminalMatchingCharacterInSet:(id)a0;
+ (id)terminalMatchingAnyDouble;
+ (id)terminalMatchingSequenceOfCharactersInSet:(id)a0;
+ (id)terminalMatchingCharacterInString:(id)a0;
+ (id)terminalMatchingDoubleWithCondition:(id /* block */)a0;
+ (id)terminalMatchingAnyInteger;
+ (id)_terminalMatchingDoubleWithCondition:(id /* block */)a0;
+ (id)terminalMatchingString:(id)a0;
+ (id)terminalMatchingString:(id)a0 caseSensitive:(BOOL)a1;
+ (id)_terminalMatchingIntegerWithCondition:(id /* block */)a0;
+ (id)terminalMatchingIntegerWithCondition:(id /* block */)a0;

- (unsigned long long)_minimumLength;
- (BOOL)_scanValue:(id *)a0 withScanner:(id)a1;
- (void)_tryNodesWithContext:(id)a0 solutionTest:(id /* block */)a1;
- (id)_label;
- (id)characterSet;

@end
