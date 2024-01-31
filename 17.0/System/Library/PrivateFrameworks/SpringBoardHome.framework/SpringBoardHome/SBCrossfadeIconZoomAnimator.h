@class UIView, SBHCrossfadeZoomSettings;

@interface SBCrossfadeIconZoomAnimator : SBScaleIconZoomAnimator {
    UIView *_crossfadeView;
}

@property (retain, nonatomic) SBHCrossfadeZoomSettings *settings;
@property (nonatomic) BOOL performsTrueCrossfade;
@property (nonatomic) BOOL masksCorners;

- (unsigned long long)_numberOfSignificantAnimations;
- (void)_prepareAnimation;
- (void)_delayedForRotation;
- (void)_performAnimationToFraction:(double)a0 withCentralAnimationSettings:(id)a1 delay:(double)a2 alreadyAnimating:(BOOL)a3 sharedCompletion:(id /* block */)a4;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_zoomedFrame;
- (void)_setAnimationFraction:(double)a0;
- (double)maxHomeScreenZoomScale;
- (void)_cleanupAnimation;
- (void)_cleanupZoom;
- (struct CGPoint { double x0; double x1; })_zoomedIconCenter;
- (double)_appSnapshotCornerRadiusForFraction:(double)a0;
- (void)_assertCrossfadeViewSizeIfNecessary;
- (BOOL)fadesHomeScreen;
- (id)initWithFolderController:(id)a0 crossfadeView:(id)a1 icon:(id)a2;

@end
