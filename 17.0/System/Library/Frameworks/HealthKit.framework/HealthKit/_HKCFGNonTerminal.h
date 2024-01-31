@class NSString, NSMutableArray, NSCharacterSet;

@interface _HKCFGNonTerminal : _HKCFGExpression {
    NSString *_label;
    NSMutableArray *_replacementRules;
}

@property (copy, nonatomic) NSCharacterSet *charactersToBeSkipped;

+ (id)nonTerminalWithLabel:(id)a0;

- (unsigned long long)_minimumLength;
- (id)initWithLabel:(id)a0;
- (id)_parseTreeWithContext:(id)a0;
- (void)_invalidate;
- (void)_tryNodesWithContext:(id)a0 solutionTest:(id /* block */)a1;
- (void)_checkForCycles:(id)a0;
- (void)_checkForCycles;
- (void).cxx_destruct;
- (id)_label;
- (id)_replacementRules;
- (BOOL)_tryNodesForExpressions:(id)a0 nodes:(id)a1 context:(id)a2 solutionTest:(id /* block */)a3;
- (void)addReplacementRuleWithExpressions:(id)a0 nodeEvaluator:(id /* block */)a1;

@end
