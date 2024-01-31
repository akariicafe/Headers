@class CSDateViewComponent, NSString, CSContentComponent, CSWallpaperFloatingLayerComponent, CSProudLockComponent, SBSpotlightPresentableViewController, SBHHomePullToSearchSettings;
@protocol SBCoverSheetSpotlightViewControllerDelegate;

@interface SBCoverSheetSpotlightViewController : CSCoverSheetViewControllerBase <CSDismissableModalViewControllerDelegate, SBSearchPresentable> {
    CSProudLockComponent *_proudLockComponent;
    CSDateViewComponent *_dateViewComponent;
    CSContentComponent *_contentComponent;
    CSWallpaperFloatingLayerComponent *_wallpaperFloatingLayerComponent;
}

@property (weak, nonatomic) id<SBCoverSheetSpotlightViewControllerDelegate> delegate;
@property (retain, nonatomic) SBSpotlightPresentableViewController *spotlightViewController;
@property (nonatomic) double topOffset;
@property (nonatomic) double maxPresentationOffset;
@property (retain, nonatomic) SBHHomePullToSearchSettings *searchTransitionSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id /* block */)willBeginModifyingPresentationProgressForState:(long long)a0 animated:(BOOL)a1 needsInitialLayout:(BOOL *)a2;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)invalidate;
- (void)aggregateAppearance:(id)a0;
- (BOOL)presentationCancelsTouches;
- (void).cxx_destruct;
- (void)aggregateBehavior:(id)a0;
- (id)_newDisplayLayoutElement;
- (void)viewDidDisappear:(BOOL)a0;
- (void)updatePresentationProgress:(double)a0 withOffset:(double)a1 velocity:(double)a2 presentationState:(long long)a3;
- (BOOL)handleEvent:(id)a0;
- (void)addGrabberView:(id)a0;
- (void)handleBottomEdgeGestureChanged:(id)a0;
- (void)dismissForHomeButton;
- (void)handleBottomEdgeGestureEnded:(id)a0;
- (double)_scaleGivenTranslation:(double)a0;
- (void)_updatePresentationProgress:(double)a0 withOffset:(double)a1 velocity:(double)a2 presentationState:(long long)a3;
- (void)_updateSpotlightScale:(double)a0 interactive:(BOOL)a1;
- (id)initWithSpotlightViewController:(id)a0;
- (void)updateComponentTransitionWithOffset:(double)a0 presentationState:(long long)a1;

@end
