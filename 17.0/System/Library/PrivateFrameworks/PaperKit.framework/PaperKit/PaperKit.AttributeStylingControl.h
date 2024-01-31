@interface PaperKit.AttributeStylingControl : UIControl <UIPointerInteractionDelegate> {
    void /* unknown type, empty encoding */ contentInsets;
    void /* unknown type, empty encoding */ useCompactStyle;
    void /* unknown type, empty encoding */ contentStackView;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ imageView;
    void /* unknown type, empty encoding */ titleLabelFont;
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ font;
    void /* unknown type, empty encoding */ image;
    void /* unknown type, empty encoding */ wantsCapsuleCornerStyle;
}

@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL highlighted;
@property (nonatomic) BOOL enabled;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

- (void)pointerInteraction:(id)a0 willExitRegion:(id)a1 animator:(id)a2;
- (void)pointerInteraction:(id)a0 willEnterRegion:(id)a1 animator:(id)a2;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (BOOL)isSelected;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isEnabled;
- (void).cxx_destruct;
- (BOOL)isHighlighted;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;

@end
