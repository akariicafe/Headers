@protocol PXDisplayAsset;

@interface PXPhotosContentInlinePlaybackController : PXGridInlinePlaybackController <PXGDisplayAssetPixelBufferSourcesProvider> {
    void /* unknown type, empty encoding */ scrollViewSpeedometerObservation;
}

@property (nonatomic) void /* unknown type, empty encoding */ numberOfItemsToPlay;
@property (nonatomic, retain) void /* unknown type, empty encoding */ scrollViewSpeedometer;
@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic) BOOL isContentViewVisible;
@property (nonatomic, readonly) BOOL shouldEnablePlayback;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } currentVisibleRect;
@property (nonatomic, readonly) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } criticallyVisibleEdgeInsets;
@property (nonatomic, readonly) id<PXDisplayAsset> currentHoveredDisplayAsset;
@property (nonatomic, readonly) long long maxNumberOfPlayingItems;

- (id)init;
- (id)createPlaybackRecordForDisplayAsset:(id)a0 mediaProvider:(id)a1 geometryReference:(id)a2;
- (id)pixelBufferSourceForDisplayAsset:(id)a0 mediaProvider:(id)a1 spriteReference:(id)a2;
- (BOOL)shouldDisplayPreviousNonNullPixelBufferForPixelBufferSource:(id)a0;
- (void)recyclePixelBufferSourceForDisplayAssets:(id)a0;
- (BOOL)isDisplayAssetEligibleForAutoPlayback:(id)a0;
- (void).cxx_destruct;
- (BOOL)canPlayAsset:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForPlaybackRecord:(id)a0 minPlayableSize:(struct CGSize { double x0; double x1; } *)a1;
- (id)filterSortedRecordsToPlay:(id)a0;

@end
