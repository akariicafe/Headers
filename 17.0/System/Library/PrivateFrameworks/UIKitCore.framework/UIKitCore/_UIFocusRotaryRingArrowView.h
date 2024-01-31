@class CAShapeLayer;

@interface _UIFocusRotaryRingArrowView : UIView {
    CAShapeLayer *_shapeLayer;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)_trianglePath;
- (void)_updateShapePath;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 color:(id)a1;
- (void)updateArrowColor:(id)a0;

@end
