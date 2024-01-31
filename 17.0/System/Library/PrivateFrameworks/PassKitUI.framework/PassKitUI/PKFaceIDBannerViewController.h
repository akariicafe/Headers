@class UIView, NSString, NSURL, LAUIPearlGlyphView, NSSet, PKBannerHandleState, BSAction, PKFaceIDBannerHandleState, NSObject, PKBlurView, UIColor;
@protocol PKBannerViewControllerPresentable, OS_dispatch_source, SBUISystemApertureAccessoryView;

@interface PKFaceIDBannerViewController : UIViewController <PKBannerHandleViewController> {
    int _state;
    PKFaceIDBannerHandleState *_bannerState;
    BOOL _revoked;
    unsigned long long _revokeBackgroundTask;
    NSObject<OS_dispatch_source> *_revokeTimer;
    BOOL _transitioning;
    BOOL _appearedOnce;
    BOOL _updatingPreferredContentSize;
    BOOL _elementNeedsUpdate;
    char _deferredGlyphState;
    long long _glyphState;
    NSObject<OS_dispatch_source> *_glyphLegibilityTimer;
    unsigned int _transitionAnimationCounter;
    unsigned int _glyphAnimationCounter;
    UIColor *_keyColor;
    UIColor *_successKeyColor;
    UIView *_containerView;
    PKBlurView *_glyphContainerView;
    LAUIPearlGlyphView *_glyphView;
}

@property (nonatomic, getter=isBannerDetached) BOOL bannerDetached;
@property (retain, nonatomic) PKBannerHandleState *bannerState;
@property (weak, nonatomic) id<PKBannerViewControllerPresentable> presentable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long activeLayoutMode;
@property (readonly, nonatomic) long long contentRole;
@property (readonly, nonatomic) long long preferredLayoutMode;
@property (readonly, nonatomic) long long maximumLayoutMode;
@property (readonly, nonatomic) double preferredHeightForBottomSafeArea;
@property (readonly, copy, nonatomic) NSString *elementIdentifier;
@property (readonly, copy, nonatomic) NSString *associatedAppBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *associatedScenePersistenceIdentifier;
@property (readonly, copy, nonatomic) NSURL *launchURL;
@property (readonly, nonatomic) BSAction *launchAction;
@property (readonly, nonatomic) BOOL preventsInteractiveDismissal;
@property (readonly, nonatomic) BOOL preventsAutomaticDismissal;
@property (readonly, nonatomic) long long minimumLayoutMode;
@property (readonly, nonatomic) UIView<SBUISystemApertureAccessoryView> *leadingView;
@property (readonly, nonatomic) UIView<SBUISystemApertureAccessoryView> *trailingView;
@property (readonly, nonatomic) UIView<SBUISystemApertureAccessoryView> *minimalView;
@property (readonly, nonatomic) unsigned long long statusBarStyleOverridesToSuppress;
@property (readonly, copy, nonatomic) NSSet *backgroundActivitiesToSuppress;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } preferredCustomAspectRatio;
@property (readonly, nonatomic) long long preferredCustomLayout;
@property (readonly, nonatomic) unsigned long long presentationBehaviors;
@property (readonly, copy, nonatomic) UIColor *keyColor;
@property (nonatomic) unsigned long long minimalViewLayoutAxis;
@property (readonly, nonatomic) UIView<SBUISystemApertureAccessoryView> *detachedMinimalView;
@property (nonatomic) BOOL canRequestAlertingAssertion;
@property (readonly, nonatomic) BOOL attachedMinimalViewRequiresZeroPadding;

- (id)init;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)revoked;
- (id)initWithCoder:(id)a0;
- (void)setBannerState:(id)a0;
- (id)bannerState;
- (void)viewWillLayoutSubviewsWithTransitionCoordinator:(id)a0;

@end
