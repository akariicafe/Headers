@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface FlowAdaptationDecoder : FlowEstimate {
    NSString *_espresso_file;
    NSObject<OS_dispatch_queue> *_submissionQueue;
}

- (id)initWithMode:(long long)a0;
- (void).cxx_destruct;
- (BOOL)bindCVPixelBuffers:(struct __CVBuffer { } *)a0 correlation:(struct __CVBuffer { } *)a1 flow:(struct __CVBuffer { } *)a2 output:(struct __CVBuffer { } *)a3;
- (BOOL)estimateFlow:(struct __CVBuffer { } *)a0 correlation:(struct __CVBuffer { } *)a1 flow:(struct __CVBuffer { } *)a2 output:(struct __CVBuffer { } *)a3 callback:(id /* block */)a4;
- (void)setupNetworkModel;

@end
