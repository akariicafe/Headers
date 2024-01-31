@class SBHCenterAppZoomSettings, UIView, NSMutableArray, SBReversibleLayerPropertyAnimator;

@interface SBCenterAppIconZoomAnimator : SBCenterIconZoomAnimator {
    UIView *_appView;
    UIView *_appZoomView;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _destinationFrame;
    unsigned char _testCompletionCount;
}

@property (retain, nonatomic) SBReversibleLayerPropertyAnimator *appZoomAnimator;
@property (retain, nonatomic) NSMutableArray *animationCompletions;
@property (retain, nonatomic) SBHCenterAppZoomSettings *settings;
@property double distantScale;

- (double)_iconZoomDelay;
- (unsigned long long)_numberOfSignificantAnimations;
- (struct CGPoint { double x0; double x1; })cameraPosition;
- (void)_prepareAnimation;
- (void)_delayedForRotation;
- (double)_appZoomDelay;
- (void)_zoomAppForZoomFraction:(double)a0;
- (void)_performAnimationToFraction:(double)a0 withCentralAnimationSettings:(id)a1 delay:(double)a2 alreadyAnimating:(BOOL)a3 sharedCompletion:(id /* block */)a4;
- (double)_appZPositionForZoomFraction:(double)a0;
- (void)_fadeAppForZoomFraction:(double)a0;
- (void).cxx_destruct;
- (void)_setAnimationFraction:(double)a0;
- (id)initWithFolderController:(id)a0 appView:(id)a1;
- (void)_cleanupAnimation;
- (void)_translateAppForZoomFraction:(double)a0;

@end
