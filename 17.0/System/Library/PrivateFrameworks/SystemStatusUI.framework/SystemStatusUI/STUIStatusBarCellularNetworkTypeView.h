@class UIVectorLabel, NSString, NSLayoutConstraint, STUIStatusBarStringView, UIAccessibilityHUDItem;

@interface STUIStatusBarCellularNetworkTypeView : UIView <STUIStatusBarDisplayable> {
    BOOL _animatingUpdate;
}

@property (nonatomic) long long type;
@property (retain, nonatomic) STUIStatusBarStringView *stringView;
@property (retain, nonatomic) UIVectorLabel *prefixLabel;
@property (retain, nonatomic) UIVectorLabel *accessoryLabel;
@property (retain, nonatomic) NSLayoutConstraint *widthConstraint;
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
- (void)applyStyleAttributes:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_animateUpdateToText:(id)a0 prefixLength:(long long)a1 styleAttributes:(id)a2 attributedText:(id)a3 type:(long long)a4;
- (void)setAttributedText:(id)a0 prefixLength:(long long)a1 forType:(long long)a2 animated:(BOOL)a3;
- (void)setFixedWidth:(double)a0;
- (void)setText:(id)a0 prefixLength:(long long)a1 withStyleAttributes:(id)a2 forType:(long long)a3 animated:(BOOL)a4;
- (BOOL)_isAnimatingUpdate;

@end
