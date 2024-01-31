@class UIColor, NSString;

@interface PXUIViewControllerFadeThroughColorTransition : NSObject <UIViewControllerAnimatedTransitioning>

@property (readonly, nonatomic) double duration;
@property (readonly, copy, nonatomic) UIColor *midpointColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (void).cxx_destruct;
- (id)initWithDuration:(double)a0 midpointColor:(id)a1;

@end
