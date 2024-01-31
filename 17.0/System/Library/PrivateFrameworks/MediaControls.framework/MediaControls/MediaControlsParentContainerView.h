@class MediaControlsContainerView, MediaControlsSeparatorView, MediaControlsTimeControl, UIView, MediaControlsTransportStackView;

@interface MediaControlsParentContainerView : UIView

@property (retain, nonatomic) UIView *mediaControlsRoutingPickerView;
@property (nonatomic) long long routingViewControllerAnimationCount;
@property (nonatomic) long long style;
@property (nonatomic) long long selectedMode;
@property (retain, nonatomic) MediaControlsContainerView *containerView;
@property (retain, nonatomic) MediaControlsTransportStackView *transportStackView;
@property (retain, nonatomic) MediaControlsTimeControl *timeControl;
@property (retain, nonatomic) UIView *routingView;
@property (retain, nonatomic) MediaControlsSeparatorView *topDividerView;
@property (retain, nonatomic) MediaControlsSeparatorView *bottomDividerView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)setSelectedMode:(long long)a0 animated:(BOOL)a1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)_setInitialFrameForRoutingView:(id)a0;
- (void)_toggleRoutingPickerAnimated:(BOOL)a0;
- (void)_updateRoutingPickerVisibilityAnimated:(BOOL)a0;
- (void)_updateTimeControlVisibility:(id)a0;
- (void)handleHoverGestureRecognizer:(id)a0;

@end
