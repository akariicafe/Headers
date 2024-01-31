@class MRUVolumeNowPlayingView, MediaControlsExpandableButton, MRUOutputDeviceAssetView, MRUVisualStylingProvider;

@interface MRUVolumeBackgroundView : UIView

@property (retain, nonatomic) MRUOutputDeviceAssetView *primaryAssetView;
@property (retain, nonatomic) MRUOutputDeviceAssetView *secondaryAssetView;
@property (retain, nonatomic) MRUVolumeNowPlayingView *nowPlayingView;
@property (retain, nonatomic) MediaControlsExpandableButton *primaryListeningModeButton;
@property (retain, nonatomic) MediaControlsExpandableButton *secondaryListeningModeButton;
@property (retain, nonatomic) MediaControlsExpandableButton *spatialAudioModeButton;
@property (retain, nonatomic) MediaControlsExpandableButton *conversationAwarenessButton;
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider;
@property (nonatomic) BOOL showSecondaryAssetView;
@property (nonatomic) BOOL showPrimaryListeningModeButton;
@property (nonatomic) BOOL showNowPlayingView;
@property (nonatomic) BOOL showSecondaryListeningModeButton;
@property (nonatomic) BOOL showSpatialAudioModeButton;
@property (nonatomic) BOOL showConversationAwarenessButton;
@property (readonly, nonatomic) BOOL hasExpandedButtons;

- (void)layoutSubviewsVertical;
- (void)layoutSubviewsHorizontal;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateVisibility;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)collapseExpandableButtons;
- (double)totalHorizontalSliderWidth;
- (void)expandButton:(id)a0;

@end
