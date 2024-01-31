@interface PGTitleSpecArgument : NSObject

@property BOOL requiresInput;
@property (retain) id inputVariable;

- (void).cxx_destruct;
- (id)_resolvedStringWithMomentNodes:(id)a0 argumentEvaluationContext:(id)a1;
- (id)_resolvedStringWithMomentNodes:(id)a0 features:(id)a1 argumentEvaluationContext:(id)a2;

@end
