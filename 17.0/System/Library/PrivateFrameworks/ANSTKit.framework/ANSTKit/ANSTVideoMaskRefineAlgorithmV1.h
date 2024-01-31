@class ANSTBaseNetworkEspresso, ANSTVideoMaskRefineAlgorithmConfiguration;

@interface ANSTVideoMaskRefineAlgorithmV1 : ANSTVideoMaskRefineAlgorithm {
    ANSTVideoMaskRefineAlgorithmConfiguration *_config;
    ANSTBaseNetworkEspresso *_network;
    struct { void *x0; void *x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; int x14; } *_lastPersonMask;
    BOOL _readyForInference;
    BOOL _isFirstFrame;
    struct __CVBuffer { } *_resizedInputBuffer;
    struct OpaqueVTPixelTransferSession { } *_pixelTransferSession;
    struct __CVPixelBufferPool { } *_outputBufferPool_256x192;
}

+ (unsigned long long)_version;

- (void)dealloc;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (BOOL)prepareWithError:(id *)a0;
- (struct __CVBuffer { } *)_createCVPixelBuffer_256x192_Float32_fromEspressoBufferFloat32:(struct { void *x0; void *x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; int x14; } *)a0;
- (id)_networkResult;
- (id)resultForPixelBuffer:(struct __CVBuffer { } *)a0 coarseSegementationMasks:(id)a1 error:(id *)a2;
- (void)undoPrepareSideEffects;

@end
