@class PUAssetViewModel, PXUIAssetBadgeView, NSString, UIView, PUBadgeInfoProvider;
@protocol PUBadgeTileViewControllerDelegate, PXMemoryAssetsActionFactory;

@interface PUBadgeTileViewController : PUTileViewController <PUAssetViewModelChangeObserver, PXUIAssetBadgeViewDelegate, PXChangeObserver, PXActionPerformerDelegate> {
    struct { BOOL userDidTapBadgeView; BOOL badgeVisibilityDidChange; BOOL undoManager; } _delegateRespondsTo;
}

@property (nonatomic, setter=_setNeedsUpdateBadgeInfo:) BOOL _needsUpdateBadgeInfo;
@property (nonatomic, setter=_setNeedsUpdateBadgeProvider:) BOOL _needsUpdateBadgeProvider;
@property (nonatomic, setter=_setNeedsUpdateBadgeView:) BOOL _needsUpdateBadgeView;
@property (nonatomic, setter=_setBadgeInfo:) struct PXAssetBadgeInfo { unsigned long long badges; double duration; long long count; long long fileSize; } _badgeInfo;
@property (retain, nonatomic) PUBadgeInfoProvider *_badgeInfoProvider;
@property (readonly, nonatomic) PXUIAssetBadgeView *_badgeView;
@property (nonatomic, setter=_setOverContent:) BOOL _isOverContent;
@property (nonatomic, setter=_setContentWidth:) double _contentWidth;
@property (weak, nonatomic) id<PUBadgeTileViewControllerDelegate> delegate;
@property (retain, nonatomic) PUAssetViewModel *assetViewModel;
@property (readonly, nonatomic) BOOL isBadgeVisible;
@property (readonly, nonatomic) UIView *livePhotoBadgeContainerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<PXMemoryAssetsActionFactory> memoryAssetsActionFactory;

+ (id)_adjustmentDataLoadingQueue;
+ (void)_configureBadgeView:(id)a0 withBadgeInfo:(struct PXAssetBadgeInfo { unsigned long long x0; double x1; long long x2; long long x3; })a1 isOverContent:(BOOL)a2 contentWidth:(double)a3 animated:(BOOL)a4;
+ (void)_logEffectNameApplied:(id)a0 toAsset:(id)a1;
+ (void)_toggleDepthForAsset:(id)a0 enable:(BOOL)a1 undoManager:(id)a2;
+ (void)applyLivePhotoEffect:(long long)a0 toAsset:(id)a1 undoManager:(id)a2;
+ (struct CGSize { double x0; double x1; })badgeTileSizeForAssetViewModel:(id)a0 contentWidth:(double)a1;
+ (void)disableLivePhotoForAsset:(id)a0 undoManager:(id)a1;
+ (struct CGSize { double x0; double x1; })leadingBadgesSizeForAssetViewModel:(id)a0 contentWidth:(double)a1;
+ (void)logAppliedLivePhotoEffect:(long long)a0 toAsset:(id)a1;
+ (void)logToggledDepthEffect:(BOOL)a0 onAsset:(id)a1;

- (void)viewModel:(id)a0 didChange:(id)a1;
- (void)applyLayoutInfo:(id)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (BOOL)_needsUpdate;
- (void)prepareForReuse;
- (void)viewDidLoad;
- (void)becomeReusable;
- (id)undoManagerForActionPerformer:(id)a0;
- (void)_setNeedsUpdate;
- (void)_updateIfNeeded;
- (id)loadView;
- (void).cxx_destruct;
- (void)_updateBadgeViewIfNeeded;
- (void)assetBadgeView:(id)a0 dismissAnyPresentedViewControllerWithCompletion:(id /* block */)a1;
- (void)_invalidateBadgeView;
- (id)assetBadgeView:(id)a0 menuForBadges:(unsigned long long)a1;
- (id)_menuForBadges:(unsigned long long)a0;
- (void)didChangeActive;
- (id)_depthMenuElementsForDepthEnabled:(BOOL)a0 depthControllerExists:(BOOL)a1;
- (id)_depthToggleActionForEnable:(BOOL)a0 handler:(id /* block */)a1;
- (id)_depthToggleMenuForBadges:(unsigned long long)a0;
- (id)_disabledDepthMenuElementsDepthEnabled:(BOOL)a0;
- (void)_invalidateBadgeInfo;
- (void)_invalidateBadgeProvider;
- (id)_liveVariationsMenuForBadges:(unsigned long long)a0;
- (void)_updateBadgeInfoIfNeeded;
- (void)_updateBadgeProviderIfNeeded;

@end
