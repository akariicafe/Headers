@class UILabel, UIView, NSString, PLRoundProgressView, UIButton, PXOperationStatus, PUAssetSharedViewModel, NSUndoManager;

@interface PURenderIndicatorTileViewController : PUTileViewController <PUAssetSharedViewModelChangeObserver, PXLoadingStatusManagerObserver>

@property (nonatomic) BOOL needsUpdateStatus;
@property (nonatomic) BOOL needsUpdateSizeClass;
@property (nonatomic) BOOL needsUpdateStatusViews;
@property (copy, nonatomic) PXOperationStatus *status;
@property (retain, nonatomic) PXOperationStatus *editActionStatus;
@property (nonatomic) long long sizeClass;
@property (nonatomic) struct CGSize { double width; double height; } progressIndicatorSize;
@property (retain, nonatomic) UIView *roundedBackgroundView;
@property (retain, nonatomic) UILabel *renderingLabel;
@property (retain, nonatomic) PLRoundProgressView *progressView;
@property (nonatomic) BOOL isProgressViewVisible;
@property (retain, nonatomic) UIButton *errorButton;
@property (nonatomic) double renderLabelTextWidth;
@property (nonatomic) BOOL willShowProgressAfterDelay;
@property (retain, nonatomic) PUAssetSharedViewModel *assetSharedViewModel;
@property (retain, nonatomic) NSUndoManager *undoManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_loadErrorIconForSizeClass:(long long)a0;
+ (struct CGSize { double x0; double x1; })progressIndicatorTileSizeForSizeClass:(long long)a0;
+ (BOOL)wantsRenderViewForTypeOfProcessingNeeded:(unsigned short)a0;
+ (struct CGSize { double x0; double x1; })renderIndicatorTileSizeForSizeClass:(long long)a0;

- (void)_invalidateStatus;
- (void)_invalidateSizeClass;
- (void)_updateSubviewOrdering;
- (void)viewModel:(id)a0 didChange:(id)a1;
- (void)applyLayoutInfo:(id)a0;
- (void)setProgressViewVisible:(BOOL)a0 animated:(BOOL)a1;
- (BOOL)_needsUpdate;
- (void)_updateViewFramesForCollapseState:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_expandedBackgroundViewFrame;
- (void)viewDidLoad;
- (void)becomeReusable;
- (void)_updateStatusViewsIfNeeded;
- (void)_updateSizeClassIfNeeded;
- (void)_setNeedsUpdate;
- (void)_updateIfNeeded;
- (void)_invalidateStatusViews;
- (void)loadingStatusManager:(id)a0 didUpdateLoadingStatus:(id)a1 forItemIdentifier:(id)a2;
- (void)_updateStatusIfNeeded;
- (void)_handleAssetSharedViewModel:(id)a0 didChange:(id)a1;
- (void).cxx_destruct;
- (void)setProgressViewVisible:(BOOL)a0;
- (void)setProgressViewVisible:(BOOL)a0 animated:(BOOL)a1 completion:(id /* block */)a2;

@end
