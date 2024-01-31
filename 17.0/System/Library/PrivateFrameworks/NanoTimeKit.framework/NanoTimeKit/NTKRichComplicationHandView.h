@class CALayer;

@interface NTKRichComplicationHandView : UIView {
    double _beginAngle;
    double _endAngle;
    double _handWidth;
    float _value;
}

@property (readonly, nonatomic) CALayer *dotLayer;
@property (readonly, nonatomic) CALayer *handLayer;

- (void)setValue:(float)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_updateHandTransform;
- (id)initWithDotSize:(double)a0 handWidth:(double)a1 beginAngle:(double)a2 endAngle:(double)a3;

@end
