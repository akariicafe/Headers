@class PXStoryFadeOverlayLayout, PXStoryStyleSwitchingFullsizeLayout, NSShadow, PXGItemPlacement, NSString, PXStoryFullsizeLayout, PXStoryScrollLayout, PXStoryThumbnailChromeLayout, PXStoryModel, PXGLayout;

@interface PXStoryLayout : PXGAbsoluteCompositeLayout <PXGShadowSource, PXChangeObserver, PXGItemPlacementController, PXTapToRadarDiagnosticProvider> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _presentedContentFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _presentedContentFrameVelocity;
}

@property (readonly, nonatomic) PXStoryStyleSwitchingFullsizeLayout *styleSwitchingFullsizeLayout;
@property (readonly, nonatomic) PXStoryFullsizeLayout *thumbnailFullsizeLayout;
@property (readonly, nonatomic) PXGLayout *fullsizeLayout;
@property (readonly, nonatomic) PXStoryFullsizeLayout *currentFullsizePlayerLayout;
@property (readonly, nonatomic) PXStoryFadeOverlayLayout *fadeOverlayLayout;
@property (readonly, nonatomic) PXStoryScrollLayout *scrollLayout;
@property (readonly, nonatomic) PXStoryThumbnailChromeLayout *thumbnailChromeLayout;
@property (readonly, nonatomic) long long fullsizeLayoutIndex;
@property (readonly, nonatomic) long long scrollLayoutIndex;
@property (readonly, nonatomic) long long thumbnailChromeLayoutIndex;
@property (readonly, nonatomic) long long fadeOverlayLayoutIndex;
@property (readonly, nonatomic) long long diagnosticOverlayLayoutIndex;
@property (readonly, nonatomic) unsigned int shadowSpriteIndex;
@property (retain, nonatomic) NSShadow *shadow;
@property (retain, nonatomic) PXGItemPlacement *fullsizeContentPlacementOverride;
@property (readonly, nonatomic) id itemReference;
@property (weak, nonatomic) PXGLayout *accessoryItemPlacementLayout;
@property (nonatomic) double relativeZPositionAboveLegibilityGradients;
@property (retain, nonatomic) PXGLayout *diagnosticOverlayLayout;
@property (readonly, nonatomic) PXStoryModel *model;
@property (readonly, nonatomic) unsigned int representingSpriteIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didUpdate;
- (void)_updateShadow;
- (id)itemPlacementControllerForItemReference:(id)a0;
- (void)alphaDidChange;
- (id)initWithModel:(id)a0;
- (id)init;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (unsigned long long)contentChangeTrend;
- (void)willUpdate;
- (BOOL)allowsRepeatedSublayoutsUpdates;
- (void)update;
- (void)_invalidateContent;
- (void)collectTapToRadarDiagnosticsIntoContainer:(id)a0;
- (void)referenceDepthDidChange;
- (void)setPlacementOverride:(id)a0 forItemReference:(id)a1;
- (id)placementInContext:(id)a0 forItemReference:(id)a1;
- (double)cornerRadiusForShadowSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (void)_updateContent;
- (void).cxx_destruct;
- (id)shadowForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (void)referenceSizeDidChange;
- (long long)scrollableAxis;
- (id)diagnosticsItemProvidersInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_invalidateAXGroupRole;
- (void)_invalidateShadow;
- (void)_setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 relativeZPosition:(double)a1 depth:(double)a2 forSublayoutAtIndex:(long long)a3;
- (void)_updateAXGroupRole;
- (void)enumerateSublayoutsForDetailedPlacement:(id)a0 ofItemWithReference:(id)a1 usingBlock:(id /* block */)a2;

@end
