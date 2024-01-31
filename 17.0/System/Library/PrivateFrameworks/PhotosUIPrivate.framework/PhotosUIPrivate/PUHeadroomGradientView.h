@class PUHeadroomVariableBlurView, CAGradientLayer, UIColor, NSString;

@interface PUHeadroomGradientView : UIView <PXSettingsKeyPathObserver>

@property (readonly, nonatomic) CAGradientLayer *bottomGradientLayer;
@property (readonly, nonatomic) CAGradientLayer *topGradientLayer;
@property (readonly, nonatomic) PUHeadroomVariableBlurView *blurView;
@property (nonatomic) double visibilityAmount;
@property (nonatomic) BOOL usesHighKeyStyle;
@property (retain, nonatomic) UIColor *primaryGradientColor;
@property (nonatomic) BOOL isInactive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)settings:(id)a0 changedValueForKeyPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_updateBlurEffect;
- (void)_updateGradientProperties;

@end
