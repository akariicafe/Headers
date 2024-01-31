@class UIButton;

@interface HKClinicalAuthorizationPrimaryChoiceFooterView : UIView

@property (readonly, nonatomic) UIButton *primaryButton;

- (void)traitCollectionDidChange:(id)a0;
- (void)_setUpSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_setUpConstraints;
- (double)_bottomMarginForTraitCollection:(id)a0;
- (void)_updateMetricsWithTraitCollection:(id)a0;

@end
