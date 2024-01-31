@interface HealthExperienceUI.FeatureOnboardingBulletListItemView : UIView {
    void /* unknown type, empty encoding */ imageView;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ descriptionLabel;
    void /* unknown type, empty encoding */ buttonConfiguration;
    void /* unknown type, empty encoding */ button;
    void /* unknown type, empty encoding */ imageAndTextStackedConstraints;
    void /* unknown type, empty encoding */ imageAndTextSideBySideConstraints;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConstraints;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)buttonWasTapped;

@end
