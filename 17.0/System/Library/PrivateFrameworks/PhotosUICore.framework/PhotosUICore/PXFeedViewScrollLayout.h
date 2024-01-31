@class NSString, PXFeedViewModel, PXFeedContentLayout;

@interface PXFeedViewScrollLayout : PXGScrollLayout <PXGScrollLayoutDelegate> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
    BOOL _isClearingLastVisibleAreaAnchoringInformation;
}

@property (readonly, nonatomic) PXFeedContentLayout *feedContentLayout;
@property (readonly, nonatomic) PXFeedViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)itemPlacementControllerForItemReference:(id)a0;
- (void)clearLastVisibleAreaAnchoringInformation;
- (id)init;
- (void)_updateContentSize;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (unsigned long long)contentChangeTrend;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })safeAreaInsets;
- (void)update;
- (void)_invalidateContentSize;
- (void).cxx_destruct;
- (long long)sublayoutIndexForObjectReference:(id)a0 options:(unsigned long long)a1 updatedObjectReference:(out id *)a2;
- (void)referenceSizeDidChange;
- (long long)scrollableAxis;
- (void)_updateScrollParameters;
- (void)_invalidateAnchorForVisibleArea;
- (void)_invalidateScrollParameters;
- (void)_updateAnchorForVisibleArea;
- (id)initWithViewModel:(id)a0 displayingFeedContentLayout:(id)a1;
- (void)scrollLayoutWillEndScrolling:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2 currentContentOffset:(struct CGPoint { double x0; double x1; })a3;

@end
