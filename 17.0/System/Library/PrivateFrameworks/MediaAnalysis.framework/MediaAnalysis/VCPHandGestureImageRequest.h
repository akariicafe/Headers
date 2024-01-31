@class VCPCoreMLRequest, NSObject, VCPHandPoseImageRequest;
@protocol OS_dispatch_queue;

@interface VCPHandGestureImageRequest : VCPRequest {
    VCPHandPoseImageRequest *handPoseRequest;
    VCPCoreMLRequest *gestureCoreMLRequest;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (unsigned long long)heuristicFingerOpenness:(id)a0 rotationInDegrees:(int)a1;
+ (BOOL)heuristicHeart:(id)a0 andRightHand:(id)a1 rotationInDegrees:(int)a2 relax:(BOOL)a3;
+ (BOOL)heuristicIsIndexMiddleTooClose:(id)a0 rotationInDegrees:(int)a1;
+ (BOOL)heuristicIsThumbOpenWide:(id)a0 rotationInDegrees:(int)a1 isRelaxed:(BOOL)a2;
+ (BOOL)isFistClosedTight:(id)a0 rotationInDegrees:(int)a1 scalingFactor:(float)a2;
+ (BOOL)isFistClosedTightOccluded:(id)a0 rotationInDegrees:(int)a1 scalingFactor:(float)a2 palmScale:(float)a3;
+ (float)tiltingAngleForHand:(id)a0 srcKeypointType:(int)a1 dstKeypointType:(int)a2 rotationInDegrees:(int)a3;

- (id)init;
- (void).cxx_destruct;
- (id)initWithOptions:(id)a0;
- (id)processImage:(struct __CVBuffer { } *)a0 withOptions:(id)a1 error:(id *)a2;
- (BOOL)updateWithOptions:(id)a0 error:(id *)a1;
- (int)heuristicThumb:(id)a0 rotationInDegrees:(int)a1;
- (void)processImage:(struct __CVBuffer { } *)a0 withOptions:(id)a1 completion:(id /* block */)a2;
- (id)taxonomyMappingStatic;
- (void)updateWithOptions:(id)a0 completion:(id /* block */)a1;

@end
