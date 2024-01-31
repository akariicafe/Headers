@class SBSystemApertureSettings, _UIPortalView, CADisplay, UIViewController;

@interface SBSystemApertureCaptureVisibilityShimViewController : SBFTouchPassThroughViewController {
    SBSystemApertureSettings *_settings;
    UIViewController *_contentViewController;
    _UIPortalView *_displayPortalView;
    _UIPortalView *_clonedDisplayPortalView;
    CADisplay *_observedDisplay;
}

@property (nonatomic, getter=isVisibleOnClonedDisplay) BOOL visibleOnClonedDisplay;
@property (nonatomic, getter=isVisibleInSnapshots) BOOL visibleInSnapshots;
@property (nonatomic, getter=doContentsDifferOnClonedDisplay) BOOL contentsDifferOnClonedDisplay;

- (void)dealloc;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)_canShowWhileLocked;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)initWithContentViewController:(id)a0;
- (BOOL)_isOriginalContentCloned;
- (void)_updateClonedVisibility;
- (void)_updatePortalVisibility;
- (void)_updateSnapshotVisibility;
- (id)newDefaultVisibilityAnimator;

@end
