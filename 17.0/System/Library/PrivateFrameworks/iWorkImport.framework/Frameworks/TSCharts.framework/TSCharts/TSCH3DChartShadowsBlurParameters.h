@interface TSCH3DChartShadowsBlurParameters : NSObject

@property (nonatomic) float quality;
@property (nonatomic) long long numPasses;
@property (nonatomic) long long shadowSize;
@property (nonatomic) float kernelScale;

+ (id)paramsWithQuality:(float)a0 numPasses:(long long)a1 shadowSize:(long long)a2 kernelScale:(float)a3;

- (id)initWithQuality:(float)a0 numPasses:(long long)a1 shadowSize:(long long)a2 kernelScale:(float)a3;

@end
