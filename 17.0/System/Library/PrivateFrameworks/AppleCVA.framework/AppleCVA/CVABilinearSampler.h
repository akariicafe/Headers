@class MTLRenderPassDescriptor, MTLRenderPipelineDescriptor;
@protocol MTLDevice, MTLRenderPipelineState;

@interface CVABilinearSampler : NSObject {
    id<MTLDevice> _device;
    MTLRenderPassDescriptor *_renderPassDescriptor;
    MTLRenderPipelineDescriptor *_renderPipelineDescriptor;
    id<MTLRenderPipelineState> _renderPipelineState;
    struct { void /* unknown type, empty encoding */ position; void /* unknown type, empty encoding */ texcoord; } _vertexData[4];
}

- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;
- (void)encodeToCommandBuffer:(id)a0 sourceTexture:(id)a1 sourceQuad:(struct { void /* unknown type, empty encoding */ x0[4]; })a2 destinationTexture:(id)a3 destinationQuad:(struct { void /* unknown type, empty encoding */ x0[4]; })a4;

@end
