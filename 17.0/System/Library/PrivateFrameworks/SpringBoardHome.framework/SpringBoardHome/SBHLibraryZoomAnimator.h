@class _UIPortalView, CADisplayLink, SBHLibraryWaveZoomSettings, UIView, NSMutableArray;
@protocol BSInvalidatable, SBHModalLibraryPresentationContext;

@interface SBHLibraryZoomAnimator : NSObject <SBHViewControllerTransitionAnimating> {
    id<SBHModalLibraryPresentationContext> _context;
    struct SBIconImageInfo { struct CGSize { double width; double height; } size; double scale; double continuousCornerRadius; } _libraryIconImageInfo;
    NSMutableArray *_libraryIconViews;
    NSMutableArray *_flyingPodViews;
    NSMutableArray *_fadingPodViews;
    NSMutableArray *_crossfadeViews;
    NSMutableArray *_flyingPodWrapperViews;
    double _startTime;
    CADisplayLink *_displayLink;
    struct CGPoint { double x; double y; } _initialLibraryOrigin;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _initialSourceContentFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _initialTargetContentFrame;
    BOOL _podsWantDisplayLinkInfluencedPositioning;
    BOOL _alreadyAnimating;
    unsigned long long _transitionToken;
    long long _endpointAnimatingTo;
    id<BSInvalidatable> _presentationSourceOrderingAssertion;
    _UIPortalView *_presentationSourcePortalView;
    UIView *_sourceTouchForwardingView;
    SBHLibraryWaveZoomSettings *_openSettings;
    SBHLibraryWaveZoomSettings *_closeSettings;
}

+ (BOOL)validateWithLibrary:(id)a0 context:(id)a1;

- (void)_displayLinkFired:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_addPositionToTargetView:(id)a0 matchingSourceView:(id)a1 initialSourceFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)_removeMatchMoveFromTargetView:(id)a0;
- (void)_configureAlphaForPodViewAtIndex:(unsigned long long)a0 forEndpoint:(long long)a1 withContext:(id)a2;
- (void)_configureBackgroundViewForEndpoint:(long long)a0 withContext:(id)a1;
- (void)_configureCategoryStackAlphaForPodViewAtIndex:(unsigned long long)a0 forEndpoint:(long long)a1 withContext:(id)a2;
- (void)_configureCrossfadeDestinationContentForPodViewAtIndex:(unsigned long long)a0 forEndpoint:(long long)a1 withContext:(id)a2;
- (void)_configureCrossfadeSourceContentForPodViewAtIndex:(unsigned long long)a0 forEndpoint:(long long)a1 withContext:(id)a2;
- (void)_configureDockIndicatorViewsForEndpoint:(long long)a0 preparing:(BOOL)a1 withContext:(id)a2;
- (void)_configureLayoutForPodViewAtIndex:(unsigned long long)a0 forEndpoint:(long long)a1 withContext:(id)a2 includeYPosition:(BOOL)a3;
- (void)_configureScaleForPodViewAtIndex:(unsigned long long)a0 forEndpoint:(long long)a1 withContext:(id)a2 includeYTranslation:(BOOL)a3;
- (void)_configureSearchViewsForEndpoint:(long long)a0 preparing:(BOOL)a1 withContext:(id)a2;
- (id)_flyingPodIconViewAtIndex:(unsigned long long)a0;
- (struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })_iconImageInfoForPodViewAtIndex:(unsigned long long)a0;
- (void)_matchMoveTargetView:(id)a0 withSourceView:(id)a1;
- (void)_matchMoveTargetView:(id)a0 withSourceView:(id)a1 usingSourceFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 targetFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (void)_removePositionAdditionFromTargetView:(id)a0;
- (id)_retargetedAnimationSettingsForSettings:(id)a0 normalizedTier:(double)a1 endpoint:(long long)a2;
- (void)_setIconImageInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a0 forPodViewAtIndex:(unsigned long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_sourceFrameForPodViewAtIndex:(unsigned long long)a0 inCoordinateSpace:(id)a1 withContext:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_sourceFrameForPodViewAtIndex:(unsigned long long)a0 inCoordinateSpace:(id)a1 withContext:(id)a2 forUnscaledPositioning:(BOOL)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_targetFrameForPodView:(id)a0 atIndex:(unsigned long long)a1 forEndpoint:(long long)a2 withContext:(id)a3;
- (BOOL)_targetViewHasMatchMove:(id)a0;
- (void)animateToEndpoint:(long long)a0 withContext:(id)a1 completion:(id /* block */)a2;
- (void)finalizeAnimationAtEndpoint:(long long)a0 withContext:(id)a1;
- (void)prepareToAnimateFromEndpoint:(long long)a0 withContext:(id)a1;

@end
