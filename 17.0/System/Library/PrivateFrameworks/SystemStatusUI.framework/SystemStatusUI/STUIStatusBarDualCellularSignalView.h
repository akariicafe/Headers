@class STUIStatusBarCellularSignalView, NSString, NSLayoutConstraint, UIAccessibilityHUDItem;

@interface STUIStatusBarDualCellularSignalView : UIView <STUIStatusBarDisplayable>

@property (nonatomic) BOOL rounded;
@property (nonatomic) long long iconSize;
@property (retain, nonatomic) NSLayoutConstraint *topConstraint;
@property (retain, nonatomic) NSLayoutConstraint *verticalInterspaceConstraint;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } alignmentRectInsets;
@property (readonly) STUIStatusBarCellularSignalView *topSignalView;
@property (readonly) STUIStatusBarCellularSignalView *bottomSignalView;
@property (readonly, nonatomic) BOOL wantsCrossfade;
@property (readonly, nonatomic) BOOL prefersBaselineAlignment;
@property (readonly, nonatomic) BOOL prefersCenterVerticalAlignment;
@property (readonly, nonatomic) long long overriddenVerticalAlignment;
@property (readonly, nonatomic) UIAccessibilityHUDItem *accessibilityHUDRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)_interspaceForIconSize:(long long)a0;

@end
