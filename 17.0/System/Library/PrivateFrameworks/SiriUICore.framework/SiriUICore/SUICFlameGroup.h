@interface SUICFlameGroup : NSObject

@property (nonatomic) float stateTime;
@property (nonatomic) float zTime;
@property (nonatomic) float globalAlpha;
@property (nonatomic) float transitionPhase;
@property (nonatomic) float *transitionPhasePtr;
@property (nonatomic) void /* unknown type, empty encoding */ stateModifiers;
@property (nonatomic) void *stateModifiersPtr;
@property (nonatomic) BOOL isAura;
@property (nonatomic) BOOL isDyingOff;

- (id)init;
- (id)description;

@end
