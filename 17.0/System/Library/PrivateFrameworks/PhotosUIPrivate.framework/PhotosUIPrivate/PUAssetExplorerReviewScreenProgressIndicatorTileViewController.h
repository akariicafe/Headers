@class UIButton, PUAssetSharedViewModel, PUBrowsingVideoPlayer, PLRoundProgressView, UILabel, NSString, PXOperationStatus;

@interface PUAssetExplorerReviewScreenProgressIndicatorTileViewController : PUTileViewController <PUAssetSharedViewModelChangeObserver, PUBrowsingVideoPlayerChangeObserver>

@property (nonatomic, setter=_setNeedsUpdateProgressViewStyle:) BOOL _needsUpdateProgressViewStyle;
@property (nonatomic, setter=_setNeedsUpdateStatus:) BOOL _needsUpdateStatus;
@property (nonatomic, setter=_setNeedsUpdateStatusViews:) BOOL _needsUpdateStatusViews;
@property (nonatomic, setter=_setProgressViewStyle:) long long _progressViewStyle;
@property (copy, nonatomic, setter=_setStatus:) PXOperationStatus *_status;
@property (retain, nonatomic, setter=_setProgressView:) PLRoundProgressView *_progressView;
@property (nonatomic, setter=_setProgressViewVisible:) BOOL _isProgressViewVisible;
@property (retain, nonatomic, setter=_setErrorButton:) UIButton *_errorButton;
@property (retain, nonatomic, setter=_setDebugProgressLabel:) UILabel *_debugProgressLabel;
@property (retain, nonatomic) PUAssetSharedViewModel *assetSharedViewModel;
@property (retain, nonatomic) PUBrowsingVideoPlayer *videoPlayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_loadErrorIcon;
+ (struct CGSize { double x0; double x1; })progressIndicatorTileSize;

- (void)_invalidateStatus;
- (void)_updateSubviewOrdering;
- (void)viewModel:(id)a0 didChange:(id)a1;
- (void)applyLayoutInfo:(id)a0;
- (void)_invalidateProgressViewStyle;
- (BOOL)_needsUpdate;
- (void)viewDidLoad;
- (void)becomeReusable;
- (void)_handleErrorButtonTap:(id)a0;
- (void)_updateStatusViewsIfNeeded;
- (void)_setNeedsUpdate;
- (void)_updateIfNeeded;
- (void)_handleVideoPlayer:(id)a0 didChange:(id)a1;
- (void)_updateProgressViewStyleIfNeeded;
- (void)_invalidateStatusViews;
- (void)_setProgressViewVisible:(BOOL)a0 animated:(BOOL)a1;
- (void)_updateStatusIfNeeded;
- (void)_handleAssetSharedViewModel:(id)a0 didChange:(id)a1;
- (void).cxx_destruct;

@end
