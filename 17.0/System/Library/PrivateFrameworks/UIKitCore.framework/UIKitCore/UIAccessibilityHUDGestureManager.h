@class _UIAccessibilityHUDLongPressGestureRecognizer, NSString, _UIAccessibilityHUDGateGestureRecognizer, NSMutableArray, UIView, UIGestureRecognizer, UIViewController;
@protocol UIAccessibilityHUDGestureDelegate;

@interface UIAccessibilityHUDGestureManager : NSObject <UIGestureRecognizerDelegatePrivate> {
    id<UIAccessibilityHUDGestureDelegate> _delegate;
    UIViewController *_viewControllerDisplayingHUD;
    _UIAccessibilityHUDLongPressGestureRecognizer *_recognizer;
    _UIAccessibilityHUDGateGestureRecognizer *_gateRecognizer;
    NSMutableArray *_subscribedConcurrentGestureRecognizers;
    BOOL _delegateDirectlyShowsHUD;
    BOOL _isInvalidated;
}

@property (readonly, nonatomic) UIGestureRecognizer *_recognizer;
@property (readonly, weak, nonatomic) UIView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_dismissAccessibilityHUD;
- (void)_didToggleLargeContentViewer:(id)a0;
- (void)dealloc;
- (id)initWithView:(id)a0 delegate:(id)a1;
- (void)_gestureRecognizerChanged:(id)a0;
- (BOOL)_gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)_openGate;
- (void)_invalidate;
- (void)_backOff;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)_concurrentGestureRecognizerFired:(id)a0;
- (void)_clearButtonItemGestureSubscriptions;
- (void).cxx_destruct;
- (id)_bestViewControllerForView;
- (void)_setRecognizersEnabled:(BOOL)a0;
- (id)_subscribedConcurrentGestureRecognizers;
- (void)_showAccessibilityHUDItem:(id)a0;

@end
