@class HMPresenceEvent;

@interface HFPresenceCondition : HFCondition

@property (retain, nonatomic) HMPresenceEvent *presenceEvent;

- (id)initWithPredicate:(id)a0;
- (void).cxx_destruct;
- (id)initWithPresenceEvent:(id)a0;
- (id)hf_naturalLanguageSummaryWithOptions:(id)a0;

@end
