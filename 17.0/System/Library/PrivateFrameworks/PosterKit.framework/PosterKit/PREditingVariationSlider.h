@class NSString, CAShapeLayer, PREditingPosterContentStyleCoordinator, UIView, UIPanGestureRecognizer, CALayer;

@interface PREditingVariationSlider : UIControl

@property (nonatomic) double value;
@property (retain, nonatomic) NSString *contextIdentifier;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (nonatomic) double startPanOffset;
@property (retain, nonatomic) UIView *trackView;
@property (retain, nonatomic) CAShapeLayer *thumbClippingLayer;
@property (retain, nonatomic) CALayer *thumbContentLayer;
@property (retain, nonatomic) CALayer *thumbSoftShadowLayer;
@property (retain, nonatomic) CAShapeLayer *thumbBorderLayer;
@property (retain, nonatomic) UIView *thumbContainerView;
@property (retain, nonatomic) UIView *thumbContentView;
@property (nonatomic) double variation;
@property (retain, nonatomic) PREditingPosterContentStyleCoordinator *styleCoordinator;

+ (double)defaultHeight;
+ (double)defaultTrackHeight;

- (void)commonInit;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)layoutThumbView;
- (void)_setSliderValue:(double)a0;
- (id)initWithStyleCoordinator:(id)a0 contextIdentifier:(id)a1;
- (void)setupThumbView;
- (void)thumbViewDidPan:(id)a0;
- (struct CGColor { } *)trackBorderColor;
- (void)updateThumbContentView;
- (void)updateTrack;

@end
