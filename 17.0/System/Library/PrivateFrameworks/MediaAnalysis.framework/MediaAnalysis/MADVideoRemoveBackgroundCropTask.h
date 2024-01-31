@class NSString, MADVideoRemoveBackgroundPreviewRequest, MADServiceVideoAsset, MADVideoRemoveBackgroundRequest;

@interface MADVideoRemoveBackgroundCropTask : VCPMABaseTask {
    MADVideoRemoveBackgroundPreviewRequest *_previewRequest;
    MADVideoRemoveBackgroundRequest *_request;
    MADServiceVideoAsset *_asset;
    struct CF<__CVPixelBufferPool *> { struct __CVPixelBufferPool *value_; } _pixelBufferPool;
    struct CF<OpaqueVTPixelTransferSession *> { struct OpaqueVTPixelTransferSession *value_; } _transferSession;
    id /* block */ _progressHandler;
    id /* block */ _resultHandler;
    id /* block */ _completionHandler;
}

@property (copy, nonatomic) NSString *signpostPayload;

+ (id)taskWithAsset:(id)a0 previewRequest:(id)a1 generationRequest:(id)a2 cancelBlock:(id /* block */)a3 progressHandler:(id /* block */)a4 resultHandler:(id /* block */)a5 completionHandler:(id /* block */)a6;

- (BOOL)isCanceled;
- (BOOL)run:(id *)a0;
- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)cachesResources;
- (id)compressSequenceData:(id)a0 sequenceWriter:(id)a1 outputWidth:(unsigned long long *)a2 outputHeight:(unsigned long long *)a3;
- (id)decodeSamplesUntilTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 trackOutput:(id)a1 baseTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 progress:(id)a3 error:(id *)a4;
- (id)decodeSettingsForTrack:(id)a0;
- (BOOL)exportFutureSamples:(id)a0 sequenceWriter:(id)a1 progress:(id)a2 error:(id *)a3;
- (BOOL)exportPastSamples:(id)a0 sequenceWriter:(id)a1 progress:(id)a2 error:(id *)a3;
- (struct __CVBuffer { } *)generateMaskForSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 orientation:(unsigned int)a1 error:(id *)a2;
- (id)initWithAsset:(id)a0 previewRequest:(id)a1 generationRequest:(id)a2 cancelBlock:(id /* block */)a3 progressHandler:(id /* block */)a4 resultHandler:(id /* block */)a5 completionHandler:(id /* block */)a6;
- (BOOL)isAnimatedStickerPreferredWithPastSamples:(id)a0 futureSamples:(id)a1;
- (id)processFutureSamplesFromTrackOutput:(id)a0 baseTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 orientation:(unsigned int)a2 maskSampleBuffer:(struct opaqueCMSampleBuffer { } *)a3 maskPixelBuffer:(struct __CVBuffer { } *)a4 cropUnion:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a5 endTime:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a6 progress:(id)a7 error:(id *)a8;
- (id)processPastSampleBuffers:(id)a0 orientation:(unsigned int)a1 maskPixelBuffer:(struct __CVBuffer { } *)a2 cropUnion:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a3 progress:(id)a4 error:(id *)a5;
- (void)publishPayloadWidth:(unsigned long long)a0 height:(unsigned long long)a1 data:(id)a2;
- (void)publishPreviewResultsTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 pastSamples:(id)a1 futureSamples:(id)a2 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })scaleNormalizedCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forPixelBuffer:(struct __CVBuffer { } *)a1;
- (BOOL)validateRequest:(id *)a0;

@end
