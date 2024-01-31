@class NSString, UIView, UIPanGestureRecognizer, NSLayoutConstraint;

@interface CPSBannerContainerView : UIView <UIGestureRecognizerDelegate> {
    UIPanGestureRecognizer *_dismissGesture;
    NSLayoutConstraint *_verticalPositionConstraintForDismissGesture;
    NSLayoutConstraint *_verticalPositionConstraintWhenVisible;
    NSLayoutConstraint *_verticalPositionConstraintWhenHidden;
    double _verticalPositionOffsetForDismissGesture;
    BOOL _bannerCrossFading;
    double _widthDuringLastBannerAnimation;
}

@property (nonatomic, getter=isBannerHidden) BOOL bannerHidden;
@property (nonatomic) BOOL bannerHasAccessibilityFocus;
@property (retain, nonatomic) UIView *bannerView;
@property (readonly, nonatomic, getter=isTrackingBannerDismissGesture) BOOL trackingBannerDismissGesture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willMoveToWindow:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)updateConstraints;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)_commonInit;
- (id)initWithBannerView:(id)a0;
- (void)_removeBannerAnimationsIfNeeded;
- (void)_accessibilityElementFocusDidChange:(id)a0;
- (void)_dismissGestureRecognized:(id)a0;
- (void)_installBannerViewIfNeeded;
- (void)_updateBannerContentSizeCategory;
- (void)setBannerHidden:(BOOL)a0 animated:(BOOL)a1 animationCompletion:(id /* block */)a2;

@end
