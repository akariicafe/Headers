@interface VideosUI.UberNavigationBarTitleView : _UINavigationBarTitleView <VUIViewScrollPercentageUpdateProtocol> {
    void /* unknown type, empty encoding */ customBackButton;
    void /* unknown type, empty encoding */ titleView;
    void /* unknown type, empty encoding */ titleOpacity;
    void /* unknown type, empty encoding */ hostViewController;
    void /* unknown type, empty encoding */ isBackButtonHidden;
    void /* unknown type, empty encoding */ touchProxyView;
    void /* unknown type, empty encoding */ showUberState;
    void /* unknown type, empty encoding */ isUber;
    void /* unknown type, empty encoding */ futureDisplayMode;
    void /* unknown type, empty encoding */ dismissalDisplayMode;
}

- (void)setScrolledNonUberPercentage:(double)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)contentDidChange;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;

@end
