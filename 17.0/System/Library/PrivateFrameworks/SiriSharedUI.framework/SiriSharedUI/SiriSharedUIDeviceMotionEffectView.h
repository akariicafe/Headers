@class UIImageView, CMMotionManager, CADisplayLink;

@interface SiriSharedUIDeviceMotionEffectView : UIView {
    UIImageView *_effectImageView;
    BOOL _shouldUpdateOffsetRadians;
    BOOL _forcefullyUpdateImageViewFrame;
    double _initialOffsetRadians;
    long long _cachedInterfaceOrientation;
    CMMotionManager *_motionManager;
    CADisplayLink *_displayLink;
    double _rotationIncrementalRateRadians;
}

- (void)_displayLinkFired:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)_updateEffectView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)invalidate;
- (long long)_currentInterfaceOrientation;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_motionManagerDidReceiveMotion:(id)a0;
- (void)_cleanUpIfNeeded;
- (void)_configureDeviceMotionIfNeeded;
- (id)_currentWindowScene;
- (BOOL)_supportsContentViewTransforms;
- (BOOL)_supportsDeviceMotion;
- (BOOL)isViewHighContrast;
- (void)updateMaskingForView:(id)a0;
- (long long)viewAppearanceStyle;
- (void)viewWillBeUpdated;

@end
