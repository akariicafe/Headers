@class MTLDepthStencilDescriptor, MTLRenderPipelineDescriptor;
@protocol MTLDevice, MTLSamplerState, MTLLibrary, MTLBuffer, MTLFunction;

@interface DYMTLTextureRenderer : NSObject {
    id<MTLDevice> _device;
    id<MTLLibrary> _library;
    id<MTLFunction> _vertexFunction;
    id<MTLFunction> _opaqueFragmentFunction;
    id<MTLFunction> _blendingFragmentFunction;
    id<MTLFunction> _blendingFragmentFunction_2dArray;
    MTLRenderPipelineDescriptor *_renderPipelineDescriptor;
    MTLDepthStencilDescriptor *_depthStencilDescriptor;
    id<MTLBuffer> _positionBuffer;
    id<MTLBuffer> _texCoordBuffer;
    struct UniformData { float blendColor[4]; unsigned int layerIndex; unsigned int padding[3]; } _uniformData;
    id<MTLSamplerState> _samplerState;
}

- (id).cxx_construct;
- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;
- (void)setBlendColorRed:(float)a0 green:(float)a1 blue:(float)a2 alpha:(float)a3;
- (unsigned long long)_renderPassPixelFormatFromDescriptor:(id)a0;
- (void)renderTexture:(id)a0 withEncoder:(id)a1 enableBlending:(BOOL)a2 layerIndex:(unsigned int)a3;

@end
