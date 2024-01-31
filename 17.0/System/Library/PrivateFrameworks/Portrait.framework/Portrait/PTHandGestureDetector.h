@class VCPHandGestureVideoRequest;
@protocol PTHandGestureDelegate;

@interface PTHandGestureDetector : NSObject {
    struct CGSize { double width; double height; } _frameSize;
    BOOL _useExternalHandDetections;
}

@property (retain) VCPHandGestureVideoRequest *vcpHandGestureRequest;
@property (weak) id<PTHandGestureDelegate> delegate;

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })frameSize;
- (id)initWithFrameSize:(struct CGSize { double x0; double x1; })a0 asyncInitQueue:(id)a1 externalHandDetectionsEnabled:(BOOL)a2;
- (void)detectGesturesFromBuffer:(struct __CVBuffer { } *)a0 timeStamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 withRotationDegrees:(int)a2 withDetectedHands:(id)a3 withDetectedFaces:(id)a4;

@end
