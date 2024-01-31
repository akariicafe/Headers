@protocol MTLBuffer, MTLDevice, MTLLibrary, MTLTexture, MTLCommandQueue, MTLComputePipelineState;

@interface VCPAV1Metal : NSObject {
    id<MTLDevice> _device;
    id<MTLCommandQueue> _commandQueue;
    id<MTLLibrary> _library;
    id<MTLComputePipelineState> _blitKernelUnorm;
    id<MTLComputePipelineState> _blitKernelLuma;
    id<MTLComputePipelineState> _blitKernelChroma;
    id<MTLComputePipelineState> _filmGrainLuma;
    id<MTLComputePipelineState> _filmGrainChroma;
    int _gpuBitdepth;
    int _layout;
    BOOL _onePixelPerWrite;
    BOOL _integerWrites;
    struct CF<__CVMetalTextureCache *> { struct __CVMetalTextureCache *value_; } _textureCacheSrc[2];
    struct CF<__CVMetalTextureCache *> { struct __CVMetalTextureCache *value_; } _textureCacheDst[2];
    BOOL _openAttempted;
    int _supportsNonUniformThreadgroup;
    id<MTLBuffer> _grainPatch;
    id<MTLTexture> _grainTextureY;
    id<MTLTexture> _grainTextureUV;
    id<MTLBuffer> _scalingLUT;
    int _width;
    int _height;
    id<MTLBuffer> _offsets;
    int _offsetsStride;
    id<MTLTexture> _offsetsTex;
}

