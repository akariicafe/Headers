@class _SAUIElementViewControllerSnapshotAssertion, NSString, UIView, SAUIElementView;
@protocol SAUIElementViewProviding;

@interface SAUIElementViewController : SAUILayoutSpecifyingElementViewController <SAUIElementViewDelegate, SAUIElementSubcomponentPreferencesAccepting, SAUIElementLayoutAxisObserving> {
    SAUIElementView *_elementView;
    UIView *_snapshotView;
    _SAUIElementViewControllerSnapshotAssertion *_snapshotViewAssertion;
    long long _appliedLayoutModeForSquishTransition;
}

@property (readonly, nonatomic) id<SAUIElementViewProviding> elementViewProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double leadingViewBlurProgress;
@property (nonatomic) double leadingViewAlpha;
@property (nonatomic) double leadingViewSquishProgress;
@property (nonatomic) struct CGSize { double width; double height; } leadingViewScale;
@property (nonatomic) double trailingViewBlurProgress;
@property (nonatomic) double trailingViewAlpha;
@property (nonatomic) double trailingViewSquishProgress;
@property (nonatomic) struct CGSize { double width; double height; } trailingViewScale;
@property (nonatomic) double minimalViewBlurProgress;
@property (nonatomic) double minimalViewAlpha;
@property (nonatomic) double minimalViewSquishProgress;
@property (nonatomic) struct CGSize { double width; double height; } minimalViewScale;
@property (nonatomic) double customContentBlurProgress;
@property (nonatomic) double customContentAlpha;
@property (nonatomic) double snapshotViewBlurProgress;
@property (nonatomic) double snapshotViewAlpha;
@property (nonatomic) unsigned long long layoutAxis;

- (id)_containerView;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)snapshotView;
- (id)_contentView;
- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (BOOL)handleTap:(id)a0;
- (id)beginRequiringSnapshotForReason:(id)a0;
- (long long)maximumSupportedLayoutModeForTargetWithOverrider:(id)a0 isDefaultValue:(BOOL *)a1;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })preferredEdgeOutsetsForLayoutMode:(long long)a0 suggestedOutsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a1 maximumOutsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a2 forTargetWithOverrider:(id)a3 isDefaultValue:(BOOL *)a4;
- (id)_elementView;
- (id)_effectiveProvidedMinimalView;
- (void)_insertContentSnapshotView;
- (void)_setSquishProgress:(double)a0 additionalScale:(struct CGSize { double x0; double x1; })a1 forProvidedView:(id)a2 transformView:(id)a3 isLeading:(BOOL)a4 isMinimal:(BOOL)a5;
- (void)_synchronizeBlurProgress:(double)a0 alpha:(double)a1 squishProgress:(double)a2 isLeading:(BOOL)a3 isMinimal:(BOOL)a4 ofTransformView:(id)a5 providedView:(id)a6;
- (void)elementView:(id)a0 didConfigureLeadingTransformView:(id)a1;
- (void)elementView:(id)a0 didConfigureMinimalTransformView:(id)a1;
- (void)elementView:(id)a0 didConfigureTrailingTransformView:(id)a1;
- (void)elementView:(id)a0 didLayoutResizedLeadingTransformView:(id)a1;
- (void)elementView:(id)a0 didLayoutResizedMinimalTransformView:(id)a1;
- (void)elementView:(id)a0 didLayoutResizedTrailingTransformView:(id)a1;
- (BOOL)elementViewShouldCenterProvidedContent:(id)a0;
- (id)initWithElementViewProvider:(id)a0;
- (BOOL)isMinimalViewIsolatedForElementView:(id)a0;
- (long long)layoutModeForElementView:(id)a0;
- (struct CGSize { double x0; double x1; })maximumSizeOfLeadingViewForElementView:(id)a0;
- (struct CGSize { double x0; double x1; })maximumSizeOfMinimalViewForElementView:(id)a0;
- (struct CGSize { double x0; double x1; })maximumSizeOfTrailingViewForElementView:(id)a0;

@end
