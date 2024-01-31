@class CAGradientLayer, NSString, CALayer, NSAttributedString, _MKPlaceActionButtonController;

@interface MKCatalystButton : UIButton <_MKPlaceActionControlledButton>

@property (retain, nonatomic) CALayer *extraShadowLayer;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) NSAttributedString *title;
@property (retain, nonatomic) NSAttributedString *subTitle;
@property (nonatomic) BOOL isPrimaryButton;
@property (weak, nonatomic) _MKPlaceActionButtonController *buttonController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)titleFont;
+ (id)catalystButton;
+ (struct CGColor { } *)extraShadowLayerBackgroundColorWithDarkMode:(BOOL)a0 isbuttonEnabled:(BOOL)a1;

- (void)_updateColors;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setHighlighted:(BOOL)a0;
- (void)didMoveToSuperview;
- (void)setEnabled:(BOOL)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)traitEnvironment:(id)a0 didChangeTraitCollection:(id)a1;
- (void)buttonSelected:(id)a0;
- (id)_attributedStringForSubTitle:(id)a0 controlState:(unsigned long long)a1;
- (id)_attributedStringForTitle:(id)a0 controlState:(unsigned long long)a1;
- (id)_attributedStringWithTitle:(id)a0 subtitle:(id)a1 controlState:(unsigned long long)a2;
- (void)applyBorder:(BOOL)a0;
- (void)placeActionButtonControllerTextDidChange:(id)a0;
- (void)setPrimaryTitle:(id)a0;
- (void)setPrimaryTitle:(id)a0 subtitle:(id)a1;

@end
