@interface PaperKit.TextToolListItemView : UIControl <UIPointerInteractionDelegate> {
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ imageView;
    void /* unknown type, empty encoding */ stackView;
    void /* unknown type, empty encoding */ stackViewMargin;
    void /* unknown type, empty encoding */ stackViewSpacing;
}

@property (nonatomic) BOOL highlighted;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void).cxx_destruct;
- (BOOL)isHighlighted;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (id)initWithCoder:(id)a0;

@end
