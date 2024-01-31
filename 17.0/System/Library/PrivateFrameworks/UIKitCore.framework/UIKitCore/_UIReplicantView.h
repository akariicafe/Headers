@class _UIReplicantLayer;

@interface _UIReplicantView : UIView

@property (readonly, nonatomic) _UIReplicantLayer *_layer;

+ (Class)layerClass;

- (id)initWithSurface:(const struct _UIRenderingSurface { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; double x1; } *)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initAsCopyOf:(id)a0;

@end
