@class NSArray;

@interface NTKRichComplicationLineMeteredView : NTKRichComplicationLineView

@property (retain, nonatomic) NSArray *meterLayers;

- (void)setProgress:(double)a0;
- (void).cxx_destruct;
- (void)_updateGradient;
- (struct CGPoint { double x0; double x1; })_pointAtProgress:(float)a0;
- (void)_setupShapeLayer:(id)a0;
- (id)_shapeStrokeColor;
- (void)colorMetersWithProgress:(double)a0;

@end
