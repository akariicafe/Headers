@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface VCPVideoProcessorSession : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_nodes;
    BOOL _modified;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _startTime;
    struct CF<opaqueCMSampleBuffer *> { struct opaqueCMSampleBuffer *value_; } _nextSampleBuffer;
    unsigned long long _frameCount;
}

@property (nonatomic) unsigned int orientation;

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)addRequest:(id)a0 withConfiguration:(id)a1 error:(id *)a2;
- (BOOL)removeRequest:(id)a0 error:(id *)a1;
- (BOOL)addFrameProcessingRequest:(id /* block */)a0 withConfiguration:(id)a1 error:(id *)a2;
- (BOOL)allRequestsFinished;
- (BOOL)flushWithEndTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 error:(id *)a1;
- (BOOL)processSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 error:(id *)a1;
- (BOOL)processSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 withEndTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 error:(id *)a2;
- (BOOL)shouldProcessSampleWithTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 atSamplingInterval:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;

@end
