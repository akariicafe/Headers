@class UIColor, _UILegibilitySettings;

@interface _SBFVibrantSettings : NSObject

@property (retain, nonatomic) UIColor *highlightLimitingColor;
@property (retain, nonatomic) UIColor *shimmerColor;
@property (retain, nonatomic) UIColor *chevronShimmerColor;
@property (retain, nonatomic) UIColor *highlightColor;
@property (retain, nonatomic) UIColor *tintColor;
@property (readonly, nonatomic) UIColor *referenceColor;
@property (readonly, nonatomic) double referenceContrast;
@property (readonly, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly, nonatomic) long long style;

+ (id)vibrantSettingsWithReferenceColor:(id)a0 referenceContrast:(double)a1 legibilitySettings:(id)a2;

- (unsigned long long)hash;
- (long long)_style;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)highlightLimitingViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_computeSourceColorDodgeColorForDestinationColor:(id)a0 producingLuminanceChange:(double)a1;
- (id)initWithReferenceColor:(id)a0 referenceContrast:(double)a1 legibilitySettings:(id)a2;
- (id)tintViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
