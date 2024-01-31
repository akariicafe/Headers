@class ABPKAlgorithmParams, ABPKRetargeting, ABPK2DDetectionPostprocess, ABPK3DLifting, ABPKDepthBasedScaleEstimation, ABPK2DPoseEstimation, ABPKCameraRegistration;

@interface ABPKAlgorithm : NSObject {
    ABPKAlgorithmParams *_algParams;
    long long _exitPoint;
    ABPK2DPoseEstimation *_poseEstimation2D;
    ABPK2DDetectionPostprocess *_postprocess2d;
    ABPK3DLifting *_liftingAlgorithm;
    ABPKCameraRegistration *_bodyRegistration;
    ABPKDepthBasedScaleEstimation *_scaleEstimation;
    ABPKRetargeting *_retargeting;
    float _previousValidScale;
}

- (id)initWithParams:(id)a0;
- (void).cxx_destruct;
- (void)_endABPKRunWithInputSignpostWithTimestamp:(double)a0;
- (void)_endInitABPKSignpost;
- (void)_endRetargettingSignpostWithTimestamp:(double)a0;
- (void)_endScaleEstimationSignpostWithTimestamp:(double)a0;
- (void)_startABPKRunWithInputSignpostWithTimestamp:(double)a0;
- (void)_startInitABPKSignpost;
- (void)_startRetargettingSignpostWithTimestamp:(double)a0;
- (void)_startScaleEstimationSignpostWithTimestamp:(double)a0;
- (int)runWithInput:(id)a0 andGetOutput:(id)a1;
- (void)setExitPoint:(long long)a0;

@end
