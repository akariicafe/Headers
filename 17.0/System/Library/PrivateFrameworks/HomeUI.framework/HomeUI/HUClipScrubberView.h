@class UIButton, UICollectionView, AVBackgroundView, UIView, HUBlendedSeparatorView, HUClipScrubberPlayheadView;

@interface HUClipScrubberView : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) AVBackgroundView *contentBackgroundView;
@property (retain, nonatomic) HUClipScrubberPlayheadView *playheadView;
@property (retain, nonatomic) HUClipScrubberPlayheadView *backgroundPlayheadView;
@property (retain, nonatomic) UIButton *playPauseButton;
@property (retain, nonatomic) UIButton *rightActionButton;
@property (retain, nonatomic) UICollectionView *clipCollectionView;
@property (retain, nonatomic) UIView *collectionViewContainer;
@property (nonatomic) unsigned long long displayMode;
@property (retain, nonatomic) HUBlendedSeparatorView *leftBlendedSeparator;
@property (retain, nonatomic) HUBlendedSeparatorView *rightBlendedSeparator;
@property (nonatomic) BOOL isPlayingMedia;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)_deleteImage;
- (void)_addConstraints;
- (id)_pauseImage;
- (id)_playImage;
- (void)activateLiveButtonDisplay;
- (void)deactivateLiveButtonDisplay;
- (void)didUpdatePlaybackEngine:(id)a0;
- (void)displayEditInterface;
- (id)displayModeDescription;
- (void)hideEditInterface;
- (void)navigateToLivePosition;
- (void)navigateToOffset:(double)a0;
- (id)playOrPauseImageForEngineMode:(unsigned long long)a0;
- (void)updateAccessoryButtonsForPlaybackEngine:(id)a0;
- (void)updateDisplayMode:(unsigned long long)a0;

@end
