@class PXStoryModel, PXStoryScrubberContentLayout, PXStoryViewModel, PXStoryScrubberScrollLayout, NSDate, NSNumber, NSString;

@interface PXStoryScrubberLayout : PXGSplitLayout <PXChangeObserver, PXGViewSource> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
    BOOL _isUpdatingWantsVisible;
    unsigned int _focusGuideSpriteIndex;
}

@property (readonly, nonatomic) PXStoryViewModel *viewModel;
@property (retain, nonatomic) PXStoryModel *mainModel;
@property (retain, nonatomic) NSDate *currentSkipSegmentActionDate;
@property (retain, nonatomic) NSDate *lastScrubbedDate;
@property (retain, nonatomic) PXStoryScrubberContentLayout *contentLayout;
@property (retain, nonatomic) PXStoryScrubberScrollLayout *scrollLayout;
@property (retain, nonatomic) NSNumber *alphaOverride;
@property (nonatomic) unsigned short focusGuideContentVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didUpdate;
- (void)_updateSublayouts;
- (id)preferredFocusLayouts;
- (void)alphaDidChange;
- (id)init;
- (id)initWithViewModel:(id)a0;
- (Class)viewClassForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_invalidateMainModel;
- (void)_loadSublayoutsIfNeeded;
- (void)_loadTVSublayoutsIfNeeded;
- (void)willUpdate;
- (void)_updateSublayoutsAlpha;
- (BOOL)allowsRepeatedSublayoutsUpdates;
- (void)_updateMainModel;
- (void)_invalidateSublayoutsAlpha;
- (void)_invalidateSkipSegmentActionDate;
- (id)axSpriteIndexes;
- (void)update;
- (void)_invalidateVisibilityFraction;
- (void)_updateLastScrubbedDate;
- (void)referenceDepthDidChange;
- (void)_updateWantsVisible;
- (void)getDetailedPresentedPlacement:(id)a0 forItemReference:(id)a1;
- (void)_invalidateFocusGuide;
- (void)_invalidateLastScrubbedDate;
- (void)_invalidateSublayouts;
- (void).cxx_destruct;
- (id)viewUserDataForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (void)_invalidateWantsVisible;
- (BOOL)_shouldEnableFocusGuide;
- (void)_updateSkipSegmentActionDate;
- (void)referenceSizeDidChange;
- (void)_updateFocusGuide;
- (void)_updateVisibilityFraction;
- (void)setDetailedPlacementOverride:(id)a0 forItemReference:(id)a1;

@end
