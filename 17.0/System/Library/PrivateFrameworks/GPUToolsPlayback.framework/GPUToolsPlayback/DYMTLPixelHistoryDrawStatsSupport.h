@class MTLRenderPassDescriptor, MTLTextureDescriptor, DYMTLCommonDebugFunctionPlayer, NSMutableArray;
@protocol MTLCommandBuffer, MTLTexture, MTLBuffer, DYMTLStatefulParallelRenderCommandEncoder, MTLFunction, MTLRenderPipelineState, MTLLibrary, DYMTLStatefulRenderCommandEncoder;

@interface DYMTLPixelHistoryDrawStatsSupport : NSObject {
    DYMTLCommonDebugFunctionPlayer *_player;
    id<MTLLibrary> _solidLibrary;
    id<MTLFunction> _solidCreationFragmentFunction;
    MTLTextureDescriptor *_stencilTextureDescriptor;
    NSMutableArray *_mockColorTextureDescriptors;
    MTLTextureDescriptor *_mockStencilTextureDescriptor;
    MTLTextureDescriptor *_mockDepthTextureDescriptor;
    id<MTLTexture> _stencilTexture;
    NSMutableArray *_mockColorTextures;
    id<MTLBuffer> _visibilityResultBuffer;
    MTLRenderPassDescriptor *_pixelHistoryRenderPassDescriptor;
    MTLRenderPassDescriptor *_pixelHistoryMockRenderPassDescriptor;
    MTLRenderPassDescriptor *_pixelHistoryVisibilityMockRenderPassDescriptor;
    id<MTLRenderPipelineState> _pixelHistorySolidRenderPipelineState;
    id<DYMTLStatefulRenderCommandEncoder> _savedVertexFragmentState;
    unsigned long long _originalCommandEncoderId;
    id<MTLCommandBuffer> _originalCommandBuffer;
    id<DYMTLStatefulRenderCommandEncoder> _originalEncoder;
    id<DYMTLStatefulParallelRenderCommandEncoder> _originalParallelEncoder;
    BOOL _supports_tessellation;
}

@property (retain, nonatomic) id<MTLTexture> mockStencilTexture;
@property (retain, nonatomic) id<MTLTexture> mockDepthTexture;

