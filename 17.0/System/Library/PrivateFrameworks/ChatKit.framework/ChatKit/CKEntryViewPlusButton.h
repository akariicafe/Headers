@class UIColor, UIButton;

@interface CKEntryViewPlusButton : UIView <UIPointerInteractionDelegate> {
    void /* unknown type, empty encoding */ blurContainerView;
    void /* unknown type, empty encoding */ clippingView;
    void /* unknown type, empty encoding */ backgroundView;
    void /* unknown type, empty encoding */ backgroundViewContentView;
    void /* unknown type, empty encoding */ buttonView;
    void /* unknown type, empty encoding */ iconImageView;
    void /* unknown type, empty encoding */ plusButtonDelegate;
}

@property (nonatomic) void /* unknown type, empty encoding */ enabled;
@property (nonatomic) BOOL automaticallyAdjustsBackgroundCornerRadius;
@property (nonatomic) double backgroundCornerRadius;
@property (nonatomic, retain) UIColor *plusButtonBackgroundColor;
@property (nonatomic) double backgroundBlurRasterizationPercentage;
@property (nonatomic) void /* unknown type, empty encoding */ backgroundBlurRadiusLightMode;
@property (nonatomic) void /* unknown type, empty encoding */ backgroundBlurRadiusDarkMode;
@property (nonatomic, retain) void /* unknown type, empty encoding */ backgroundCompositingFilterForLightMode;
@property (nonatomic, retain) void /* unknown type, empty encoding */ backgroundCompositingFilterForDarkMode;
@property (nonatomic) double plusSymbolOpacity;
@property (nonatomic, readonly) UIButton *button;

- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;

@end
