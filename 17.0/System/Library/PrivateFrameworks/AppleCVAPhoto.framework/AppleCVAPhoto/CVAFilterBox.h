@class NSString;
@protocol MTLPipelineLibrarySPI, MTLResourceGroupSPI, MTLLibrary, MTLTexture, MTLComputePipelineState, MTLDeviceSPI;

@interface CVAFilterBox : NSObject {
    id<MTLDeviceSPI> _device;
    id<MTLLibrary> _library;
    id<MTLPipelineLibrarySPI> _pipelineLibrary;
    struct { unsigned long long width; unsigned long long height; unsigned long long depth; } _textureSize;
    id<MTLTexture> _boxIntermediateTexture_rgba;
    id<MTLTexture> _boxIntermediateTexture_r;
    id<MTLResourceGroupSPI> _intermediateTextureResourceGroup;
    id<MTLComputePipelineState> _box_float_pass_horiz_kernel;
    id<MTLComputePipelineState> _box_float4_pass_horiz_kernel;
    id<MTLComputePipelineState> _box_normValid_float_pass_vert_kernel;
    id<MTLComputePipelineState> _box_norm_float_pass_vert_kernel;
    id<MTLComputePipelineState> _box_float_pass_vert_kernel;
    id<MTLComputePipelineState> _box_normValid_float4_pass_vert_kernel;
    id<MTLComputePipelineState> _box_norm_float4_pass_vert_kernel;
    id<MTLComputePipelineState> _box_float4_pass_vert_kernel;
}

@property (readonly) NSString *label;

- (void)encodeBoxHorizontalToCommandBuffer:(id)a0 configBuffer:(const struct BoxFilterConfig { int x0; } *)a1 source:(id)a2 destination:(id)a3;
- (void)encodeBoxVerticalToCommandBuffer:(id)a0 configBuffer:(const struct BoxFilterConfig { int x0; } *)a1 source:(id)a2 destination:(id)a3 normalize:(long long)a4;
- (id)initWithDevice:(id)a0 library:(id)a1 pipelineLibrary:(id)a2 textureSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a3 error:(id *)a4;
- (void)encodeToCommandBuffer:(id)a0 inTexture:(id)a1 outTexture:(id)a2 radius:(unsigned long long)a3 normalize:(long long)a4;
- (void).cxx_destruct;

@end
