@class CAShapeLayer;

@interface CAMSlashMaskView : UIView

@property (readonly, nonatomic) CAShapeLayer *_shapeLayer;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } slashBounds;

+ (Class)layerClass;

- (void)traitCollectionDidChange:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)_updateShapeLayerAnimated:(BOOL)a0;
- (void)setSlashBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 animated:(BOOL)a1;
- (void)updateMaskAnimated;

@end
