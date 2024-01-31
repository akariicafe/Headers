@class NSMutableArray, ADLKTOpticalFlow;
@protocol MTLCommandQueue, MTLDevice;

@interface ADLKTExecutor : NSObject {
    id<MTLDevice> _device;
    ADLKTOpticalFlow *_lkt;
    BOOL _isFirstTime;
    struct CGSize { double width; double height; } _inputSize;
    id<MTLCommandQueue> _commandQueue;
    unsigned int _currentFrameIndex;
    NSMutableArray *_pyramids[2];
    NSMutableArray *_features[2];
    NSMutableArray *_derivitives[2];
}

- (id)initWithSize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (struct __CVBuffer { } *)createPixelBufferForOpticalFlow;
- (long long)executeWithFrame:(struct __CVBuffer { } *)a0 createOpticalFlowBuffer:(struct __CVBuffer **)a1;
- (long long)executeWithFrame:(struct __CVBuffer { } *)a0 intoOpticalFlowBuffer:(struct __CVBuffer { } *)a1;
- (id)initWithDescriptor:(id)a0 forLayout:(unsigned long long)a1;

@end
