@class NSMutableArray;

@interface _UIDynamicAnimationGroup : _UIDynamicAnimation {
    id /* block */ _applier;
    NSMutableArray *_runningAnimations;
}

@property (copy, nonatomic) NSMutableArray *animations;

- (void)runWithCompletion:(id /* block */)a0;
- (void)dealloc;
- (void)addAnimation:(id)a0;
- (void)runWithGroupApplier:(id /* block */)a0 completion:(id /* block */)a1;
- (BOOL)_animateForInterval:(double)a0;
- (void)_appendSubclassDescription:(id)a0 atLevel:(int)a1;
- (void)_stopAnimation;
- (void)removeAnimation:(id)a0;
- (void)runWithGroupApplier:(id /* block */)a0 completion:(id /* block */)a1 forScreen:(id)a2 runLoopMode:(id)a3;

@end
