@class NSCharacterSet, _HKCFGNonTerminal, NSMutableSet;

@interface _HKContextFreeGrammar : NSObject {
    NSMutableSet *_nonTerminals;
    NSMutableSet *_terminals;
    NSCharacterSet *_terminalCharacters;
}

@property (readonly, nonatomic) _HKCFGNonTerminal *rootNonTerminal;
@property (readonly, copy, nonatomic) id /* block */ emptyStringEvaluator;

+ (id)grammarWithRootNonTerminal:(id)a0;
+ (id)grammarWithRootNonTerminal:(id)a0 emptyStringEvaluator:(id /* block */)a1;

- (void)_gatherExpressions;
- (void)invalidate;
- (id)initWithRootNonTerminal:(id)a0 emptyStringEvaluator:(id /* block */)a1;
- (id)parseTreeForString:(id)a0;
- (void)_gatherExpressionsStartingAt:(id)a0;
- (void).cxx_destruct;

@end
