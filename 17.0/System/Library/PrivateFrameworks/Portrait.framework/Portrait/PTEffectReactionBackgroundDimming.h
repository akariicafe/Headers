@class PTMetalContext;
@protocol MTLComputePipelineState;

@interface PTEffectReactionBackgroundDimming : NSObject {
    PTMetalContext *_metalContext;
    id<MTLComputePipelineState> _backgroundDimAndConvertYUVtoRGB[9];
}

- (void).cxx_destruct;
- (id)initWithMetalContext:(id)a0;
- (int)backgroundDimAndConvertRGBLinearFromPTTexture:(id)a0 inPTTexture:(id)a1 inCenteredDisparity:(id)a2 outRGBA:(id)a3 dimmingFactor:(float)a4;

@end
