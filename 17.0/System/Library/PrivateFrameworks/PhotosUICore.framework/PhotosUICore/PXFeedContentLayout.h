@class PXGStackedSublayoutComposition, PXSectionedDataSource, PXFeedViewModel, NSString, PXFeedItemDecorationSource;

@interface PXFeedContentLayout : PXGCompositeLayout <PXGSublayoutProvider, PXChangeObserver> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
}

@property (readonly, nonatomic) PXGStackedSublayoutComposition *composition;
@property (readonly, nonatomic) PXFeedItemDecorationSource *decorationSource;
@property (retain, nonatomic) PXSectionedDataSource *presentedDataSource;
@property (readonly, nonatomic) PXFeedViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)layout:(id)a0 navigationObjectReferenceForSublayoutAtIndex:(long long)a1;
- (struct CGSize { double x0; double x1; })layout:(id)a0 estimatedContentSizeForSublayoutAtIndex:(long long)a1 referenceSize:(struct CGSize { double x0; double x1; })a2;
- (id)itemPlacementControllerForItemReference:(id)a0;
- (id)layout:(id)a0 createSublayoutAtIndex:(long long)a1;
- (id)init;
- (id)initWithViewModel:(id)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)update;
- (void).cxx_destruct;
- (long long)sublayoutIndexForObjectReference:(id)a0 options:(unsigned long long)a1 updatedObjectReference:(out id *)a2;
- (void)safeAreaInsetsDidChange;
- (long long)scrollableAxis;
- (void)_invalidateCompositionParameters;
- (void)_invalidateFeedSectionSublayouts;
- (void)_invalidateFeedSelectionSnapshot;
- (void)_updateCompositionParameters;
- (void)_updateFeedSectionSublayouts;
- (void)_updateFeedSelectionSnapshot;
- (long long)anchoredSublayoutIndex;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })indexPathClosestToIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0 inDirection:(unsigned long long)a1;

@end
