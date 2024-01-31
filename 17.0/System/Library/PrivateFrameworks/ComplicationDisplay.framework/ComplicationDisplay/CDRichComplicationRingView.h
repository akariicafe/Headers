@class NSString, CAShapeLayer, UIView;
@protocol CLKMonochromeFilterProvider;

@interface CDRichComplicationRingView : CDRichComplicationShapeView <CLKMonochromeComplicationView> {
    double _curveWidth;
    double _padding;
    UIView *_foregroundView;
    CAShapeLayer *_headLayer;
    CAShapeLayer *_tailLayer;
    CAShapeLayer *_tailStrokeLayer;
}

@property (nonatomic) BOOL clockwise;
@property (weak, nonatomic) id<CLKMonochromeFilterProvider> filterProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_disabledLayerActions;

- (void)setProgress:(double)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_updateGradient;
- (double)_shapeLineWidth;
- (struct CGPath { } *)_generatePath;
- (id)_normalizeGradientLocations:(id)a0;
- (struct CGPoint { double x0; double x1; })_pointAtProgress:(float)a0;
- (void)_setupGradientLayer:(id)a0;
- (BOOL)_shouldReverseGradient;
- (id)initWithCurveWidth:(double)a0 padding:(double)a1 forDevice:(id)a2 withFilterStyle:(long long)a3;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;
- (id)_createHeadTailViewWithStartAngle:(double)a0 endAngle:(double)a1 clockwise:(BOOL)a2 additionalWidth:(double)a3;
- (void)_layoutHeadTailView:(id)a0 forProgress:(double)a1;

@end
