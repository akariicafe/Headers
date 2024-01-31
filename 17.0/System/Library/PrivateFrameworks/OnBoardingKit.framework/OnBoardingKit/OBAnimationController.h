@class CAPackage, CAStateController, NSArray, OBAnimationState, NSString, OBAnimationView;

@interface OBAnimationController : NSObject <OBAnimationAppearanceChangeDelegate>

@property (retain, nonatomic) CAPackage *package;
@property (retain, nonatomic) CAStateController *stateController;
@property (retain, nonatomic) OBAnimationView *animationView;
@property (retain, nonatomic) NSArray *animatedStates;
@property (nonatomic) BOOL canceled;
@property (nonatomic) unsigned long long stateIndex;
@property (retain, nonatomic) OBAnimationState *firstState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)packageForURL:(id)a0;

- (void)startAnimation;
- (void).cxx_destruct;
- (void)stopAnimation;
- (id)_caStateForAnimationState:(id)a0;
- (void)_initializeStartingStateForStopAnimation:(BOOL)a0;
- (void)_startAnimationForLayer:(id)a0;
- (void)_stepAnimationStatesForLayer:(id)a0;
- (id)initWithUrlToPackage:(id)a0 animationView:(id)a1 animatedStates:(id)a2 startAtFirstState:(id)a3;
- (id)initWithUrlToPackage:(id)a0 animationView:(id)a1 sizingTransformScale:(double)a2 animatedStates:(id)a3 startAtFirstState:(id)a4;
- (void)updateAnimationForAppearanceChange;

@end
