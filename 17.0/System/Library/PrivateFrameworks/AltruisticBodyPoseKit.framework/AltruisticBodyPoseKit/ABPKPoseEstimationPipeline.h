@class ABPKRetargeting, ABPKDepthBasedScaleEstimation, ABPK3DLifting, ABPK2dSkeleton, NSMutableArray, NSString, ABPK2DDetectionPostprocess, ABPKCameraRegistration, ABPKImagePreProcessingParams, ABPK2DPoseEstimation, ABPKSkeleton, ABPK3DLiftingLSTM, ABPK2DDetectionConfiguration, ABPK3DLiftingSequence, ABPKImagePreProcessing;

@interface ABPKPoseEstimationPipeline : NSObject {
    long long _exitPoint;
    struct __CVBuffer { } *_mlImage;
    NSString *_saveDirectory;
    ABPK2DDetectionConfiguration *_config2D;
    BOOL _deviceANEVersionPriorOrEqualToH12;
    BOOL _useLSTM3D;
    ABPK2DPoseEstimation *_poseEstimation2D;
    ABPK2DDetectionPostprocess *_postprocess2d;
    ABPK3DLifting *_liftingAlgorithm;
    ABPK3DLiftingSequence *_liftingAlgorithmSequence;
    ABPK3DLiftingLSTM *_liftingAlgorithmLSTM;
    ABPKCameraRegistration *_bodyRegistration;
    ABPKDepthBasedScaleEstimation *_scaleEstimation;
    ABPKRetargeting *_retargeting;
    ABPK2dSkeleton *_rawDetection2dSkeleton;
    ABPK2dSkeleton *_detection2dSkeleton;
    NSMutableArray *_rawDetection2dSkeletonArray;
    ABPKSkeleton *_liftingSkeleton;
    ABPK2dSkeleton *_registered2dSkeleton;
    ABPKSkeleton *_retargetedSkeleton;
    float _previousValidScale;
    struct CGSize { double width; double height; } _inputResolution;
    ABPKImagePreProcessing *_imagePreprocessor;
    ABPKImagePreProcessingParams *_imagePreProcessingParams;
    int _consistent2DSkeletonMissing;
}

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)runABPKAlgorithmWithInputData:(id)a0 andGetOutput:(id)a1;
- (void)_endExecuteAlgorithmSignpost;
- (void)_endImagePreprocessingSignpost;
- (void)_endInitABPKOutputSignpost;
- (void)_endInitABPKSignpost;
- (void)_endRetargettingSignpostWithTimestamp:(double)a0;
- (void)_endScaleEstimationSignpostWithTimestamp:(double)a0;
- (void)_startExecuteAlgorithmSignpost;
- (void)_startImagePreprocessingSignpost;
- (void)_startInitABPKOutputSignpost;
- (void)_startInitABPKSignpost;
- (void)_startRetargettingSignpostWithTimestamp:(double)a0;
- (void)_startScaleEstimationSignpostWithTimestamp:(double)a0;
- (void)computeRootTransforms:(id)a0 withCameraExtrinsics:(struct { void /* unknown type, empty encoding */ x0[4]; })a1 withVioPose:(struct { void /* unknown type, empty encoding */ x0[4]; })a2 withVioPoseValidity:(BOOL)a3;
- (BOOL)initAlgorithmModules;
- (void)initializeOutput;
- (int)runABPKPoseEstimationWithInputData:(id)a0 andGetOutput:(id)a1;
- (void)saveInputData:(id)a0 andOutputData:(id)a1 ToDir:(id)a2 withFileNamePrefix:(id)a3;
- (void)setExitPoint:(long long)a0;

@end
