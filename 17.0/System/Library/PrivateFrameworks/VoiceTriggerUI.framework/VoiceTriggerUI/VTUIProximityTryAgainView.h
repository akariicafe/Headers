@class NSArray, VTUIStyle, VTPreferences, UILabel, VTUIProximityContainerView, UIButton;

@interface VTUIProximityTryAgainView : VTUIProximityView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) VTUIStyle *vtStyle;
@property (retain, nonatomic) VTPreferences *vtPrefs;
@property (retain, nonatomic) VTUIProximityContainerView *containerView;
@property (retain, nonatomic) NSArray *viewConstraints;
@property (readonly, nonatomic) UIButton *dismissButton;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setupViews;
- (void).cxx_destruct;
- (void)_setupConstraintsToSize:(struct CGSize { double x0; double x1; })a0;

@end
