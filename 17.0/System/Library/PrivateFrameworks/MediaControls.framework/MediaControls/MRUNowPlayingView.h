@class UIView, MRUNowPlayingVolumeControlsView, MRUVisualStylingProvider, NSString, MRUNowPlayingTransportControlsView, MRUNowPlayingHeaderView, MRUNowPlayingTimeControlsView, MRUArtworkView, MRUNowPlayingContainerView;

@interface MRUNowPlayingView : UIView <UIPointerInteractionDelegate>

@property (retain, nonatomic) MRUNowPlayingContainerView *containerView;
@property (readonly, nonatomic) MRUArtworkView *artworkView;
@property (readonly, nonatomic) MRUNowPlayingHeaderView *headerView;
@property (readonly, nonatomic) MRUNowPlayingTimeControlsView *timeControlsView;
@property (readonly, nonatomic) MRUNowPlayingTransportControlsView *transportControlsView;
@property (readonly, nonatomic) MRUNowPlayingVolumeControlsView *volumeControlsView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *suggestionsView;
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider;
@property (nonatomic) long long layout;
@property (nonatomic) long long context;
@property (nonatomic, getter=isOnScreen) BOOL onScreen;
@property (nonatomic, getter=isDimmed) BOOL dimmed;
@property (nonatomic) BOOL showArtworkView;
@property (nonatomic) BOOL showTimeControlsView;
@property (nonatomic) BOOL showTransportControlsView;
@property (nonatomic) BOOL showVolumeControlsView;
@property (nonatomic) BOOL showSuggestionsView;
@property (nonatomic) BOOL supportsHorizontalLayout;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentEdgeInsets;
@property (nonatomic) BOOL useArtworkOverrideSize;
@property (nonatomic) struct CGSize { double width; double height; } artworkOverrideSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviewsVertical;
- (id)init;
- (id)initWithWaveformView:(id)a0;
- (void)layoutSubviewsHorizontal;
- (void)updateTextAlignment;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void)updateVisibility;
- (void)updateArtworkStyle;
- (void).cxx_destruct;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (void)updateOnScreen;
- (void)layoutSubviewsSmall;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })suggestionsFrame;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
