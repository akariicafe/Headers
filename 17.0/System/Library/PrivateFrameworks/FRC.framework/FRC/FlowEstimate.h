@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface FlowEstimate : EspressoModel {
    const char **_inputBlobs;
    const char *_concatenatedInputBlob;
    const char **_outputBlobs;
    NSString *_espresso_base_name;
    NSObject<OS_dispatch_queue> *_submissionQueue;
}

@property (class, nonatomic) long long numLevels;

@property unsigned long long width;
@property unsigned long long height;
@property unsigned long long channels;
@property unsigned int level;

- (void).cxx_destruct;
- (BOOL)bindCVPixelBuffers:(struct __CVBuffer { } *)a0 correlation:(struct __CVBuffer { } *)a1 flow:(struct __CVBuffer { } *)a2 output:(struct __CVBuffer { } *)a3;
- (BOOL)estimateFlow:(struct __CVBuffer { } *)a0 correlation:(struct __CVBuffer { } *)a1 flow:(struct __CVBuffer { } *)a2 output:(struct __CVBuffer { } *)a3 callback:(id /* block */)a4;
- (id)initWithMode:(long long)a0 level:(unsigned int)a1;
- (void)setupNetworkModel;

@end
