@class IRRule;

@interface IRRuleOutput : NSObject

@property (readonly, nonatomic) IRRule *rule;

- (id)initWithRule:(id)a0;
- (void).cxx_destruct;
- (id)evaluateRuleOutputWithCandidateIdentifier:(id)a0;

@end
