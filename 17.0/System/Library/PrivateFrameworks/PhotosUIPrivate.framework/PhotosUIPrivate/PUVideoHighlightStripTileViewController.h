@class PUBrowsingVideoPlayer, PUAssetViewModel, _PUVideoHighlightStripView, UIColor, NSString;

@interface PUVideoHighlightStripTileViewController : PUTileViewController <PUAssetViewModelChangeObserver, PUBrowsingVideoPlayerTimeObserver>

@property (class, readonly, nonatomic) double preferredTileHeight;

@property (readonly, nonatomic) _PUVideoHighlightStripView *highlightsView;
@property (retain, nonatomic) PUBrowsingVideoPlayer *videoPlayer;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } currentTime;
@property (retain, nonatomic) PUAssetViewModel *assetViewModel;
@property (retain, nonatomic) UIColor *highlightColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewModel:(id)a0 didChange:(id)a1;
- (void)videoPlayer:(id)a0 desiredSeekTimeDidChange:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)viewDidLoad;
- (void)becomeReusable;
- (void).cxx_destruct;
- (void)videoPlayer:(id)a0 currentTimeDidChange:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)_updateHighlightsView;
- (void)_updateHighlightsViewCurrentTime;

@end
