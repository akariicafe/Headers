@class NSObject, AVAsset, AVAssetWriterInput, NSURL, NSMutableArray, AVAssetWriter;
@protocol OS_dispatch_semaphore;

@interface MADHEVCAlphaSequenceWriter : MADAlphaSequenceWriter {
    NSURL *_url;
    AVAsset *_asset;
    AVAssetWriter *_writer;
    AVAssetWriterInput *_input;
    NSMutableArray *_sampleQueue;
    NSObject<OS_dispatch_semaphore> *_enqueueSemaphore;
    NSObject<OS_dispatch_semaphore> *_dequeueSemaphore;
    NSObject<OS_dispatch_semaphore> *_completionSemaphore;
    struct atomic<int> { struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { _Atomic int __a_value; } __a_; } _status;
}

+ (id)assetWriterWithURL:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (int)addPixelBuffer:(struct __CVBuffer { } *)a0 withTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (int)createAssetWriterInputWithFormatDescription:(struct opaqueCMFormatDescription { } *)a0;
- (id)finishWithEndTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)initWithFrameCount:(unsigned long long)a0;
- (struct opaqueCMSampleBuffer { } *)popSample;
- (void)processMediaRequest;
- (void)pushSample:(struct opaqueCMSampleBuffer { } *)a0;

@end
