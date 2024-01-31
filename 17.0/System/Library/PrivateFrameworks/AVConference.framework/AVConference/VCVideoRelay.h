@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface VCVideoRelay : NSObject {
    NSMutableArray *_videoCaptureSinks;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (BOOL)deregisterForVideoFrames:(id)a0;
- (BOOL)enqueueFrame:(struct __CVBuffer { } *)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 cameraStatusBits:(unsigned char)a2;
- (BOOL)registerForVideoFrames:(id)a0;

@end
