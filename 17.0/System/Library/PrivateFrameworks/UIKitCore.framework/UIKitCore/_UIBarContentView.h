@class UIColor, NSString, _UIBarButtonItemAppearanceStorage, UIImage, UIImageSymbolConfiguration;

@interface _UIBarContentView : UIView <_UIButtonBarAppearanceDelegate>

@property (readonly, nonatomic) _UIBarButtonItemAppearanceStorage *appearanceStorage;
@property (readonly, nonatomic) long long barType;
@property (readonly, nonatomic) BOOL compactMetrics;
@property (nonatomic) BOOL centerTextButtons;
@property (retain, nonatomic) UIImage *backIndicatorImage;
@property (retain, nonatomic) UIImage *backIndicatorMaskImage;
@property (retain, nonatomic, setter=_setAppearanceGuideClass:) Class _appearanceGuideClass;
@property (readonly, nonatomic) UIColor *tintColor;
@property (readonly, nonatomic) double defaultEdgeSpacing;
@property (readonly, nonatomic) double defaultTextPadding;
@property (readonly, nonatomic) double backButtonMargin;
@property (readonly, nonatomic) double backButtonMaximumWidth;
@property (readonly, nonatomic) UIImageSymbolConfiguration *imageSymbolConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;

- (void)_appearanceChanged;
- (unsigned long long)_edgesPropagatingSafeAreaInsetsToSubviews;
- (void)_setTitleTextAttributes:(id)a0 forState:(unsigned long long)a1;
- (void)_UIAppearance_setBackgroundImage:(id)a0 forState:(unsigned long long)a1 barMetrics:(long long)a2;
- (void)_setBackButtonBackgroundImage:(id)a0 forState:(unsigned long long)a1 barMetrics:(long long)a2;
- (id)_titleTextAttributesForState:(unsigned long long)a0;
- (double)absorptionForItem:(id)a0;
- (void)_UIAppearance_setBackButtonBackgroundVerticalPositionAdjustment:(double)a0 forBarMetrics:(long long)a1;
- (unsigned long long)edgesPaddingBarButtonItem:(id)a0;
- (void)_setTitlePositionAdjustment:(struct UIOffset { double x0; double x1; })a0 forBarMetrics:(long long)a1;
- (void)_setBackButtonBackgroundVerticalPositionAdjustment:(double)a0 forBarMetrics:(long long)a1;
- (void)_setBackgroundImage:(id)a0 forState:(unsigned long long)a1 barMetrics:(long long)a2;
- (void)_UIAppearance_setBackgroundImage:(id)a0 forState:(unsigned long long)a1 style:(long long)a2 barMetrics:(long long)a3;
- (void)_setBackgroundVerticalPositionAdjustment:(double)a0 forBarMetrics:(long long)a1;
- (void)_UIAppearance_setBackButtonBackgroundImage:(id)a0 forState:(unsigned long long)a1 barMetrics:(long long)a2;
- (void)_setBackButtonTitlePositionAdjustment:(struct UIOffset { double x0; double x1; })a0 forBarMetrics:(long long)a1;
- (void)_setBackgroundImage:(id)a0 forState:(unsigned long long)a1 style:(long long)a2 barMetrics:(long long)a3;
- (void)_UIAppearance_setTitleTextAttributes:(id)a0 forState:(unsigned long long)a1;
- (void)_UIAppearance_setTintColor:(id)a0;
- (void)_UIAppearance_setTitlePositionAdjustment:(struct UIOffset { double x0; double x1; })a0 forBarMetrics:(long long)a1;
- (void)_UIAppearance_setBackButtonTitlePositionAdjustment:(struct UIOffset { double x0; double x1; })a0 forBarMetrics:(long long)a1;
- (void)_UIAppearance_setBackgroundVerticalPositionAdjustment:(double)a0 forBarMetrics:(long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setTintColor:(id)a0;
- (void).cxx_destruct;

@end
