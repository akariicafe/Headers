@interface UIApplicationRotationFollowingWindow : UIWindow

@property (nonatomic) long long priorityLevel;
@property (nonatomic) BOOL limitToWindowLevel;

+ (BOOL)_isSystemWindow;

- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 attached:(BOOL)a1;
- (id)initWithWindowScene:(id)a0;
- (id)init;
- (BOOL)_shouldAutorotateToInterfaceOrientation:(long long)a0;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 debugName:(id)a1 windowScene:(id)a2;
- (BOOL)_shouldControlAutorotation;
- (BOOL)isInterfaceAutorotationDisabled;
- (id)__autorotationSanityCheckObjectFromSource:(id)a0 selector:(SEL)a1;
- (void)_commonApplicationRotationFollowingWindowInit;
- (void)_handleStatusBarOrientationChange:(id)a0;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 debugName:(id)a1 attached:(BOOL)a2;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 debugName:(id)a1 displayConfiguration:(id)a2;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 debugName:(id)a1 scene:(id)a2 attached:(BOOL)a3;
- (id)_topMostWindow;
- (void)applicationWindow:(id)a0 didRotateWithOrientation:(long long)a1 duration:(double)a2;

@end
