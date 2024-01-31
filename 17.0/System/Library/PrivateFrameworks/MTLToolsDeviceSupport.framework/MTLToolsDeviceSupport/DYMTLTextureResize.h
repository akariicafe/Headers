@class MTLRenderPassDescriptor, NSMutableDictionary, MTLTextureDescriptor, MTLRenderPipelineDescriptor;
@protocol MTLRenderPipelineState, MTLDepthStencilState, MTLDevice, MTLSamplerState, MTLBuffer, MTLFunction;

@interface DYMTLTextureResize : NSObject {
    id<MTLDepthStencilState> _thumbnailDepthStencilState;
    id<MTLSamplerState> _downscaleSampler;
    id<MTLSamplerState> _upscaleSampler;
    id<MTLBuffer> _quadPositions;
    id<MTLBuffer> _quadTexCoords;
    id<MTLBuffer> _quadIndicies;
    id<MTLFunction> _thumbnailColorFragment;
    id<MTLFunction> _thumbnailDepthFragment;
    id<MTLFunction> _thumbnailStencilFragment;
    id<MTLRenderPipelineState> _thumbnailPipeline;
    MTLRenderPipelineDescriptor *_thumbnailPipelineDescriptor;
    MTLTextureDescriptor *_thumbnailTextureDescriptor;
    MTLRenderPassDescriptor *_thumbnailRenderPass;
    long long configureThumbnail;
    NSMutableDictionary *_thumbnailDictionary;
    NSMutableDictionary *_fragmentFunctionForPixelFormatCache;
}

@property (readonly) id<MTLDevice> device;

+ (id)forDevice:(id)a0;

- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;
- (id)resolveMultisampleTexture:(id)a0 slice:(unsigned long long)a1 level:(unsigned long long)a2 depthPlane:(unsigned long long)a3 commandBuffer:(id)a4;
- (id)_texture2DFromTexture:(id)a0 level:(unsigned long long)a1 slice:(unsigned long long)a2 depthPlane:(unsigned long long)a3 commandBuffer:(id)a4;
- (id)generateThumbnailFromTexture:(id)a0 commandBuffer:(id)a1 resolution:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a2 withFence:(id)a3;
- (void)resizeTexture:(id)a0 resolution:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1 level:(unsigned long long)a2 slice:(unsigned long long)a3 depthPlane:(unsigned long long)a4 inBuffer:(id)a5 withType:(unsigned int)a6 completion:(id /* block */)a7;
- (id)stencilTextureFromTexture:(id)a0 commandBuffer:(id)a1;
- (id)textureFromTexture:(id)a0 slice:(unsigned long long)a1 level:(unsigned long long)a2 depthPlane:(unsigned long long)a3 commandBuffer:(id)a4;
- (id)dataTypeForReturnType:(id)a0;
- (id)generateFragmentFunctionForPixelFormat:(unsigned long long)a0 texture:(id)a1;
- (id)returnTypeForPixelFormat:(unsigned long long)a0;
- (id)textureTypeForPixelFormat:(unsigned long long)a0;

@end
