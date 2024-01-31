@class ABPKMLModelConfiguration3DLiftingSequenceFirstStage, NSString, NSArray, ABPK3DLiftingResult, ABPKMLNetworkV2, NSMutableDictionary, ABPKSkeletonDefinition;

@interface ABPK3DLiftingSequence : NSObject <ABPK3DLiftingAlgorithm> {
    struct RingBuffer<std::vector<std::array<float, 3>>, 243UL> { unsigned long long _insertionIndex; struct array<std::vector<std::array<float, 3>>, 243UL> { struct vector<std::array<float, 3>, std::allocator<std::array<float, 3>>> { void *__begin_; void *__end_; struct __compressed_pair<std::array<float, 3> *, std::allocator<std::array<float, 3>>> { void *__value_; } __end_cap_; } __elems_[243]; } _storage; BOOL _filled; } _3DLiftingInputBuffer;
    double _imageWidth;
    double _imageHeight;
    int _frameCount;
    NSArray *_inputTensorFirstStageNames;
    NSArray *_outputTensorFirstStageNames;
    void *_context_first_stage;
    void *_plan_first_stage;
    struct { void *plan; int network_index; } _network_first_stage;
    struct { void *data; void *reserved; unsigned long long dim[4]; unsigned long long stride[4]; unsigned long long width; unsigned long long height; unsigned long long channels; unsigned long long batch_number; unsigned long long sequence_length; unsigned long long stride_width; unsigned long long stride_height; unsigned long long stride_channels; unsigned long long stride_batch_number; unsigned long long stride_sequence_length; int storage_type; } _inputTensorFirstStage;
    struct { void *data; void *reserved; unsigned long long dim[4]; unsigned long long stride[4]; unsigned long long width; unsigned long long height; unsigned long long channels; unsigned long long batch_number; unsigned long long sequence_length; unsigned long long stride_width; unsigned long long stride_height; unsigned long long stride_channels; unsigned long long stride_batch_number; unsigned long long stride_sequence_length; int storage_type; } _outputTensorFirstStage;
    ABPK3DLiftingResult *_liftingResult;
    struct vector<simd_float4x4, std::allocator<simd_float4x4>> { struct *__begin_; struct *__end_; struct __compressed_pair<simd_float4x4 *, std::allocator<simd_float4x4>> { struct *__value_; } __end_cap_; } _liftingResultAsModelPoses;
    struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; struct __compressed_pair<float *, std::allocator<float>> { float *__value_; } __end_cap_; } _gaussianSmoothingFilter;
    struct RingBuffer<std::vector<float>, 9UL> { unsigned long long _insertionIndex; struct array<std::vector<float>, 9UL> { struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; struct __compressed_pair<float *, std::allocator<float>> { float *__value_; } __end_cap_; } __elems_[9]; } _storage; BOOL _filled; } _smoothingFilterRingBuffer;
    ABPKMLModelConfiguration3DLiftingSequenceFirstStage *_mlConfigFirstStage;
    ABPKSkeletonDefinition *_abpkLiftingSkeletonDefinition;
    ABPKMLNetworkV2 *_networkV2;
    NSMutableDictionary *_inputBufferDict;
    NSMutableDictionary *_outputBufferDict;
    BOOL _useEspressoV2;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)getLiftingResults;
- (int)runLiftingModelWithData:(id)a0 atTimestamp:(double)a1;
- (BOOL)initMLNetwork;
- (struct { void /* unknown type, empty encoding */ x0[4]; } *)get3DLiftingResultsAsModelPoses;
- (void)_adjustBoneLength:(void *)a0;
- (void)_endLoading3DLiftingSequenceMLModelSignpost;
- (void)_endPostProcessFor3DLiftingSequenceModelDataSignpostWithTimestamp:(double)a0;
- (void)_endPrepareLiftingSequenceInputSignpostWithTimestamp:(double)a0;
- (void)_endRunLiftingSequenceModelSignpostWithTimestamp:(double)a0;
- (void)_startLoading3DLiftingSequenceMLModelSignpost;
- (void)_startPostProcessFor3DLiftingSequenceModelDataSignpostWithTimestamp:(double)a0;
- (void)_startPrepareLiftingSequenceInputSignpostWithTimestamp:(double)a0;
- (void)_startRunLiftingSequenceModelSignpostWithTimestamp:(double)a0;
- (struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { struct __compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *x0; } **x0; })getGaussianSmoothedOutput:(const void *)a0;
- (int)runLiftingModelWithBuffer:(const void *)a0 with2DReferenceResults:(id)a1 atTimestamp:(double)a2 exportDebuggingData:(BOOL)a3;
- (int)runLiftingModelWithData:(id)a0 imageResolution:(struct CGSize { double x0; double x1; })a1 deviceOrientation:(long long)a2 atTimestamp:(double)a3;
- (void)saveDataToFilePath:(id)a0 with2DInputBuffer:(const void *)a1 withFirstStageOutput:(float *)a2 withSmoothedOutput:(void *)a3 withPostprocessedLiftingResults:(void *)a4;
- (void)updateInputImageResolution:(struct CGSize { double x0; double x1; })a0;

@end
