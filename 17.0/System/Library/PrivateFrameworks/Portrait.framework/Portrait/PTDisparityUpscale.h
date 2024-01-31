@class PTMetalContext, PTUtil, NSArray, PTMTLDropHints, MPSImageSpatioTemporalGuidedFilter, NSMutableArray;
@protocol MTLTexture;

@interface PTDisparityUpscale : NSObject {
    PTMetalContext *_metalContext;
    float _upscaleFactor;
    id<MTLTexture> _disparityUpscaled;
    MPSImageSpatioTemporalGuidedFilter *_guidedFilter;
    unsigned long long _width;
    unsigned long long _height;
    PTUtil *_portraitUtil;
    id<MTLTexture> _guideConversionTexture;
    NSArray *_coefficientsTextureArray;
    NSMutableArray *_dropHintsTextures;
    PTMTLDropHints *_textureDropHints;
    BOOL _isShaderHarvesting;
}

- (unsigned long long)height;
- (unsigned long long)width;
- (void).cxx_destruct;
- (id)upscaledTexture;
- (id)guidedUpsampling:(id)a0 inDisparity:(id)a1 inRGBA:(id)a2 colorDepth:(long long)a3;
- (id)initWithMetalContext:(id)a0 colorSize:(struct CGSize { double x0; double x1; })a1 disparitySize:(struct CGSize { double x0; double x1; })a2 config:(id)a3;

@end
