@class NSString, PXStoryModel;
@protocol PXStoryTimeline;

@interface PXStoryPagedScrollContentLayout : PXGLayout <PXGSolidColorSource, PXChangeObserver> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _postUpdateFlags;
    unsigned int _firstPageSpriteIndex;
}

@property (retain, nonatomic) id<PXStoryTimeline> displayedTimeline;
@property (nonatomic) long long numberOfPages;
@property (nonatomic) double interpageSpacing;
@property (nonatomic) double presentedPageWidth;
@property (nonatomic) struct { long long firstSegmentIdentifier; double secondSegmentMixFactor; long long secondSegmentIdentifier; } presentedScrollPosition;
@property (readonly, nonatomic) PXStoryModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithModel:(id)a0;
- (id)init;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (unsigned int)spriteIndexForObjectReference:(id)a0 options:(unsigned long long)a1 updatedObjectReference:(out id *)a2;
- (id)colorAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (void)update;
- (void)visibleRectDidChange;
- (void)_invalidateContent;
- (void)_updateContent;
- (void).cxx_destruct;
- (void)referenceSizeDidChange;
- (void)_invalidateDisplayedTimeline;
- (void)_invalidatePages;
- (void)_invalidatePresentedScrollPosition;
- (struct CGPoint { double x0; double x1; })_offsetFromFirstPageForScrollingToPosition:(struct { long long x0; double x1; long long x2; })a0 visibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_updateDisplayedTimeline;
- (void)_updatePages;
- (void)_updatePresentedScrollPosition;
- (void)adjustScrollTargetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1;
- (id)createAnchorForScrollingToPosition:(struct { long long x0; double x1; long long x2; })a0;

@end
