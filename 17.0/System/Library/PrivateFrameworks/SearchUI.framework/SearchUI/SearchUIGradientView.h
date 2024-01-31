@class NSArray, CAGradientLayer;

@interface SearchUIGradientView : UIView

@property (retain, nonatomic) NSArray *colors;
@property (readonly, nonatomic) CAGradientLayer *layer;

+ (Class)layerClass;

- (id)init;
- (void).cxx_destruct;

@end
