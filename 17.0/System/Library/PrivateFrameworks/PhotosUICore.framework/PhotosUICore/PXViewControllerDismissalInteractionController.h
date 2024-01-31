@interface PXViewControllerDismissalInteractionController : NSObject {
    void /* unknown type, empty encoding */ viewController;
    void /* unknown type, empty encoding */ transitioningViewController;
    void /* unknown type, empty encoding */ viewControllerTransition;
    void /* unknown type, empty encoding */ grabber;
    void /* unknown type, empty encoding */ swipeDownGestureRecognizer;
    void /* unknown type, empty encoding */ grabberSwipeDownGestureRecognizer;
    void /* unknown type, empty encoding */ grabberTapGestureRecognizer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_proxy;
    void /* unknown type, empty encoding */ $__lazy_storage_$_logger;
    void /* unknown type, empty encoding */ isConfigured;
    void /* unknown type, empty encoding */ wantsInteractiveDismissal;
    void /* unknown type, empty encoding */ currentSwipeDownDismissalController;
    void /* unknown type, empty encoding */ currentBasicSwipeDownTransition;
}

@property (nonatomic) void /* unknown type, empty encoding */ viewControllerCanBeDismissed;

- (void)viewControllerViewWillLayoutSubviews;
- (id)init;
- (void)dealloc;
- (id)initWithViewController:(id)a0;
- (void).cxx_destruct;
- (void)handleSwipeDown:(id)a0;
- (void)handleTapOnGrabAffordance:(id)a0;

@end
