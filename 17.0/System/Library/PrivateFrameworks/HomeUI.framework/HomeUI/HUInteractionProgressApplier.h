@class NSString, HUAnimationApplier, UIInteractionProgress, HUAnimationSettings;

@interface HUInteractionProgressApplier : HUApplier <UIInteractionProgressObserver>

@property (nonatomic) double animationFromProgress;
@property (nonatomic) double animationToProgress;
@property (retain, nonatomic) HUAnimationApplier *inFlightAnimation;
@property (nonatomic) double previousInteractionProgress;
@property (nonatomic) BOOL waitingOnAnimationToComplete;
@property (readonly, nonatomic) UIInteractionProgress *interactionProgress;
@property (retain, nonatomic) HUAnimationSettings *significantProgressChangeAnimationSettings;
@property (retain, nonatomic) HUAnimationSettings *transitionAnimationSettings;
@property (nonatomic) BOOL boundProgressValues;
@property (nonatomic) BOOL completesAtTargetState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)applierWithInteractionProgress:(id)a0;
+ (id)applyInteractionProgress:(id)a0 withApplier:(id /* block */)a1 completion:(id /* block */)a2;

- (void)interactionProgressDidUpdate:(id)a0;
- (BOOL)isInteractive;
- (id)init;
- (void)interactionProgress:(id)a0 didEnd:(BOOL)a1;
- (BOOL)start;
- (void).cxx_destruct;
- (BOOL)cancel;
- (id)initWithInteractionProgress:(id)a0;
- (BOOL)complete:(BOOL)a0;
- (void)_completeSuccessfullyIfAnimationsComplete;
- (double)_currentInteractionProgress;
- (BOOL)_interactionProgressChangedSignificantly;
- (void)_updateCurrentProgress;

@end
