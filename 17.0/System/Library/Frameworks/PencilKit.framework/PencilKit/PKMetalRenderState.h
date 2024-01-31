@class NSMutableArray, NSMutableSet;
@protocol MTLCommandBuffer, MTLRenderCommandEncoder, MTLTexture, MTLCommandQueue, MTLComputeCommandEncoder;

@interface PKMetalRenderState : NSObject {
    NSMutableArray *_commandBuffers;
    NSMutableSet *_purgeableFramebuffers;
    NSMutableSet *_extendedLifetimeObjects;
    struct PKShaderPipelineConfig { unsigned char framebufferPixelFormats[6]; } _defaultPipelineConfig;
    BOOL _liveRendering;
    BOOL _waitUntilCompletedOnCommit;
    BOOL _msaaRendering;
    BOOL _renderOnPaper;
    BOOL _needRenderMask;
    BOOL _renderGroupMaskedRendering;
    BOOL _useAccumulatorsAsPaintFramebuffers;
    BOOL _needPaintAccumulator;
    id<MTLCommandQueue> _commandQueue;
    id<MTLCommandBuffer> _commandBuffer;
    id<MTLCommandBuffer> _computeCommandBuffer;
    id<MTLCommandBuffer> _maskCommandBuffer;
    id<MTLRenderCommandEncoder> _renderEncoder;
    id<MTLComputeCommandEncoder> _computeEncoder;
    id<MTLRenderCommandEncoder> _maskRenderEncoder;
    unsigned long long _vertexEncodeCount;
    id<MTLTexture> _destinationTexture;
    unsigned long long _destinationColorAttachmentIndex;
    long long _sixChannelRenderMode;
    id<MTLTexture> _sixChannelContentTexture;
    unsigned long long _numPaintFramebuffers;
    struct { unsigned long long x; unsigned long long y; unsigned long long width; unsigned long long height; } _scissorRect;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _renderTextureTexCoordTransform;
}

+ (void)renderTargetBarrierForRenderEncoder:(id)a0;

- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;

@end
