@class UIView, NSString, UITapGestureRecognizer, PREditingColorVariationStore, PRPosterColor, CAShapeLayer, CALayer, CAGradientLayer, UIPanGestureRecognizer, UIColor;
@protocol PREditorColorPickerColor;

@interface PREditingColorSlider : UIControl

@property (nonatomic) double value;
@property (retain, nonatomic) UIColor *color1;
@property (retain, nonatomic) UIColor *color2;
@property (retain, nonatomic) UIColor *color3;
@property (retain, nonatomic) PRPosterColor *currentColor;
@property (retain, nonatomic) PRPosterColor *displayCurrentColor;
@property (retain, nonatomic) PREditingColorVariationStore *variationStore;
@property (retain, nonatomic) NSString *contextIdentifier;
@property (nonatomic) unsigned long long pickerContext;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (nonatomic) double startPanOffset;
@property (retain, nonatomic) CAGradientLayer *trackLayer;
@property (retain, nonatomic) CAShapeLayer *thumbClippingLayer;
@property (retain, nonatomic) CALayer *thumbContentLayer;
@property (retain, nonatomic) CALayer *thumbSoftShadowLayer;
@property (retain, nonatomic) CAShapeLayer *thumbBorderLayer;
@property (retain, nonatomic) UIView *thumbView;
@property (copy, nonatomic) id<PREditorColorPickerColor> pickerColor;
@property (nonatomic) double variation;

- (void)commonInit;
- (void)traitCollectionDidChange:(id)a0;
- (id)createThumbView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)layoutThumbView;
- (void)_setSliderValue:(double)a0;
- (void)createTrackLayer;
- (void)didTapTrackView:(id)a0;
- (id)initWithVariationStore:(id)a0 contextIdentifier:(id)a1 pickerContext:(unsigned long long)a2;
- (void)thumbViewDidPan:(id)a0;
- (struct CGColor { } *)trackBorderColor;
- (void)updateCurrentColorForCurrentValue;
- (void)updateThumbForCurrentColor;
- (void)updateTrackLayerColors;
- (void)updateVariationInStore;

@end
