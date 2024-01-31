@class NSString, UIPopoverPresentationController;

@interface _UIModernPopoverAnimationController : NSObject <UIViewControllerAnimatedTransitioning>

@property (nonatomic, getter=isPresenting) BOOL presenting;
@property (weak, nonatomic) UIPopoverPresentationController *popoverPresentationController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })_anchorPointForArrowDirection:(unsigned long long)a0 arrowOfset:(double)a1 popoverSize:(struct CGSize { double x0; double x1; })a2;
- (struct CGPoint { double x0; double x1; })_arrowPointForPopoverSize:(struct CGSize { double x0; double x1; })a0 arrowOffset:(double)a1 arrowDirection:(unsigned long long)a2;

@end
