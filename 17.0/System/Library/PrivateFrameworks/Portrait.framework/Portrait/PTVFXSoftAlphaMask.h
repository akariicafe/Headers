@class PTUtil;
@protocol MTLTexture, MTLComputePipelineState;

@interface PTVFXSoftAlphaMask : NSObject {
    id<MTLComputePipelineState> _disparityToAlphaMask;
    id<MTLComputePipelineState> _boxFilterHorizontal;
    id<MTLComputePipelineState> _boxFilterVertical;
    PTUtil *_util;
    id<MTLTexture> _intermediateTextureMask;
    id<MTLTexture> _intermediateTextureBox;
}

@property (readonly) id<MTLTexture> alphaMask;

- (void).cxx_destruct;
- (int)boxFilter:(id)a0 mask:(id)a1;
- (id)initWithMetalContext:(id)a0 size:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1;
- (int)updateSoftAlphaMask:(id)a0 inDisparity:(id)a1 focusDisparityModifiers:(id)a2;
- (int)updateSoftAlphaMask:(id)a0 inSegmentation:(id)a1;

@end
