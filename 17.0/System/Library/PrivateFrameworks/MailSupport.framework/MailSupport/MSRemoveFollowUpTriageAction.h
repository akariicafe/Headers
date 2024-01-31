@class EMFollowUp;

@interface MSRemoveFollowUpTriageAction : MSTriageAction

@property (retain, nonatomic) EMFollowUp *followUp;

- (void).cxx_destruct;
- (id)_changeAction;
- (id)initWithMessageListSelection:(id)a0 origin:(long long)a1 actor:(long long)a2 delegate:(id)a3 followUp:(id)a4;

@end
