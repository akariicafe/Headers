@class UIAccessibilityHUDItem, UIVectorLabel, NSString, NSLayoutConstraint, _UIStatusBarStringView;

@interface _UIStatusBarCellularNetworkTypeView : UIView <_UIStatusBarDisplayable> {
    BOOL _animatingUpdate;
}

@property (nonatomic) long long type;
@property (retain, nonatomic) _UIStatusBarStringView *stringView;
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

@end
