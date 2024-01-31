@class CALayer, NSArray, CAShapeLayer;

@interface CACZWLensChromeView : UIView

@property (nonatomic) double lensCornerRadius;
@property (retain, nonatomic) CAShapeLayer *chromeOuterBorderLayer;
@property (retain, nonatomic) CAShapeLayer *chromeInnerBorderLayer;
@property (retain, nonatomic) CAShapeLayer *lensResizingHandlesLayer;
@property (retain, nonatomic) CAShapeLayer *touchStealerShapeLayer;
@property (retain, nonatomic) CALayer *grabberOverlayLayer;
@property (retain, nonatomic) CALayer *backdropLayer;
@property (retain, nonatomic) CAShapeLayer *backdropMaskShapeLayer;
@property (retain, nonatomic) CAShapeLayer *backdropGrabberMaskLayer;
@property (retain, nonatomic) CAShapeLayer *backdropResizingMaskLayer;
@property (retain, nonatomic) NSArray *resizeElements;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } previousResizeBounds;
@property (nonatomic) BOOL showingResizeHandles;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)showLensResizingHandles:(BOOL)a0 animated:(BOOL)a1;
- (void)updateChromeVisibility:(BOOL)a0 animated:(BOOL)a1 completion:(id /* block */)a2;

@end
