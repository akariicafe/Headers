@class NSArray, CKAnimatedImage, NSString;

@interface CKAnimatedImageView : UIImageView <CKAnimationTimerObserver>

@property (copy, nonatomic) NSArray *frames;
@property (retain, nonatomic) CKAnimatedImage *animatedImage;
@property (nonatomic) BOOL automaticallyObserveWindowForAnimationTimer;
@property (nonatomic) BOOL userExplicitlyUnpausedAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (BOOL)animationExplicitlyResumed;
- (void)animationTimerFired:(double)a0;
- (void)updateAnimationTimerObserving;

@end
