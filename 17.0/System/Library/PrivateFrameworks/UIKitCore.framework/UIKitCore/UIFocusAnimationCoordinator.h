@class UIFocusUpdateContext, NSMutableArray, _UIFocusAnimationConfiguration;

@interface UIFocusAnimationCoordinator : NSObject

@property (retain, nonatomic) _UIFocusAnimationConfiguration *focusingConfiguration;
@property (retain, nonatomic) _UIFocusAnimationConfiguration *unfocusingConfiguration;
@property (readonly, nonatomic) NSMutableArray *focusingAnimations;
@property (readonly, nonatomic) NSMutableArray *legacyFocusingAnimations;
@property (readonly, nonatomic) NSMutableArray *unfocusingAnimations;
@property (readonly, nonatomic) NSMutableArray *legacyUnfocusingAnimations;
@property (readonly, nonatomic) NSMutableArray *focusingCompletions;
@property (readonly, nonatomic) NSMutableArray *unfocusingCompletions;
@property (readonly, nonatomic, getter=_focusUpdateContext) UIFocusUpdateContext *focusUpdateContext;
@property (readonly, copy, nonatomic, getter=_activeConfiguration) _UIFocusAnimationConfiguration *activeConfiguration;
@property (readonly, nonatomic, getter=_isLocked) BOOL locked;
@property (readonly, nonatomic, getter=_unfocusingRepositionAnimationDuration) double unfocusingRepositionAnimationDuration;
@property (readonly, nonatomic) long long activeFocusAnimation;
@property (readonly, nonatomic, getter=_animationOptions) unsigned long long animationOptions;
@property (readonly, nonatomic, getter=_animationDelay) double animationDelay;
@property (readonly, nonatomic, getter=_activeAnimationDuration) double activeAnimationDuration;
@property (readonly, nonatomic, getter=_focusingAnimationDuration) double focusingAnimationDuration;
@property (readonly, nonatomic, getter=_unfocusingAnimationDuration) double unfocusingAnimationDuration;

+ (id)_focusAnimationCoordinatorForAnimationType:(long long)a0 withConfiguration:(id)a1 inContext:(id)a2;
+ (id)_focusingAnimationCoordinatorWithConfiguration:(id)a0 inContext:(id)a1;
+ (id)_unfocusingAnimationCoordinatorWithConfiguration:(id)a0 inContext:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)_consumeBlocks:(id)a0;
- (void)_animate;
- (void)_animateFocusAnimation:(long long)a0;
- (void)_cancelFocusAnimation:(long long)a0;
- (id)_configurationForFocusAnimation:(long long)a0;
- (void)_configureWithFocusUpdateContext:(id)a0;
- (void)_consumeBlocks:(id)a0 withAnimationContext:(id)a1;
- (id)_initWithFocusUpdateContext:(id)a0;
- (void)_prepareForFocusAnimation:(long long)a0;
- (void)_setConfiguration:(id)a0 forFocusAnimation:(long long)a1;
- (void)addCoordinatedAnimations:(id /* block */)a0 completion:(id /* block */)a1;
- (void)addCoordinatedAnimationsForAnimation:(long long)a0 animations:(id /* block */)a1 completion:(id /* block */)a2;
- (void)addCoordinatedFocusingAnimations:(id /* block */)a0 completion:(id /* block */)a1;
- (void)addCoordinatedUnfocusingAnimations:(id /* block */)a0 completion:(id /* block */)a1;

@end
