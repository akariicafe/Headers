@interface PhotosUICore.BasicInteractiveSwipeDownTransition : NSObject <UIViewControllerAnimatedTransitioning> {
    void /* unknown type, empty encoding */ grabAffordanceView;
    void /* unknown type, empty encoding */ completionHandler;
    void /* unknown type, empty encoding */ interactiveTransition;
    void /* unknown type, empty encoding */ verticalOffset;
}

- (id)init;
- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (void).cxx_destruct;

@end
