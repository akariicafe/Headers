@class MRUTransportControls, MRUVisualStylingProvider, MRUTransportButton;
@protocol MRUNowPlayingTransportControlsViewDelegate;

@interface MRUNowPlayingTransportControlsView : UIView

@property (retain, nonatomic) MRUTransportButton *leadingButton;
@property (copy, nonatomic) id /* block */ leadingButtonHandler;
@property (retain, nonatomic) MRUTransportButton *leftButton;
@property (retain, nonatomic) MRUTransportButton *centerButton;
@property (retain, nonatomic) MRUTransportButton *rightButton;
@property (weak, nonatomic) id<MRUNowPlayingTransportControlsViewDelegate> delegate;
@property (retain, nonatomic) MRUTransportControls *transportControls;
@property (readonly, nonatomic) MRUTransportButton *routingButton;
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider;
@property (nonatomic) long long layout;
@property (nonatomic) BOOL showTVRemoteButton;
@property (nonatomic) BOOL showRoutingButton;
@property (nonatomic, getter=isDimmed) BOOL dimmed;

- (BOOL)showLeadingButton;
- (void)didSelectLeadingButton:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)updateVisibility;
- (void).cxx_destruct;
- (void)updateImageConfiguration;
- (void)didSelectRoutingButton:(id)a0;
- (void)layoutSubviews;
- (void)configureLeadingButton;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
