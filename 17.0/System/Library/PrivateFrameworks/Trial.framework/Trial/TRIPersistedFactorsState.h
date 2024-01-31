@class TRIPersistedRolloutFactorsState, TRIPersistedExperimentFactorsState, TRIPersistedBMLTFactorsState;

@interface TRIPersistedFactorsState : TRIPBMessage

@property (readonly, nonatomic) int stateOneOfCase;
@property (retain, nonatomic) TRIPersistedRolloutFactorsState *rollout;
@property (retain, nonatomic) TRIPersistedExperimentFactorsState *experiment;
@property (retain, nonatomic) TRIPersistedBMLTFactorsState *bmlt;

+ (id)descriptor;

@end
