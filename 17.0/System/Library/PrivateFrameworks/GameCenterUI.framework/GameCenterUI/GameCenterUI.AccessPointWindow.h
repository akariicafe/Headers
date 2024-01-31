@interface GameCenterUI.AccessPointWindow : UIWindow {
    void /* unknown type, empty encoding */ accessPoint;
    void /* unknown type, empty encoding */ parent;
    void /* unknown type, empty encoding */ observations;
    void /* unknown type, empty encoding */ sinks;
    void /* unknown type, empty encoding */ rootView;
    void /* unknown type, empty encoding */ layoutView;
    void /* unknown type, empty encoding */ hostingView;
    void /* unknown type, empty encoding */ leadingConstraint;
    void /* unknown type, empty encoding */ trailingConstraint;
    void /* unknown type, empty encoding */ topConstraint;
    void /* unknown type, empty encoding */ bottomConstraint;
    void /* unknown type, empty encoding */ verticalOffset;
    void /* unknown type, empty encoding */ horizontalOffset;
}

- (id)initWithWindowScene:(id)a0;
- (void)dealloc;
- (BOOL)_canAffectStatusBarAppearance;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
