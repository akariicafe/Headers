@class UIColor, NSString, UIView, FBScene;
@protocol SAActivityHosting, SAElementHosting, SAElement, SAUILayoutHosting;

@interface SBPrototypeAdvancedActivityElementViewProvider : NSObject <SBSystemApertureContextProviding, SAElement, SAActivityBehavior, SAUIElementViewProviding, SAUIContentTransitioning, SAUILayoutSpecifying> {
    BOOL _layoutCondensed;
}

@property (readonly, nonatomic, getter=isAffiliatedWithSessionMonitor) BOOL affiliatedWithSessionMonitor;
@property (readonly, nonatomic) UIColor *keyColor;
@property (readonly, nonatomic) FBScene *scene;
@property (readonly, nonatomic) BOOL preventsSwipeToHide;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SAElementHosting> elementHost;
@property (readonly, copy, nonatomic) NSString *clientIdentifier;
@property (readonly, copy, nonatomic) NSString *elementIdentifier;
@property (weak, nonatomic) id<SAActivityHosting> activityHost;
@property (readonly, nonatomic) UIView *leadingView;
@property (readonly, nonatomic) UIView *trailingView;
@property (readonly, nonatomic) UIView *minimalView;
@property (readonly, nonatomic) UIView *detachedMinimalView;
@property (readonly, weak, nonatomic) id<SAElement> element;
@property (nonatomic) unsigned long long layoutAxis;
@property (readonly, nonatomic) long long layoutMode;
@property (readonly, nonatomic) long long minimumSupportedLayoutMode;
@property (readonly, nonatomic) long long maximumSupportedLayoutMode;
@property (readonly, nonatomic) long long preferredLayoutMode;
@property (weak, nonatomic) id<SAUILayoutHosting> layoutHost;
@property (readonly, nonatomic, getter=isInteractiveDismissalEnabled) BOOL interactiveDismissalEnabled;
@property (readonly, nonatomic, getter=isMinimalPresentationPossible) BOOL minimalPresentationPossible;
@property (readonly, nonatomic, getter=isRequestingMenuPresentation) BOOL requestingMenuPresentation;

- (void)_updateLabel;
- (id)init;
- (id)viewProvider;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (id)_currentTrailingTitle;
- (void)_decrementLayoutMode;
- (void)_incrementLayoutMode;
- (id)_newTrailingLabel;
- (void)_requestSignificantTransition;
- (void)_updateLabel:(id)a0 forLayoutMode:(long long)a1;
- (void)contentProviderWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 inContainerView:(id)a1 transitionCoordinator:(id)a2;
- (BOOL)handleElementViewEvent:(long long)a0;
- (BOOL)hasActivityBehavior;
- (void)layoutHostContainerViewWillLayoutSubviews:(id)a0;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })preferredEdgeOutsetsForLayoutMode:(long long)a0 suggestedOutsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a1 maximumOutsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a2;
- (void)setLayoutMode:(long long)a0 reason:(long long)a1;
- (struct CGSize { double x0; double x1; })sizeThatFitsSize:(struct CGSize { double x0; double x1; })a0 forProvidedView:(id)a1 inLayoutMode:(long long)a2;

@end
