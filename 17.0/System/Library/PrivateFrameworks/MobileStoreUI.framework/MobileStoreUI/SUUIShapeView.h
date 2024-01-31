@class CAShapeLayer;

@interface SUUIShapeView : UIView

@property (readonly, retain, nonatomic) CAShapeLayer *layer;

+ (Class)layerClass;

@end
