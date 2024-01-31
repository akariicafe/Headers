@class NSString, NSMutableArray;
@protocol SFTransitionCoordinating;

@interface SFTransitionCoordinator : NSObject <SFTransitionCoordinating, SFTransitionContext> {
    NSMutableArray *_animations;
    NSMutableArray *_completionBlocks;
    long long _keyframeAnimationMode;
}

@property (readonly, nonatomic) id<SFTransitionCoordinating> publicCoordinator;
@property (readonly, nonatomic) BOOL requiresKeyframeAnimations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isTransition;
@property (readonly, nonatomic) BOOL usesKeyframeAnimations;

- (void)addCompletion:(id /* block */)a0;
- (void)addAnimations:(id /* block */)a0;
- (void)addKeyframeWithRelativeStartTime:(double)a0 relativeDuration:(double)a1 animations:(id /* block */)a2;
- (void).cxx_destruct;
- (void)addRetargetableAnimations:(id /* block */)a0;
- (void)disableKeyframeAnimations;
- (id)initWithAnimations:(id /* block */)a0 completion:(id /* block */)a1;
- (void)invokeAnimations;
- (void)invokeCompletion;
- (void)performTransitionWithAnimation:(BOOL)a0 inContextOfContainerView:(id)a1;

@end
