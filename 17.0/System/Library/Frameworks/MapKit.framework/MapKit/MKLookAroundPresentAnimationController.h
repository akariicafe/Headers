@class NSString, UIView;

@interface MKLookAroundPresentAnimationController : NSObject <UIViewControllerAnimatedTransitioning> {
    UIView *_sourceView;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _initialFrame;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (void).cxx_destruct;
- (BOOL)_shouldUseSpringWithDampingAnimationStyle;
- (id)initWithSourceView:(id)a0 initialFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
