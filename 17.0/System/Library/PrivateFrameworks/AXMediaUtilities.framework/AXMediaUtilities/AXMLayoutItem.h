@interface AXMLayoutItem : NSObject

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (readonly, nonatomic) double height;
@property (readonly, nonatomic) double top;
@property (readonly, nonatomic) double bottom;
@property (readonly, nonatomic) double width;
@property (readonly, nonatomic) double left;
@property (readonly, nonatomic) double right;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } normalizedFrame;

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })normalizedBoundingFrameForItem:(id)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundingFrameForItems:(id)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })normalizedBoundingFrameForItems:(id)a0;

- (id)description;
- (double)_floatValueForMetric:(long long)a0;
- (long long)_metricTypeForMetric:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_rectValueForMetric:(long long)a0;
- (BOOL)metric:(long long)a0 inProximityOfMetric:(long long)a1 item:(id)a2 threshold:(double)a3;

@end
