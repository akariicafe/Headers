@class CAShapeLayer;

@interface SKUIShapeView : UIView

@property (readonly, retain, nonatomic) CAShapeLayer *layer;

+ (Class)layerClass;

@end
