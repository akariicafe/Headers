@interface SBContinuousExposeAutoLayoutController : NSObject {
    BOOL _reentrancyGuard;
}

- (void)_compactSpacingBetweenItemsInSpace:(id)a0 configuration:(id)a1;
- (id)_fullyOccludedItemsForSpace:(id)a0 configuration:(id)a1;
- (id)_itemsSortedByXInSpace:(id)a0 configuration:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_performAutoLayoutWithSpace:(id)a0 configuration:(id)a1 stageInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;
- (void)_snapPositionForAppToEdgesAndCenterOfRectForItem:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 centerSnapPadding:(double)a2 edgeSnapPadding:(double)a3 requireBothAxesToSnap:(BOOL)a4 configuration:(id)a5;
- (void)_updateCompactedFramesForSpace:(id)a0 configuration:(id)a1;
- (void)_updateItemsCoveredByFullyOccludedPeekingItemsInSpace:(id)a0 configuration:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundingBoxForSpace:(id)a0 configuration:(id)a1;
- (void)dodgeFullyOccludedWindowsToNearestVisibleEdgeForSpace:(id)a0 configuration:(id)a1;
- (void)snapPositionToNearestEdgesIfNecessaryForSpace:(id)a0 stageArea:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 configuration:(id)a2;
- (id)spaceByPerformingAutoLayoutWithSpace:(id)a0 previousSpace:(id)a1 configuration:(id)a2 options:(unsigned long long)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })stageAreaForSpace:(id)a0 configuration:(id)a1;
- (void)updateOverlappingScaleAnchorPositionsForSpace:(id)a0 configuration:(id)a1;
- (id)validBottomStageAreaInsetsWithConfiguration:(id)a0;
- (id)validLeadingStageAreaInsetsWithConfiguration:(id)a0;
- (id)validTopStageAreaInsetsWithConfiguration:(id)a0;
- (id)validTrailingStageAreaInsetsWithConfiguration:(id)a0;

@end
