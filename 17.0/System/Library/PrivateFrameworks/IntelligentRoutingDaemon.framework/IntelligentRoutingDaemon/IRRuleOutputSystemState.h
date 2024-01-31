@class IRRuleOutputEvaluation;

@interface IRRuleOutputSystemState : IRRuleOutput

@property (retain, nonatomic) IRRuleOutputEvaluation *value;

- (void).cxx_destruct;
- (id)evaluateRuleOutputWithCandidateIdentifier:(id)a0;

@end
