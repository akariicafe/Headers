@class UIColor;

@interface _UIVisualEffectTintLayerConfig : _UIVisualEffectLayerConfig

@property (readonly, nonatomic) UIColor *tintColor;

+ (id)layerWithTintColor:(id)a0;
+ (id)layerWithTintColor:(id)a0 filterType:(id)a1;

- (id)description;
- (void)configureLayerView:(id)a0;
- (void).cxx_destruct;
- (void)deconfigureLayerView:(id)a0;

@end
