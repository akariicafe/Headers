@class UIColor, NSString, CAShapeLayer, UIView, UIPointerInteraction, PKSwatchColor;

@interface PKPaletteColorSwatch : UIView <UIPointerInteractionDelegate>

@property (retain, nonatomic) UIView *colorBackgroundView;
@property (retain, nonatomic) CAShapeLayer *selectionRingMaskLayer;
@property (retain, nonatomic) UIView *colorBulletView;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (nonatomic) BOOL showsSelectionHighlight;
@property (retain, nonatomic) PKSwatchColor *swatchColor;
@property (readonly, nonatomic) UIColor *presentationColor;
@property (nonatomic) long long colorUserInterfaceStyle;
@property (retain, nonatomic) UIPointerInteraction *pointerInteraction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateBackgroundView;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void).cxx_destruct;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (void)layoutSubviews;
- (void)_updateUI;
- (id)_colorBulletOutlineColor;
- (id)_uiColor;
- (long long)_uiColorUserInterfaceStyle;
- (void)_updateColorBulletView;
- (void)_updateSelectionHighlight;
- (id)newColorBackgroundView;
- (BOOL)wantsBackgroundViewColor;
- (BOOL)wantsColorBulletVisible;

@end
