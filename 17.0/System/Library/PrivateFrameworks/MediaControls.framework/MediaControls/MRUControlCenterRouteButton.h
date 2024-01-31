@class MRURouteTextFormatter, UIView, NSString, MPAVRoute, UIImageView, NSLayoutConstraint, MRUVisualStylingProvider, UILabel;

@interface MRUControlCenterRouteButton : UIControl <MRUVisualStylingProviderObserver, UIPointerInteractionDelegate>

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) MPAVRoute *route;
@property (nonatomic) BOOL showRouteLabel;
@property (nonatomic) BOOL shouldHighlightBackground;
@property (retain, nonatomic) NSLayoutConstraint *imageViewLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *labelLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *labelWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *backgroundViewFullWidthConstraint;
@property (retain, nonatomic) MRURouteTextFormatter *routeTextFormatter;
@property (readonly, nonatomic) UIImageView *imageView;
@property (nonatomic, getter=isOnScreen) BOOL onScreen;
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider;
@property (copy, nonatomic) id /* block */ imageForRoute;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)updateImageAnimated:(BOOL)a0;
- (void)updateBackgroundView;
- (void)setImage:(id)a0 animated:(BOOL)a1;
- (void)updateContentSizeCategory;
- (void)updateLayout;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setHighlighted:(BOOL)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateVisualStyling;
- (void)visualStylingProviderDidChange:(id)a0;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void)updateVisibility;
- (void)updateHighlighted;
- (void).cxx_destruct;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (void)updateRouteLabel;
- (void)layoutSubviews;
- (BOOL)isExpanded;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)createConstraints;
- (id)predictedOutputDeviceFromRoute:(id)a0;
- (void)updateShouldHighlightBackground;
- (double)estimatedBackgroundViewWidth;
- (double)labelMaxWidth;
- (void)setRoute:(id)a0 showRouteLabel:(BOOL)a1;
- (void)updateRouteAppearanceAnimated:(BOOL)a0;

@end
