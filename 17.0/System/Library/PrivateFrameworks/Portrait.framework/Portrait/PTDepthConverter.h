@class PTMetalContext, MTLRenderPassDescriptor;
@protocol MTLDepthStencilState, MTLRenderPipelineState;

@interface PTDepthConverter : NSObject {
    PTMetalContext *_metalContext;
    MTLRenderPassDescriptor *_GBufferRenderPassDescriptor;
    id<MTLDepthStencilState> _depthStencilState;
    id<MTLRenderPipelineState> _disparityToDepth;
    id<MTLRenderPipelineState> _thresholdedDisparityToDepth;
    id<MTLRenderPipelineState> _segmentationToDepth;
}

- (void).cxx_destruct;
- (id)initWithMetalContext:(id)a0;
- (int)disparityToDepth:(SEL)a0 inBaseDisparity:(id)a1 outDepth:(id)a2 depthNearFar:(id)a3 disparityBias:(float)a4 reverseZ:(BOOL)a5;
- (int)segmentationToDepth:(id)a0 inSegmentation:(SEL)a1 inAlphaMask:(id)a2 outDepth:(id)a3 depthNearFar:(id)a4 segmentationDepthNearFar:(id)a5 reverseZ:(BOOL)a6 threshold:(float)a7;
- (int)thresholdedDisparityToDepth:(id)a0 inBaseDisparity:(SEL)a1 outDepth:(id)a2 depthNearFar:(id)a3 segmentationDepthNearFar:(id)a4 disparityThresholdNearFar:(BOOL)a5 reverseZ:(id)a6 useDisparityBuffer:(void /* unknown type, empty encoding */)a7;

@end
