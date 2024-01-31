@class NSDictionary, NSURL, NSMutableArray;

@interface VCPBlastdoorVideoProcessor : NSObject <VCPBlockBasedVideoProcessorProtocol> {
    NSURL *_url;
    NSMutableArray *_frameProcessors;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _canceled;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _stopProcessing;
}

@property (retain, nonatomic) NSDictionary *decoderSettings;
@property (copy, nonatomic) id /* block */ progressHandler;

- (id)initWithURL:(id)a0;
- (BOOL)analyzeWithError:(id *)a0;
- (void).cxx_destruct;
- (void)cancel;
- (BOOL)processConfiguration:(id)a0 withError:(id *)a1;
- (BOOL)addFrameProcessingRequest:(id /* block */)a0 withConfiguration:(id)a1 error:(id *)a2;

@end
