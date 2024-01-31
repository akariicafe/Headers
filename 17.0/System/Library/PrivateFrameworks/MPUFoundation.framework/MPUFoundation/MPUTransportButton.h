@class UIColor, MPUTransportButtonEventHandler, NSString, UIImage, CALayer;

@interface MPUTransportButton : UIButton <MPUTransportButton> {
    MPUTransportButtonEventHandler *_transportButtonEventHandler;
    CALayer *_selectionIndicatorLayer;
}

@property (retain, nonatomic) UIColor *regularColor;
@property (retain, nonatomic) UIColor *disabledColor;
@property (retain, nonatomic) UIColor *highlightedColor;
@property (retain, nonatomic) UIColor *selectedColor;
@property (nonatomic) BOOL shouldInferColorsFromTintColor;
@property (nonatomic) BOOL shouldShowBackgroundForSelectedState;
@property (retain, nonatomic) UIImage *transportButtonImage;
@property (readonly, nonatomic) MPUTransportButtonEventHandler *transportButtonEventHandler;
@property (nonatomic) BOOL adjustsImageWhenHighlighted;
@property (nonatomic) long long transportButtonImageViewContentMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)transportButton;
+ (id)_stringForDisplayedSkipInterval:(double)a0;
+ (id)defaultDisabledColor;
+ (id)defaultHighlightedColor;
+ (id)defaultRegularColor;
+ (id)defaultSelectedColor;
+ (id)skipIntervalImageForInterval:(double)a0 baseImage:(id)a1 font:(id)a2 scale:(double)a3;

- (void)cancelTrackingWithEvent:(id)a0;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setEnabled:(BOOL)a0;
- (BOOL)isEnabled;
- (BOOL)beginTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)endTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)setSelected:(BOOL)a0;
- (BOOL)shouldTrack;
- (void)_updateDisabledTransportButtonImage;
- (void)_updateHighlightedTransportButtonImage;
- (void)_updateRegularTransportButtonImage;
- (void)_updateSelectedTransportButtonImage;
- (void)applyTransportButtonLayoutAttributes:(struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; })a0;
- (BOOL)wantsCustomHighlightAppearance;

@end
