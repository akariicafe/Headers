@class NSString, PXStoryViewModel, PXStoryModel;
@protocol PXStoryTimeline;

@interface PXStoryScrubberScrollLayout : PXGLayout <PXGSolidColorSource, PXChangeObserver, PXGScrollLayoutDelegate> {
    BOOL _isUpdating;
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
    unsigned int _firstPageSpriteIndex;
}

@property (retain, nonatomic) id<PXStoryTimeline> displayedTimeline;
@property (nonatomic) long long numberOfPages;
@property (nonatomic) struct { long long firstSegmentIdentifier; double secondSegmentMixFactor; long long secondSegmentIdentifier; } presentedScrubberPosition;
@property (readonly, nonatomic) id modelChangeOrigin;
@property (readonly, nonatomic) PXStoryViewModel *viewModel;
@property (readonly, nonatomic) PXStoryModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didUpdate;
- (id)init;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)willUpdate;
- (id)colorAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (void)update;
- (void)visibleRectDidChange;
- (void)_invalidateContent;
- (void)_updateContent;
- (void).cxx_destruct;
- (void)referenceSizeDidChange;
- (void)scrollLayoutWillBeginScrolling:(id)a0;
- (void)_invalidateCurrentScrollPosition;
- (void)_invalidateDisplayedTimeline;
- (void)_invalidateModelScrubberPosition;
- (void)_invalidatePages;
- (void)_invalidatePresentedScrubberPosition;
- (struct CGPoint { double x0; double x1; })_offsetFromFirstPageForScrollingToPosition:(struct { long long x0; double x1; long long x2; })a0 visibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_updateCurrentScrollPosition;
- (void)_updateDisplayedTimeline;
- (void)_updateModelScrubberPosition;
- (void)_updatePages;
- (void)_updatePresentedScrubberPosition;
- (void)adjustScrollTargetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1;
- (id)createAnchorForScrollingToPosition:(struct { long long x0; double x1; long long x2; })a0;
- (id)initWithViewModel:(id)a0 model:(id)a1;
- (void)scrollLayoutDidEndScrolling:(id)a0;
- (void)scrollLayoutDidScroll:(id)a0;
- (void)scrollLayoutWillEndScrolling:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2 currentContentOffset:(struct CGPoint { double x0; double x1; })a3;

@end
