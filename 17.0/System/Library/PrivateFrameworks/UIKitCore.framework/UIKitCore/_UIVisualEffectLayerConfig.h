@class NSString, UIColor;

@interface _UIVisualEffectLayerConfig : NSObject

@property (readonly, nonatomic) double opacity;
@property (readonly, nonatomic) NSString *filterType;
@property (readonly, nonatomic) UIColor *fillColor;

+ (id)layerWithFillColor:(id)a0 opacity:(double)a1 filterType:(id)a2;

- (id)description;
- (void)configureLayerView:(id)a0;
- (void).cxx_destruct;
- (void)deconfigureLayerView:(id)a0;

@end