@property (readonly) int maximumTextureDimension;
@property (readonly) BOOL broken444;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)compileFunction:(id)a0 constantValues:(id)a1;
- (int)copyPixelBuffer:(struct __CVBuffer { } *)a0 toPixelBuffer:(struct __CVBuffer { } *)a1;
- (int)applyFilmGrain:(void *)a0 forPicture:(struct Dav1dPicture { struct Dav1dSequenceHeader *x0; struct Dav1dFrameHeader *x1; void *x2[3]; long long x3[2]; struct Dav1dPictureParameters { int x0; int x1; int x2; int x3; } x4; struct Dav1dDataProps { long long x0; long long x1; long long x2; unsigned long long x3; struct Dav1dUserData { char *x0; struct Dav1dRef *x1; } x4; } x5; struct Dav1dContentLightLevel *x6; struct Dav1dMasteringDisplay *x7; struct Dav1dITUTT35 *x8; unsigned long long x9[4]; struct Dav1dRef *x10; struct Dav1dRef *x11; struct Dav1dRef *x12; struct Dav1dRef *x13; struct Dav1dRef *x14; unsigned long long x15[4]; struct Dav1dRef *x16; void *x17; } *)a1 toPixelBuffer:(struct __CVBuffer { } *)a2;
- (int)compileBlitForPicture:(struct Dav1dPicture { struct Dav1dSequenceHeader *x0; struct Dav1dFrameHeader *x1; void *x2[3]; long long x3[2]; struct Dav1dPictureParameters { int x0; int x1; int x2; int x3; } x4; struct Dav1dDataProps { long long x0; long long x1; long long x2; unsigned long long x3; struct Dav1dUserData { char *x0; struct Dav1dRef *x1; } x4; } x5; struct Dav1dContentLightLevel *x6; struct Dav1dMasteringDisplay *x7; struct Dav1dITUTT35 *x8; unsigned long long x9[4]; struct Dav1dRef *x10; struct Dav1dRef *x11; struct Dav1dRef *x12; struct Dav1dRef *x13; struct Dav1dRef *x14; unsigned long long x15[4]; struct Dav1dRef *x16; void *x17; } *)a0 andPixelBuffer:(struct __CVBuffer { } *)a1;
- (int)compileFilmGrainForPicture:(struct Dav1dPicture { struct Dav1dSequenceHeader *x0; struct Dav1dFrameHeader *x1; void *x2[3]; long long x3[2]; struct Dav1dPictureParameters { int x0; int x1; int x2; int x3; } x4; struct Dav1dDataProps { long long x0; long long x1; long long x2; unsigned long long x3; struct Dav1dUserData { char *x0; struct Dav1dRef *x1; } x4; } x5; struct Dav1dContentLightLevel *x6; struct Dav1dMasteringDisplay *x7; struct Dav1dITUTT35 *x8; unsigned long long x9[4]; struct Dav1dRef *x10; struct Dav1dRef *x11; struct Dav1dRef *x12; struct Dav1dRef *x13; struct Dav1dRef *x14; unsigned long long x15[4]; struct Dav1dRef *x16; void *x17; } *)a0 andPixelBuffer:(struct __CVBuffer { } *)a1;
- (int)copyPicture:(struct Dav1dPicture { struct Dav1dSequenceHeader *x0; struct Dav1dFrameHeader *x1; void *x2[3]; long long x3[2]; struct Dav1dPictureParameters { int x0; int x1; int x2; int x3; } x4; struct Dav1dDataProps { long long x0; long long x1; long long x2; unsigned long long x3; struct Dav1dUserData { char *x0; struct Dav1dRef *x1; } x4; } x5; struct Dav1dContentLightLevel *x6; struct Dav1dMasteringDisplay *x7; struct Dav1dITUTT35 *x8; unsigned long long x9[4]; struct Dav1dRef *x10; struct Dav1dRef *x11; struct Dav1dRef *x12; struct Dav1dRef *x13; struct Dav1dRef *x14; unsigned long long x15[4]; struct Dav1dRef *x16; void *x17; } *)a0 toPixelBuffer:(struct __CVBuffer { } *)a1;
- (id)dstTexture:(struct __CVBuffer { } *)a0 forPlane:(int)a1 bitdepth:(int)a2;
- (void)encodeBlit:(id)a0 forPicture:(struct Dav1dPicture { struct Dav1dSequenceHeader *x0; struct Dav1dFrameHeader *x1; void *x2[3]; long long x3[2]; struct Dav1dPictureParameters { int x0; int x1; int x2; int x3; } x4; struct Dav1dDataProps { long long x0; long long x1; long long x2; unsigned long long x3; struct Dav1dUserData { char *x0; struct Dav1dRef *x1; } x4; } x5; struct Dav1dContentLightLevel *x6; struct Dav1dMasteringDisplay *x7; struct Dav1dITUTT35 *x8; unsigned long long x9[4]; struct Dav1dRef *x10; struct Dav1dRef *x11; struct Dav1dRef *x12; struct Dav1dRef *x13; struct Dav1dRef *x14; unsigned long long x15[4]; struct Dav1dRef *x16; void *x17; } *)a1 toPixelBuffer:(struct __CVBuffer { } *)a2 plane:(int)a3;
- (BOOL)metalIsSupported;
- (int)openDevice;
- (id)srcTexture:(struct __CVBuffer { } *)a0 forPlane:(int)a1 bitdepth:(int)a2;
- (void)updatePictureFormat:(struct Dav1dPicture { struct Dav1dSequenceHeader *x0; struct Dav1dFrameHeader *x1; void *x2[3]; long long x3[2]; struct Dav1dPictureParameters { int x0; int x1; int x2; int x3; } x4; struct Dav1dDataProps { long long x0; long long x1; long long x2; unsigned long long x3; struct Dav1dUserData { char *x0; struct Dav1dRef *x1; } x4; } x5; struct Dav1dContentLightLevel *x6; struct Dav1dMasteringDisplay *x7; struct Dav1dITUTT35 *x8; unsigned long long x9[4]; struct Dav1dRef *x10; struct Dav1dRef *x11; struct Dav1dRef *x12; struct Dav1dRef *x13; struct Dav1dRef *x14; unsigned long long x15[4]; struct Dav1dRef *x16; void *x17; } *)a0 pixelBuffer:(struct __CVBuffer { } *)a1;

@end
