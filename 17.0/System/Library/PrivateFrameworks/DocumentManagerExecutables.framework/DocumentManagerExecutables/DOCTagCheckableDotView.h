@class CAShapeLayer, DOCTagDotView;

@interface DOCTagCheckableDotView : UIView

@property (readonly, nonatomic) DOCTagDotView *tagDotView;
@property (readonly, nonatomic) CAShapeLayer *borderLayer;
@property (nonatomic) long long tagColor;
@property (nonatomic) BOOL checked;

- (void)layoutSublayersOfLayer:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (double)insetForBorderLayer;
- (void)updateBorderLayerVisibility;
- (void)updateLayoutOfLayers;

@end
