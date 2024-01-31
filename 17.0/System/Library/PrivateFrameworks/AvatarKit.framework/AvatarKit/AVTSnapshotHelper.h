@class UIColor, MTLRenderPassDescriptor;
@protocol MTLDevice, MTLTexture, MTLCommandQueue, MTLComputePipelineState;

@interface AVTSnapshotHelper : NSObject {
    id<MTLDevice> _device;
    id<MTLCommandQueue> _commandQueue;
    MTLRenderPassDescriptor *_renderPassDescriptor;
    BOOL _supportsReadWriteTexture;
    id<MTLTexture> _convertPremultipliedAlphaTexture;
    id<MTLTexture> _convertPremultipliedAlphaTextureView;
    id<MTLTexture> _convertPremultipliedAlphaExtraTexture;
    id<MTLComputePipelineState> _convertPremultipliedAlphaPipelineState;
    unsigned long long _pixelWidth;
    unsigned long long _pixelHeight;
    unsigned long long _antialiasingMode;
    UIColor *_backgroundColor;
    struct { double red; double green; double blue; double alpha; } _backgroundColorForMetal;
    struct CGContext { } *_bitmapContext;
}

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)_isRenderPassDescriptorValid;
- (void)_rebuildBitmapContextIfNeeded;
- (void)_rebuildRenderPassDescriptorIfNeeded;

@end
