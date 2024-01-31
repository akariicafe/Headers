@interface PXViewControllerSwipeDownDismissalController : NSObject {
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ viewControllerTransitionObservation;
    void /* unknown type, empty encoding */ viewControllerTransition;
    void /* unknown type, empty encoding */ referenceView;
    void /* unknown type, empty encoding */ initialGestureLocation;
    void /* unknown type, empty encoding */ currentGestureLocation;
    void /* unknown type, empty encoding */ currentGestureVelocity;
    void /* unknown type, empty encoding */ initialItemPlacement;
    void /* unknown type, empty encoding */ swipeDownTracker;
    void /* unknown type, empty encoding */ releaseAnimationProgressAnimator;
    void /* unknown type, empty encoding */ releaseAnimationDismissalProgressAnimator;
    void /* unknown type, empty encoding */ centerOffsetAnimatorObservation;
    void /* unknown type, empty encoding */ centerOffsetAnimator;
    void /* unknown type, empty encoding */ targetCenter;
    void /* unknown type, empty encoding */ sourceSize;
    void /* unknown type, empty encoding */ targetSize;
    void /* unknown type, empty encoding */ targetCancelled;
    void /* unknown type, empty encoding */ updater;
}

- (void)setNeedsUpdate;
- (id)init;
- (void).cxx_destruct;
- (void)updateCurrentPlacement;
- (void)updateInitialPlacement;
- (void)updateSwipeDownTracker;

@end
