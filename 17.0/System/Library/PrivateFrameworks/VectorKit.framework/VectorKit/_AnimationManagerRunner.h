@class NSString;

@interface _AnimationManagerRunner : NSObject <VKAnimationRunner> {
    void *_animationManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)animationDidStop:(id)a0;
- (void)animationDidResume:(id)a0;
- (id)initWithAnimationManager:(void *)a0;

@end
