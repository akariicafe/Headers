@class CAGradientLayer;

@interface SearchUIGradientMaskView : UIView

@property (retain, nonatomic) CAGradientLayer *layer;

+ (Class)layerClass;

- (id)init;

@end
