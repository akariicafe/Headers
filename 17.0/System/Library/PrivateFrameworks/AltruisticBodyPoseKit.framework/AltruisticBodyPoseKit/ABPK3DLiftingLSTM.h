@class NSArray, ABPKMLModelConfiguration3DLiftingLSTM, ABPK3DLiftingResult, ABPKMLNetworkV2, NSMutableDictionary, ABPKSkeletonDefinition;

@interface ABPK3DLiftingLSTM : NSObject {
    double _imageWidth;
    double _imageHeight;
    int _frameCount;
    NSArray *_inputTensorLSTMNames;
    NSArray *_outputTensorLSTMNames;
    ABPK3DLiftingResult *_liftingResult;
    struct vector<simd_float4x4, std::allocator<simd_float4x4>> { struct *__begin_; struct *__end_; struct __compressed_pair<simd_float4x4 *, std::allocator<simd_float4x4>> { struct *__value_; } __end_cap_; } _liftingResultAsModelPoses;
    ABPKMLModelConfiguration3DLiftingLSTM *_mlConfigLSTM;
    ABPKSkeletonDefinition *_abpkLiftingSkeletonDefinition;
    ABPKMLNetworkV2 *_networkV2;
    NSMutableDictionary *_inputBufferDict;
    NSMutableDictionary *_outputBufferDict;
    BOOL _useEspressoV2;
    BOOL _setUpStatus;
}

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)getLiftingResults;
- (int)runLiftingModelWithData:(id)a0 atTimestamp:(double)a1;
- (BOOL)initMLNetwork;
- (struct { void /* unknown type, empty encoding */ x0[4]; } *)get3DLiftingResultsAsModelPoses;
- (void)_adjustBoneLength:(void *)a0;
- (void)_endLoading3DLiftingLSTMMLModelSignpost;
- (void)_endPostProcessFor3DLiftingLSTMModelDataSignpostWithTimestamp:(double)a0;
- (void)_endPrepareLiftingLSTMInputSignpostWithTimestamp:(double)a0;
- (void)_endRunLiftingLSTMModelSignpostWithTimestamp:(double)a0;
- (void)_startLoading3DLiftingLSTMMLModelSignpost;
- (void)_startPostProcessFor3DLiftingLSTMModelDataSignpostWithTimestamp:(double)a0;
- (void)_startPrepareLiftingLSTMInputSignpostWithTimestamp:(double)a0;
- (void)_startRunLiftingLSTMModelSignpostWithTimestamp:(double)a0;
- (void)resetCellStateAndHiddenStateInput;
- (void)resetInputCellStateBuffer;
- (void)resetInputHiddenStateBuffer;
- (int)runLiftingModelWithData:(id)a0 imageResolution:(struct CGSize { double x0; double x1; })a1 deviceOrientation:(long long)a2 atTimestamp:(double)a3;
- (int)runLiftingModelWithRawDetectionXYVisbility:(const void *)a0 with2DReferenceResults:(id)a1 atTimestamp:(double)a2 exportDebuggingData:(BOOL)a3;
- (void)saveDataToFilePath:(id)a0 with2DInput:(const void *)a1 withLSTMOutput:(void *)a2 withPostprocessedLiftingResults:(void *)a3;
- (void)updateInputImageResolution:(struct CGSize { double x0; double x1; })a0;

@end
