@class NUVideoSourceNode, NSObject;
@protocol OS_dispatch_queue;

@interface NUKeyFrameSourceNode : NUVideoFrameSourceNode {
    NSObject<OS_dispatch_queue> *_queue;
    NUVideoSourceNode *_videoSourceNode;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _frameTime;
    struct __CVBuffer { } *_pixelBuffer;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)_evaluateImageWithSourceOptions:(id)a0 subsampleFactor:(long long *)a1 error:(out id *)a2;
- (struct __CVBuffer { } *)_pixelBufferWithAuxiliaryImageType:(long long)a0 error:(out id *)a1;
- (id)initWithSettings:(id)a0 orientation:(long long)a1;
- (id)initWithVideoSource:(id)a0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 settings:(id)a2 orientation:(long long)a3;
- (struct { long long x0; long long x1; })pixelSizeWithSourceOptions:(id)a0;

@end
