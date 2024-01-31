@class MPRouteButton, NATouchInsetsButton, MPMediaControls;
@protocol NANowPlayingBottomControlsDelegate;

@interface NANowPlayingBottomControls : UIView

@property (retain, nonatomic) NATouchInsetsButton *playbackSpeedButton;
@property (retain, nonatomic) NATouchInsetsButton *sizingPlaybackSpeedButton;
@property (retain, nonatomic) MPRouteButton *routeButton;
@property (retain, nonatomic) MPMediaControls *mediaControls;
@property (weak, nonatomic) id<NANowPlayingBottomControlsDelegate> delegate;

+ (id)_accessibilityValueForRate:(double)a0;
+ (id)_labelForRate:(double)a0;

- (void)dealloc;
- (void)setRate:(double)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)routeDidChange:(id)a0;
- (void)playbackSpeedButtonTapped:(id)a0;
- (id)buttonTitleFont;
- (void)dismissAirplayPicker;
- (double)iconCenterY;
- (void)layoutPlaybackSpeedButton;
- (void)layoutRouteButton;
- (void)routeButtonTapped:(id)a0;
- (void)routeButtonTouchDown:(id)a0;
- (void)routeButtonTouchUpOutside:(id)a0;
- (double)spacingBetweenButtonCenters;
- (void)startAirplayStatusUpdates;
- (void)updateRouteButtonWithRoute:(id)a0;
- (double)widestPlaybackSpeedLabelWidth;

@end
