@class PTMetalContext, PTOpticalFlow, PTDisparityFilterEMA_LKT;
@protocol MTLTexture;

@interface PTEffectTemporalFilter : NSObject {
    PTMetalContext *_metalContext;
    PTOpticalFlow *_opticalFlow;
    int _indexIn;
    int _indexOut;
    id<MTLTexture> _temporalDisparity[2];
    id<MTLTexture> _temporalNormal[2];
    BOOL _enableNormalsFiltering;
    PTDisparityFilterEMA_LKT *_disparityFilter;
}

- (unsigned int)reset;
- (void).cxx_destruct;
- (id)displacementFWD;
- (unsigned int)emaFilterDisparityNormal:(id)a0 inDisparity:(id)a1 inNormal:(id)a2 frameIndex:(int)a3 scale:(float)a4;
- (id)disparityFiltered;
- (unsigned int)gaussEMAFilterDisparityNormal:(id)a0 inDisparity:(id)a1 inNormal:(id)a2 frameIndex:(int)a3 scale:(float)a4;
- (id)initWithMetalContext:(id)a0 disparitySize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1 enableNormalsFiltering:(BOOL)a2;
- (id)normalFiltered;
- (unsigned int)prepareFilter:(id)a0 opticalFlowRGB:(id)a1 frameIndex:(int)a2;

@end
