@interface _UIDirectionalRotationView : UIView

@property (nonatomic, getter=isCounterTransformView) BOOL counterTransformView;
@property (nonatomic, getter=isInverseTransformView) BOOL inverseTransformView;

+ (Class)layerClass;

- (id)drLayer;

@end
