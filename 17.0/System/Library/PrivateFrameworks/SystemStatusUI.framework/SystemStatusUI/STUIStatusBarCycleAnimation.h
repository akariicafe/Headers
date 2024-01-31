@class NSArray, NSString, STUIStatusBarCycleLayerAnimation, NSMutableArray;

@interface STUIStatusBarCycleAnimation : NSObject <CAAnimationDelegate, BSDebugDescriptionProviding, STUIStatusBarPersistentAnimation>

@property (nonatomic) BOOL visible;
@property (readonly, nonatomic) STUIStatusBarCycleLayerAnimation *mainLayerAnimation;
@property (retain, nonatomic) NSMutableArray *completionHandlers;
@property (readonly, nonatomic) NSArray *layerAnimations;
@property (readonly, nonatomic) long long state;
@property (nonatomic) BOOL stopsAfterReversing;
@property (retain, nonatomic) NSArray *stoppingLayerAnimations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)dealloc;
- (void)resumePersistentAnimation;
- (void)_stopStoppingAnimations;
- (void)start;
- (id)succinctDescriptionBuilder;
- (id)_descriptionBuilderWithMultilinePrefix:(id)a0 forDebug:(BOOL)a1;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)stopWithCompletionHandler:(id /* block */)a0;
- (void)_sendCompletionsWithFinished:(BOOL)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (void)pausePersistentAnimation;
- (id)initWithLayerAnimations:(id)a0;
- (void)_stopAnimations;
- (void)_startAnimations;
- (id)debugDescriptionWithMultilinePrefix:(id)a0;

@end
