@class MADServiceVideoAsset, NSError, MADVideoRemoveBackgroundRequest, NSObject;
@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_semaphore;

@interface MADVideoRemoveBackgroundTask : MADServiceVideoProcessingSubtask {
    MADVideoRemoveBackgroundRequest *_request;
    MADServiceVideoAsset *_asset;
    struct CF<__CVPixelBufferPool *> { struct __CVPixelBufferPool *value_; } _pixelBufferPool;
    struct CF<OpaqueVTPixelTransferSession *> { struct OpaqueVTPixelTransferSession *value_; } _transferSession;
    NSObject<OS_dispatch_group> *_asyncGroup;
    NSObject<OS_dispatch_queue> *_asyncQueue;
    NSObject<OS_dispatch_semaphore> *_asyncSemaphore;
    struct atomic<int> { struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { _Atomic int __a_value; } __a_; } _asyncStatus;
    NSError *_asyncError;
    id /* block */ _progressHandler;
    id /* block */ _completionHandler;
}

+ (BOOL)trimEnabled;

- (BOOL)isCanceled;
- (BOOL)run:(id *)a0;
- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)compressSequenceData:(id)a0 sequenceWriter:(id)a1 outputWidth:(unsigned long long *)a2 outputHeight:(unsigned long long *)a3;
- (struct __CVBuffer { } *)convertPixelBuffer:(struct __CVBuffer { } *)a0;
- (id)decodeSamplesUntilTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 trackOutput:(id)a1 baseTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 progress:(id)a3 error:(id *)a4;
- (id)decodeSettingsForTrack:(id)a0;
- (BOOL)exportPastSamples:(id)a0 sequenceWriter:(id)a1 progress:(id)a2 error:(id *)a3;
- (struct __CVBuffer { } *)generateMaskForSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 orientation:(unsigned int)a1 error:(id *)a2;
- (void)getOutputWidth:(unsigned long long *)a0 outputHeight:(unsigned long long *)a1;
- (id)initWithRequest:(id)a0 forAsset:(id)a1 cancelBlock:(id /* block */)a2 progressHandler:(id /* block */)a3 andCompletionHandler:(id /* block */)a4;
- (BOOL)processFutureSamplesFromTrackOutput:(id)a0 baseTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 orientation:(unsigned int)a2 maskSampleBuffer:(struct opaqueCMSampleBuffer { } *)a3 maskPixelBuffer:(struct __CVBuffer { } *)a4 sequenceWriter:(id)a5 progress:(id)a6 error:(id *)a7;
- (id)processPastSampleBuffers:(id)a0 orientation:(unsigned int)a1 maskPixelBuffer:(struct __CVBuffer { } *)a2 progress:(id)a3 error:(id *)a4;
- (void)setAsyncError:(id)a0;
- (BOOL)validateRequest:(id *)a0;

@end
