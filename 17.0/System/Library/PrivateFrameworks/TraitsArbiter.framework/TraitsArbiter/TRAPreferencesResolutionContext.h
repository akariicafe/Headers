@class NSArray, TRAArbitrationInputs;

@interface TRAPreferencesResolutionContext : NSObject

@property (readonly, nonatomic) NSArray *acquiredParticipants;
@property (readonly, nonatomic) NSArray *stageParticipantsRoles;
@property (readonly, nonatomic) TRAArbitrationInputs *validatedInputs;
@property (readonly, nonatomic) TRAArbitrationInputs *rawInputs;

- (void).cxx_destruct;
- (id)initWithAcquiredParticipants:(id)a0 stageParticipantsRoles:(id)a1 validatedInputs:(id)a2 rawInputs:(id)a3;

@end
