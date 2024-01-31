@class NSString, IRRuleOutputEvaluation;

@interface IRRuleInspection : NSObject

@property (retain, nonatomic) NSString *ruleName;
@property (retain, nonatomic) IRRuleOutputEvaluation *evaluation;

- (void).cxx_destruct;
- (id)initWithRuleName:(id)a0 evaluation:(id)a1;

@end
