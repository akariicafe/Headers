@class NSDictionary;

@interface IRRuleOutputHistoryPattern : IRRuleOutput

@property (retain, nonatomic) NSDictionary *scoreForCandidates;
@property (nonatomic) unsigned long long numberOfEventsInHistory;

- (id)initWithRule:(id)a0;
- (void).cxx_destruct;
- (id)evaluateRuleOutputWithCandidateIdentifier:(id)a0;

@end
