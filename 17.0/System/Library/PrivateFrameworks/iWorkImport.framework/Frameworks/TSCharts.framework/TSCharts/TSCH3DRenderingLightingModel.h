@class NSNumber, TSCH3DLightingModel;

@interface TSCH3DRenderingLightingModel : NSObject {
    NSNumber *_percentage;
}

@property (readonly, nonatomic) TSCH3DLightingModel *lightingModel;
@property (readonly, nonatomic) BOOL hasTransparency;

+ (id)p_lightingModelFromFill:(id)a0 lightings:(id)a1 returningTransparency:(BOOL *)a2;
+ (id)renderingLightingModelWithFill:(id)a0 lightings:(id)a1;
+ (id)renderingLightingModelWithLightingModel:(id)a0 percentage:(id)a1 hasTransparency:(BOOL)a2;

- (void).cxx_destruct;
- (void)affect:(id)a0 states:(id)a1 scene:(id)a2 texturePool:(id)a3;
- (id)initWithLightingModel:(id)a0 percentage:(id)a1 hasTransparency:(BOOL)a2;

@end
