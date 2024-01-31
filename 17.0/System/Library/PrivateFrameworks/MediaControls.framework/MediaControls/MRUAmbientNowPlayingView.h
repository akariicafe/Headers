@class UIView, NSString, UIImageSymbolConfiguration, MRUFlippingArtworkView, MRUAmbientNowPlayingVolumeControlsView, MRUNowPlayingTimeControlsView, UILayoutGuide, MRUNowPlayingLabelView, NSLayoutConstraint, MRUVisualStylingProvider, MRUTransportButton;

@interface MRUAmbientNowPlayingView : UIView <MRUSliderObserver> {
    UIImageSymbolConfiguration *_leftRightTransportButtonsSymbolConfiguration;
    UIImageSymbolConfiguration *_routingButtonSymbolConfiguration;
    UIImageSymbolConfiguration *_routingButtonSymbolConfigurationSmall;
}

@property (retain, nonatomic) UIView *shadowView;
@property (retain, nonatomic) NSLayoutConstraint *artworkViewTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *artworkViewBottomConstraint;
@property (retain, nonatomic) NSLayoutConstraint *boundsLayoutGuideLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *boundsLayoutGuideTrailingConstraint;
@property (retain, nonatomic) UILayoutGuide *boundsLayoutGuide;
@property (retain, nonatomic) UILayoutGuide *transportControlsLayoutGuide;
@property (retain, nonatomic) UILayoutGuide *leftButtonLayoutGuide;
@property (retain, nonatomic) UILayoutGuide *rightButtonLayoutGuide;
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider;
@property (weak, nonatomic) UIView *backgroundView;
@property (readonly, nonatomic) MRUFlippingArtworkView *artworkView;
@property (readonly, nonatomic) MRUNowPlayingLabelView *labelView;
@property (readonly, nonatomic) MRUNowPlayingTimeControlsView *timeControlsView;
@property (readonly, nonatomic) MRUTransportButton *leftButton;
@property (readonly, nonatomic) MRUTransportButton *centerButton;
@property (readonly, nonatomic) MRUTransportButton *rightButton;
@property (readonly, nonatomic) MRUTransportButton *routingButton;
@property (readonly, nonatomic) MRUAmbientNowPlayingVolumeControlsView *volumeControlsView;
@property (nonatomic, getter=isOnScreen) BOOL onScreen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setNowPlayingInfo:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setTransportControls:(id)a0;
- (void)updateVisualStyling;
- (void).cxx_destruct;
- (void)safeAreaInsetsDidChange;
- (void)layoutSubviews;
- (void)createConstraints;
- (void)setRoutingButtonImage:(id)a0;
- (void)sliderInteractionWillExtend:(id)a0 insets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;

@end
