@class _UIEditMenuPresentation, _UIEditMenuDismissalGestureRecognizer, _UITouchFallbackView, NSString;

@interface _UIEditMenuContainerView : UIView <_UIEditMenuDismissalGestureRecognizerDelegate, _UITouchFallbackViewDelegate> {
    BOOL _lastHitTestPassedThrough;
    BOOL _didDismissFromGesture;
}

@property (readonly, nonatomic) _UIEditMenuDismissalGestureRecognizer *dismissalGestureRecognizer;
@property (readonly, nonatomic) _UITouchFallbackView *touchFallbackView;
@property (readonly, weak, nonatomic) _UIEditMenuPresentation *presentation;
@property (nonatomic) BOOL ignoresPassthroughInPresentationSource;
@property (nonatomic) BOOL dismissesOnViewportResize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willMoveToWindow:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)didMoveToWindow;
- (void)_dismissMenuPresentationForSizeChange;
- (void)_installDismissalGesture;
- (BOOL)_touchesInsideShouldHideCalloutBar;
- (void)didRecognizeDismissalGestureRecognizer:(id)a0;
- (BOOL)dismissalGestureRecognizer:(id)a0 shouldInteractAtLocation:(struct CGPoint { double x0; double x1; })a1 withEvent:(id)a2;
- (id)initWithPresentation:(id)a0 enablePassthrough:(BOOL)a1;
- (BOOL)touchFallbackView:(id)a0 shouldHitTestAtLocation:(struct CGPoint { double x0; double x1; })a1 withEvent:(id)a2;

@end
