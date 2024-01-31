@class UIBezierPath, CAShapeLayer;

@interface VKCDataDetectorHighlightView : VKPlatformView

@property (readonly, nonatomic) CAShapeLayer *shapeLayer;
@property (retain, nonatomic) UIBezierPath *path;
@property (nonatomic) BOOL hideDashedLine;

+ (Class)layerClass;
+ (id)highlightColor;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didMoveToSuperview;
- (void).cxx_destruct;
- (void)configureDashPatternForPath:(id)a0;

@end
