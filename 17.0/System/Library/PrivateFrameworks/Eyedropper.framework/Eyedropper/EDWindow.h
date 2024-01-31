@protocol EDWindowTrackingDelegate;

@interface EDWindow : UIWindow

@property (weak, nonatomic) id<EDWindowTrackingDelegate> trackingDelegate;

+ (BOOL)_isSecure;

- (BOOL)_canBecomeKeyWindow;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (id)initWithWindowScene:(id)a0;
- (BOOL)_shouldAutorotateToInterfaceOrientation:(long long)a0;
- (void)handleStatusBarChangeFromHeight:(double)a0 toHeight:(double)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (BOOL)_shouldControlAutorotation;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (BOOL)_preventsRootPresentationController;

@end
