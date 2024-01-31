@class NSString, NSMutableSet, NSMutableArray, VKCVisualSearchResult;
@protocol VKCImageVisualSearchViewDelegate;

@interface VKCImageVisualSearchView : VKCImageBaseOverlayView <VKCVisualSearchResultItemViewDelegate>

@property (retain, nonatomic) NSMutableArray *resultViews;
@property (nonatomic) BOOL shouldAutomaticallyShowVisualSearchResult;
@property (retain, nonatomic) NSMutableSet *cachedResultItemsWithFocalDot;
@property (retain, nonatomic) VKCVisualSearchResult *visualSearchResult;
@property (weak, nonatomic) id<VKCImageVisualSearchViewDelegate> delegate;
@property (nonatomic) BOOL didAddVisualSearchCornerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)containsVisualSearchItemAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)addMetadataToVSFeedbackItem:(id)a0;
- (void)sendDismissedAnalyticsEventEventWithItem:(id)a0;
- (void)showTopVisualSearchResult;
- (void)submitVisualSearchUserFeedbackForReportIdentifier:(id)a0 userFeedbackPayload:(id)a1 sfReportData:(id)a2;
- (void)generateVisualSearchResultForItems:(id)a0 queryID:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (BOOL)visualSearchItemView:(id)a0 shouldBeginAtPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)triggerTapToRadar;
- (void)_layoutResultViews;
- (void)automaticallyShowVisualSearchResults;
- (id)init;
- (void)visualSearchItemViewDidDismissController:(id)a0;
- (void)visualSearchItemViewDidActivateVSItem:(id)a0;
- (void)sendProcessingAnalyticsEventEventWithItem:(id)a0 duration:(double)a1;
- (void)presentVisualSearchForItem:(id)a0;
- (BOOL)_shouldShowPulsingDot:(id)a0;
- (void)updateVisibleItems;
- (void)visualSearchItemView:(id)a0 didTapVisualSearchIndicatorWithNormalizedBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)updateUIForVisualSearchResultsClearExistingResults:(BOOL)a0;
- (void)setNormalizedVisibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHidden:(BOOL)a0;
- (void)visualSearchItemView:(id)a0 didProcessResultsWithDuration:(double)a1;
- (void)hideDots;
- (id)visualSearchItemAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)topResultView;
- (void)animateDotsIn;
- (void)layoutSubviews;

@end
