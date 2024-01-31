@class UIStackView, NSArray, NSString, UIAccessibilityHUDItem;

@interface STUIStatusBarMultilineStringView : UIView <STUIStatusBarDisplayable>

@property (retain, nonatomic) UIStackView *stackView;
@property (nonatomic) long long numberOfLines;
@property (readonly, nonatomic) NSArray *stringViews;
@property (readonly, nonatomic) BOOL wantsCrossfade;
@property (readonly, nonatomic) BOOL prefersBaselineAlignment;
@property (readonly, nonatomic) BOOL prefersCenterVerticalAlignment;
@property (readonly, nonatomic) long long overriddenVerticalAlignment;
@property (readonly, nonatomic) UIAccessibilityHUDItem *accessibilityHUDRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (void)applyStyleAttributes:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
