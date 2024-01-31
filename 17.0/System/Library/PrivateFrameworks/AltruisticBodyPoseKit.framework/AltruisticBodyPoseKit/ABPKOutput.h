@class ABPK2dSkeleton, ABPKSkeleton, ABPKCameraParams, ABPKAlgorithmParams, ABPKAlgorithmState, NSMutableArray;

@interface ABPKOutput : NSObject {
    struct OpaqueVTPixelTransferSession { } *_vtPixelTransferSession;
    struct __CVBuffer { } *_sensorImageBGRA;
    NSMutableArray *_rawDetection2dSkeletonABPKArray;
}

@property float timeABPKAlgorithmFinished;
@property float timeABPKAlgorithmStart;
@property double timestamp;
@property struct __CVBuffer { } *mlImage;
@property (retain) ABPKCameraParams *cameraParams;
@property (retain) ABPK2dSkeleton *rawDetection2dSkeletonABPK;
@property (retain) ABPK2dSkeleton *detection2dSkeletonABPK;
@property (retain) ABPKSkeleton *liftingSkeletonABPK;
@property void *rawLiftingNetworkOutputJoints;
@property (retain) ABPK2dSkeleton *registered2dSkeletonABPK;
@property (retain) ABPKSkeleton *retargetedSkeletonABPK;
@property (retain) ABPKAlgorithmParams *algorithmParams;
@property int algorithmReturnCode;
@property (retain) ABPKAlgorithmState *algState;
@property struct __CVBuffer { } *mlOverlayImage;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)getDetection2dSkeletonABPKArray;
- (BOOL)convertToStreamingDictionary:(id)a0 withSkeletonType:(id)a1 referenceFrame:(id)a2 includeFingerRotation:(BOOL)a3 yOffset:(float)a4;
- (int)overlayResultsOnImage:(struct __CVBuffer { } *)a0 withCameraIntrinsics:(struct { void /* unknown type, empty encoding */ x0[3]; })a1;
- (int)overlayResultsOnImage:(struct __CVBuffer { } *)a0 withCameraIntrinsics:(struct { void /* unknown type, empty encoding */ x0[3]; })a1 withConfig:(id)a2;
- (int)saveDataToDir:(id)a0 withFileNamePrefix:(id)a1;
- (int)saveOnlyPoseDataToDir:(id)a0 withFileNamePrefix:(id)a1;
- (void)setRawDetection2dSkeletonABPKArray:(id)a0;

@end
