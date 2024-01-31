@class UIImageView, CAGradientLayer;

@interface SFPrivacyReportIconView : UIView {
    UIImageView *_mask;
}

@property (readonly, nonatomic) CAGradientLayer *gradientLayer;

+ (Class)layerClass;

- (void)_updateColors;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_updateSymbolConfiguration;

@end
