@class NSString, CAShapeLayer, UIView, _UIStatusBarImageView, UIAccessibilityHUDItem;

@interface _UIStatusBarVPNDisconnectView : UIView <CAAnimationDelegate, _UIStatusBarDisplayable>

@property (retain, nonatomic) _UIStatusBarImageView *iconView;
@property (retain, nonatomic) CAShapeLayer *iconSlashMaskShapeLayer;
@property (retain, nonatomic) UIView *slashView;
@property (retain, nonatomic) CAShapeLayer *slashShapeLayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL wantsCrossfade;
@property (readonly, nonatomic) BOOL prefersBaselineAlignment;
@property (readonly, nonatomic) BOOL prefersCenterVerticalAlignment;
@property (readonly, nonatomic) long long overriddenVerticalAlignment;
@property (readonly, nonatomic) UIAccessibilityHUDItem *accessibilityHUDRepresentation;

@end
