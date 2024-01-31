@class NSObject, VCPHandGestureClassifier, VCPHandPoseImageRequest;
@protocol OS_dispatch_queue;

@interface VCPHandGestureVideoRequest : VCPRequest {
    VCPHandPoseImageRequest *_poseImageRequest;
    VCPHandGestureClassifier *_handGestureClassifier;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _previousTime;
    float _minTimeInterval;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (id)initWithOptions:(id)a0;
- (BOOL)updateWithOptions:(id)a0 error:(id *)a1;
- (void)processBuffer:(struct __CVBuffer { } *)a0 timestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 withOptions:(id)a2 completion:(id /* block */)a3;
- (id)processBuffer:(struct __CVBuffer { } *)a0 timestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 withOptions:(id)a2 error:(id *)a3;
- (void)updateWithOptions:(id)a0 completion:(id /* block */)a1;

@end