- (void).cxx_destruct;
- (BOOL)_prepareWithEncoder:(id)a0 parallelEncoder:(id)a1 pipelineState:(id)a2 renderPassDescriptor:(struct DYMTLRenderPassDescriptor { unsigned long long x0; unsigned long long x1; struct DYMTLRenderPassAttachmentDescriptor { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; struct DYMTLClearValue { union { struct { double x0; double x1; double x2; double x3; } x0; double x1[4]; } x0; } x11; BOOL x12; unsigned long long x13; unsigned long long x14; } x2[8]; struct DYMTLRenderPassAttachmentDescriptor { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; struct DYMTLClearValue { union { struct { double x0; double x1; double x2; double x3; } x0; double x1[4]; } x0; } x11; BOOL x12; unsigned long long x13; unsigned long long x14; } x3; struct DYMTLRenderPassAttachmentDescriptor { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; struct DYMTLClearValue { union { struct { double x0; double x1; double x2; double x3; } x0; double x1[4]; } x0; } x11; BOOL x12; unsigned long long x13; unsigned long long x14; } x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; struct DYMTLSamplePosition { float x0; float x1; } x13[8]; unsigned long long x14; BOOL x15; BOOL x16; BOOL x17; } *)a3;
- (BOOL)_updateTextureDescriptor:(id)a0 usingEncoder:(id)a1 renderPassDescriptor:(struct DYMTLRenderPassDescriptor { unsigned long long x0; unsigned long long x1; struct DYMTLRenderPassAttachmentDescriptor { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; struct DYMTLClearValue { union { struct { double x0; double x1; double x2; double x3; } x0; double x1[4]; } x0; } x11; BOOL x12; unsigned long long x13; unsigned long long x14; } x2[8]; struct DYMTLRenderPassAttachmentDescriptor { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; struct DYMTLClearValue { union { struct { double x0; double x1; double x2; double x3; } x0; double x1[4]; } x0; } x11; BOOL x12; unsigned long long x13; unsigned long long x14; } x3; struct DYMTLRenderPassAttachmentDescriptor { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; struct DYMTLClearValue { union { struct { double x0; double x1; double x2; double x3; } x0; double x1[4]; } x0; } x11; BOOL x12; unsigned long long x13; unsigned long long x14; } x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; struct DYMTLSamplePosition { float x0; float x1; } x13[8]; unsigned long long x14; BOOL x15; BOOL x16; BOOL x17; } *)a2;
- (void)collectPixelHistoryStencilDrawStatsAtX:(unsigned long long)a0 y:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)collectPixelHistoryVisibilityDrawStatsAtCompletion:(id /* block */)a0;
- (BOOL)createNumFragmentPassesRenderCommandEncoderInCommandBuffer:(id)a0 originalRenderPassDescriptor:(id)a1 originalPipeline:(id)a2;
- (BOOL)createNumTotalRenderCommandEncoderInCommandBuffer:(id)a0 originalPipeline:(id)a1;
- (BOOL)createNumVisibleRenderCommandEncoderInCommandBuffer:(id)a0 originalRenderPassDescriptor:(id)a1 originalPipeline:(id)a2 depthStencilDescriptor:(id)a3 mockDepthStencilTexture:(id)a4 visibilityResultMode:(unsigned long long)a5 atX:(unsigned long long)a6 y:(unsigned long long)a7;
- (BOOL)createNumVisibleRenderCommandEncoderInCommandBuffer:(id)a0 originalRenderPassDescriptor:(id)a1 originalPipeline:(id)a2 depthStencilDescriptor:(id)a3 mockDepthTexture:(id)a4 visibilityResultMode:(unsigned long long)a5 atX:(unsigned long long)a6 y:(unsigned long long)a7;
- (BOOL)createNumVisibleRenderCommandEncoderInCommandBuffer:(id)a0 originalRenderPassDescriptor:(id)a1 originalPipeline:(id)a2 depthStencilDescriptor:(id)a3 mockStencilTexture:(id)a4 visibilityResultMode:(unsigned long long)a5 atX:(unsigned long long)a6 y:(unsigned long long)a7;
- (id)getSingleUseMockColorTexture:(unsigned long long)a0 pixelFormat:(unsigned long long)a1 width:(unsigned long long)a2 height:(unsigned long long)a3;
- (id)getSingleUseMockDepthTextureWithPixelFormat:(unsigned long long)a0 width:(unsigned long long)a1 height:(unsigned long long)a2;
- (id)getSingleUseMockStencilTextureWithPixelFormat:(unsigned long long)a0 width:(unsigned long long)a1 height:(unsigned long long)a2;
- (id)initWithDebugFunctionPlayer:(id)a0;
- (BOOL)prepareWithCommandEncoderId:(unsigned long long)a0 parallelEncoderId:(unsigned long long)a1 pipelineId:(unsigned long long)a2 renderPassDescriptor:(struct DYMTLRenderPassDescriptor { unsigned long long x0; unsigned long long x1; struct DYMTLRenderPassAttachmentDescriptor { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; struct DYMTLClearValue { union { struct { double x0; double x1; double x2; double x3; } x0; double x1[4]; } x0; } x11; BOOL x12; unsigned long long x13; unsigned long long x14; } x2[8]; struct DYMTLRenderPassAttachmentDescriptor { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; struct DYMTLClearValue { union { struct { double x0; double x1; double x2; double x3; } x0; double x1[4]; } x0; } x11; BOOL x12; unsigned long long x13; unsigned long long x14; } x3; struct DYMTLRenderPassAttachmentDescriptor { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; struct DYMTLClearValue { union { struct { double x0; double x1; double x2; double x3; } x0; double x1[4]; } x0; } x11; BOOL x12; unsigned long long x13; unsigned long long x14; } x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; struct DYMTLSamplePosition { float x0; float x1; } x13[8]; unsigned long long x14; BOOL x15; BOOL x16; BOOL x17; } *)a3;

@end
