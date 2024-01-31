@class CAShapeLayer;

@interface CKDropZoneCircleView : UIView

@property (readonly, nonatomic) BOOL isAnimating;
@property (retain, nonatomic) CAShapeLayer *dropZoneShapeLayer;

- (void)stopAnimating;
- (void)startAnimating;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_updateShapeLayerStrokeColor;
- (id)spinAnimation;

@end
