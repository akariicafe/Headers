@class NSString;
@protocol VUIConfirmationAnimatedTransitioningDelegate;

@interface VUIConfirmationAnimatedTransitioning : NSObject <UIViewControllerAnimatedTransitioning>

@property (readonly, nonatomic, getter=isPresenting) BOOL presenting;
@property (weak, nonatomic) id<VUIConfirmationAnimatedTransitioningDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (void).cxx_destruct;
- (void)animationEnded:(BOOL)a0;
- (id)initWithPresenting:(BOOL)a0;

@end
