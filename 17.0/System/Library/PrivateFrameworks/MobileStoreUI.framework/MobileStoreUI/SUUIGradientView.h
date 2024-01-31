@class CAGradientLayer;

@interface SUUIGradientView : UIView

@property (readonly, retain, nonatomic) CAGradientLayer *layer;

+ (Class)layerClass;

@end
