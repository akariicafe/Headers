@interface SeymourUI.TVButton : UIControl {
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ activityIndicator;
    void /* unknown type, empty encoding */ floatingView;
    void /* unknown type, empty encoding */ backgroundVisualEffectView;
    void /* unknown type, empty encoding */ contentView;
    void /* unknown type, empty encoding */ isLoading;
    void /* unknown type, empty encoding */ menu;
    void /* unknown type, empty encoding */ onWillDisplayMenu;
    void /* unknown type, empty encoding */ underlyingControlState;
    void /* unknown type, empty encoding */ underlyingContentInset;
    void /* unknown type, empty encoding */ leftPaddingConstraint;
    void /* unknown type, empty encoding */ rightPaddingConstraint;
    void /* unknown type, empty encoding */ topPaddingConstraint;
    void /* unknown type, empty encoding */ bottomPaddingConstraint;
    void /* unknown type, empty encoding */ isPillShape;
    void /* unknown type, empty encoding */ ignoreContentInsets;
}

@property (nonatomic, readonly) BOOL canBecomeFocused;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)contextMenuInteraction:(id)a0 willDisplayMenuForConfiguration:(id)a1 animator:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (id)_preferredConfigurationForFocusAnimation:(long long)a0 inContext:(id)a1;
- (void).cxx_destruct;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)layoutSubviews;
- (void)pressesCancelled:(id)a0 withEvent:(id)a1;
- (id)initWithCoder:(id)a0;

@end
