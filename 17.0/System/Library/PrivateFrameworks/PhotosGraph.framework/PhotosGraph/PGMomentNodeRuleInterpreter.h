@class PGGraph;

@interface PGMomentNodeRuleInterpreter : PLLibraryScopeRuleInterpreter

@property (retain, nonatomic) PGGraph *graph;

- (void).cxx_destruct;
- (id)initWithGraph:(id)a0;
- (id)evaluateObjects:(id)a0 forCondition:(id)a1;
- (id)evaluateMomentNodes:(id)a0 forDateRangeCondition:(id)a1;
- (id)evaluateMomentNodes:(id)a0 forPersonCondition:(id)a1;

@end
