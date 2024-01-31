@class NSString, STUIStatusBarImageView, UIAccessibilityHUDItem;

@interface STUIStatusBarLockView : UIView <CAAnimationDelegate, STUIStatusBarDisplayable>

@property (retain, nonatomic) STUIStatusBarImageView *bodyView;
@property (retain, nonatomic) STUIStatusBarImageView *shackleView;
@property (copy, nonatomic) id /* block */ completionBlock;
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
