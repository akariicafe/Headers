@class NSString, NSHashTable, UIView, SBSystemActionElementPreviewingCoordinator;
@protocol SAElementHosting, SBSystemAperturePlatformElementHosting, SAElement, SBUISystemApertureContentProviding, SAUILayoutHosting;

@interface SBSystemApertureProvidedContentElement : NSObject <SAUIElementViewProviding, SBUISystemApertureContentViewContaining, SBSystemActionCoordinatedElementPreviewing, SAElement, SAUIContentTransitioning, SAUILayoutObservable, SAUILayoutSpecifying, SBSystemApertureSuppressible, SBSystemApertureLayoutCustomizing, SBSystemActionElementPreviewing> {
    id<SBUISystemApertureContentProviding> _contentProvider;
    SBSystemActionElementPreviewingCoordinator *_previewingCoordinator;
    NSHashTable *_observers;
    UIView *_primaryView;
    UIView *_secondaryView;
    UIView *_actionView;
    BOOL _previewing;
    BOOL _urgent;
    BOOL _expanding;
}

@property (nonatomic) long long minimumSupportedLayoutMode;
@property (nonatomic) long long maximumSupportedLayoutMode;
@property (nonatomic) long long preferredLayoutMode;
@property (readonly, nonatomic) UIView *leadingView;
@property (readonly, nonatomic) UIView *trailingView;
@property (readonly, nonatomic) UIView *minimalView;
@property (readonly, nonatomic) UIView *detachedMinimalView;
@property (readonly, weak, nonatomic) id<SAElement> element;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long layoutAxis;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } intrinsicCompactContainerSize;
@property (readonly, nonatomic, getter=isPreviewing) BOOL previewing;
@property (readonly, nonatomic, getter=isUrgent) BOOL urgent;
@property (readonly, nonatomic, getter=isExpanding) BOOL expanding;
@property (readonly, nonatomic) long long layoutMode;
@property (weak, nonatomic) id<SBSystemAperturePlatformElementHosting> platformElementHost;
@property (weak, nonatomic) id<SAElementHosting> elementHost;
@property (readonly, copy, nonatomic) NSString *clientIdentifier;
@property (readonly, copy, nonatomic) NSString *elementIdentifier;
@property (weak, nonatomic) id<SAUILayoutHosting> layoutHost;
@property (readonly, nonatomic, getter=isInteractiveDismissalEnabled) BOOL interactiveDismissalEnabled;
@property (readonly, nonatomic, getter=isMinimalPresentationPossible) BOOL minimalPresentationPossible;
@property (readonly, nonatomic, getter=isRequestingMenuPresentation) BOOL requestingMenuPresentation;
@property (nonatomic, getter=isSuppressed) BOOL suppressed;
@property (readonly, nonatomic) long long systemApertureCustomLayout;
@property (readonly, nonatomic) long long customLayoutRequestingSpecialFlowerBoundsResizingAnimation;
@property (readonly, nonatomic) long long systemApertureLayoutCustomizingOptions;
@property (nonatomic, getter=isProminent) BOOL prominent;

- (void)setExpanding:(BOOL)a0;
- (id)viewProvider;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)pop;
- (id)_actionView;
- (id)_primaryView;
- (id)_secondaryView;
- (void)preferredContentSizeDidInvalidateForContentViewProvider:(id)a0;
- (void)setPreviewing:(BOOL)a0;
- (double)_edgeSpacingWithConcentricPositioningIfNecessaryForView:(id)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inContainerView:(id)a2;
- (struct CGSize { double x0; double x1; })_sizeForEdgeView:(id)a0 thatFits:(struct CGSize { double x0; double x1; })a1 layoutMode:(long long)a2;
- (void)addElementLayoutSpecifierObserver:(id)a0;
- (void)contentProviderWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 inContainerView:(id)a1 transitionCoordinator:(id)a2;
- (id)elementDescription;
- (id)initWithIdentifier:(id)a0 contentProvider:(id)a1;
- (void)layoutHostContainerViewDidLayoutSubviews:(id)a0;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })preferredEdgeOutsetsForLayoutMode:(long long)a0 suggestedOutsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a1 maximumOutsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a2;
- (void)removeElementLayoutSpecifierObserver:(id)a0;
- (void)setLayoutMode:(long long)a0 reason:(long long)a1;
- (void)setUrgent:(BOOL)a0;
- (BOOL)shouldSuppressElementWhileOnCoversheet;
- (struct CGSize { double x0; double x1; })sizeThatFitsSize:(struct CGSize { double x0; double x1; })a0 forProvidedView:(id)a1 inLayoutMode:(long long)a2;

@end
