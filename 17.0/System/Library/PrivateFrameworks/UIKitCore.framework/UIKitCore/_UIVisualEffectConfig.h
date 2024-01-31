@class _UIVisualEffectLayerConfig, NSMutableArray;

@interface _UIVisualEffectConfig : NSObject

@property (readonly, nonatomic) NSMutableArray *layerConfigs;
@property (readonly, nonatomic) _UIVisualEffectLayerConfig *contentConfig;

+ (id)configWithContentConfig:(id)a0;
+ (id)configWithLayerConfigs:(id)a0;

- (void)addLayerConfig:(id)a0;
- (void)enumerateLayerConfigs:(id /* block */)a0;
- (id)description;
- (void).cxx_destruct;

@end
