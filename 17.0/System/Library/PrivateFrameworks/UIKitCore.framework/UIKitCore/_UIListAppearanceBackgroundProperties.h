@class UIColor, UIVisualEffect;

@interface _UIListAppearanceBackgroundProperties : NSObject

@property (nonatomic) BOOL useTintColorAsBackgroundColor;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIVisualEffect *backgroundEffect;
@property (nonatomic) BOOL appliesBackgroundColorWithEffect;

- (void).cxx_destruct;
- (struct _UITableConstantsBackgroundProperties { BOOL x0; id x1; id x2; BOOL x3; long long x4; long long x5; double x6; double x7; BOOL x8; id x9; long long x10; double x11; struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } x12; })_tableConstantsPropertiesWithCornerRadius:(double)a0;

@end
