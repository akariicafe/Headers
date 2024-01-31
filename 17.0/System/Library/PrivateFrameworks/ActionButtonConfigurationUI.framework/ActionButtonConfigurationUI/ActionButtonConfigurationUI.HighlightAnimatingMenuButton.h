@interface ActionButtonConfigurationUI.HighlightAnimatingMenuButton : ActionButtonConfigurationUI.MenuButton {
    void /* unknown type, empty encoding */ isAnimating;
    void /* unknown type, empty encoding */ hasPendingLayout;
    void /* unknown type, empty encoding */ previousState;
    void /* unknown type, empty encoding */ previousConfiguration;
    void /* unknown type, empty encoding */ previousBounds;
    void /* unknown type, empty encoding */ commitTracker;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setNeedsLayout;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
