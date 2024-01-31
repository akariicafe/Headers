@interface WGCheckView : UIView

@property (nonatomic, getter=isChecked) BOOL checked;

+ (Class)layerClass;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (void)_invalidatePath;
- (void)layoutSubviews;
- (id)_shapeLayer;
- (struct CGPath { } *)_newPathForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
