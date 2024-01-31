@class MRUActivityNowPlayingHeaderView, NSArray, MRUWaveformView, MRUNowPlayingTransportControlsView, MRUNowPlayingTimeControlsView, MRUActivityAccessoryView, MRUVisualStylingProvider, MRUEqualizerView;

@interface MRUActivityNowPlayingView : UIView

@property (readonly, nonatomic) MRUActivityAccessoryView *leadingView;
@property (readonly, nonatomic) MRUActivityAccessoryView *trailingView;
@property (readonly, nonatomic) MRUActivityAccessoryView *detachedMinimalView;
@property (readonly, nonatomic) NSArray *artworkViews;
@property (readonly, nonatomic) MRUWaveformView *waveformView;
@property (readonly, nonatomic) MRUEqualizerView *equalizerView;
@property (readonly, nonatomic) MRUActivityNowPlayingHeaderView *headerView;
@property (readonly, nonatomic) MRUNowPlayingTimeControlsView *timeControlsView;
@property (readonly, nonatomic) MRUNowPlayingTransportControlsView *transportControlsView;
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider;
@property (nonatomic) BOOL showWaveform;

- (id)initWithWaveformView:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (double)preferredHeightForBottomSafeArea;
- (void)updateVisibilty;

@end
