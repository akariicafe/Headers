@interface AssetViewer.CheckoutContainerView : UIView {
    void /* unknown type, empty encoding */ traitManager;
    void /* unknown type, empty encoding */ parentStackView;
    void /* unknown type, empty encoding */ subTitleLabel;
    void /* unknown type, empty encoding */ tertiaryTitleLabel;
    void /* unknown type, empty encoding */ ctaButton;
    void /* unknown type, empty encoding */ applePayButton;
    void /* unknown type, empty encoding */ rightParentStackViewConstraint;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ verticalTextStackView;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ titleLabel;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (void)contentSizeCategoryDidChangeWithNotification:(id)a0;

@end
