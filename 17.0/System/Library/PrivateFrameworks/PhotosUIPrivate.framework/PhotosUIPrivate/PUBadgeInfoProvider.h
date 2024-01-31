@class NSString, PUAssetViewModel;

@interface PUBadgeInfoProvider : PXObservable <PUBrowsingVideoPlayerChangeObserver, PXAssetEditOperationManagerObserver> {
    struct { BOOL output; } _needsUpdateFlags;
}

@property (nonatomic) double lastPlayingTime;
@property (nonatomic) BOOL playing;
@property (readonly, nonatomic) PUAssetViewModel *assetViewModel;
@property (readonly, nonatomic) struct PXAssetBadgeInfo { unsigned long long badges; double duration; long long count; long long fileSize; } badgeInfo;
@property (readonly, nonatomic) struct PXAssetBadgeInfo { unsigned long long badges; double duration; long long count; long long fileSize; } outputBadgeInfo;
@property (readonly, nonatomic) BOOL outputShouldAnimate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setAssetViewModel:(id)a0;
- (void)performChanges:(id /* block */)a0;
- (void)viewModel:(id)a0 didChange:(id)a1;
- (id)init;
- (void)didPerformChanges;
- (BOOL)_needsUpdate;
- (void)prepareForReuse;
- (id)mutableChangeObject;
- (void)_setNeedsUpdate;
- (void)_updateIfNeeded;
- (void).cxx_destruct;
- (void)_invalidateOutput;
- (void)_updateOutputIfNeeded;
- (void)assetEditOperationManager:(id)a0 didChangeEditOperationStatusForAsset:(id)a1 context:(void *)a2;
- (void)invalidateOutput;
- (void)setBadgeInfo:(struct PXAssetBadgeInfo { unsigned long long x0; double x1; long long x2; long long x3; })a0;
- (struct PXAssetBadgeInfo { unsigned long long x0; double x1; long long x2; long long x3; })_filteredBadgeInfoForTime:(double)a0 outShouldAnimate:(BOOL *)a1;
- (void)_setOutputBadgeInfo:(struct PXAssetBadgeInfo { unsigned long long x0; double x1; long long x2; long long x3; })a0 shouldAnimate:(BOOL)a1;
- (void)_updatePlaying;

@end
