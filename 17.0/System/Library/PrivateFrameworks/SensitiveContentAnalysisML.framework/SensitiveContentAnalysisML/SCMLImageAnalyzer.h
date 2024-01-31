@class NSDictionary, NSNumber, NSURL;

@interface SCMLImageAnalyzer : SCMLModelBase {
    unsigned long long data_dim[4];
    void *encoderPlan;
    void *encoderCtx;
    struct { void *plan; int network_index; } encoderNet;
    struct { void *data; void *reserved; unsigned long long dim[4]; unsigned long long stride[4]; unsigned long long width; unsigned long long height; unsigned long long channels; unsigned long long batch_number; unsigned long long sequence_length; unsigned long long stride_width; unsigned long long stride_height; unsigned long long stride_channels; unsigned long long stride_batch_number; unsigned long long stride_sequence_length; int storage_type; } leafProbabilities;
    struct { void *data; void *reserved; unsigned long long dim[4]; unsigned long long stride[4]; unsigned long long width; unsigned long long height; unsigned long long channels; unsigned long long batch_number; unsigned long long sequence_length; unsigned long long stride_width; unsigned long long stride_height; unsigned long long stride_channels; unsigned long long stride_batch_number; unsigned long long stride_sequence_length; int storage_type; } detectionScores;
    struct { void *data; void *reserved; unsigned long long dim[4]; unsigned long long stride[4]; unsigned long long width; unsigned long long height; unsigned long long channels; unsigned long long batch_number; unsigned long long sequence_length; unsigned long long stride_width; unsigned long long stride_height; unsigned long long stride_channels; unsigned long long stride_batch_number; unsigned long long stride_sequence_length; int storage_type; } detectionBoxes;
}

@property (readonly) NSDictionary *acceptedOutputIndices;
@property (readonly) NSDictionary *acceptedDetectionOutputIndices;
@property (readonly) NSDictionary *detectionThresholdByOutputIndex;
@property (readonly) NSNumber *otgxMainThreshold;
@property (readonly) unsigned long long otgxMainIndex;
@property (readonly) BOOL otgxRetrieveAllClasses;
@property (readonly) NSURL *modelUrl;
@property (readonly) int _espressoEngine;
@property (readonly) int _espressoDeviceId;
@property (readonly) int _espressoStorageType;

+ (id)_decodeName:(id)a0;
+ (id)_encodeName:(id)a0;
+ (id)_readOperatingThresholdsDataUsingModelURL:(id)a0 error:(id *)a1;
+ (id)getOperatingPointDataForClassName:(id)a0 modelURL:(id)a1 error:(id *)a2;

- (void)dealloc;
- (void).cxx_destruct;
- (id)analyzePixelBuffer:(struct __CVBuffer { } *)a0 error:(id *)a1;
- (id)initWithModelURL:(id)a0 options:(id)a1 error:(id *)a2;
- (struct NetworkOutputs { struct TensorView<float, 1> { float *x0; struct array<int, 1UL> { int x0[1]; } x1; } x0; struct TensorView<float, 3> { float *x0; struct array<int, 3UL> { int x0[3]; } x1; } x1; struct TensorView<float, 3> { float *x0; struct array<int, 3UL> { int x0[3]; } x1; } x2; })_computeOutputForPixelBuffer:(struct __CVBuffer { } *)a0 error:(id *)a1;
- (void)_extractThresholdForOTGXMain:(id)a0;
- (struct vector<SCML::BoxInfo, std::allocator<SCML::BoxInfo>> { struct BoxInfo *x0; struct BoxInfo *x1; struct __compressed_pair<SCML::BoxInfo *, std::allocator<SCML::BoxInfo>> { struct BoxInfo *x0; } x2; })_processDetectionOutput:(struct NetworkOutputs { struct TensorView<float, 1> { float *x0; struct array<int, 1UL> { int x0[1]; } x1; } x0; struct TensorView<float, 3> { float *x0; struct array<int, 3UL> { int x0[3]; } x1; } x1; struct TensorView<float, 3> { float *x0; struct array<int, 3UL> { int x0[3]; } x1; } x2; })a0;
- (id)_processNetworkOutput:(struct NetworkOutputs { struct TensorView<float, 1> { float *x0; struct array<int, 1UL> { int x0[1]; } x1; } x0; struct TensorView<float, 3> { float *x0; struct array<int, 3UL> { int x0[3]; } x1; } x1; struct TensorView<float, 3> { float *x0; struct array<int, 3UL> { int x0[3]; } x1; } x2; })a0;
- (id)analyzeImage:(struct CGImage { } *)a0 error:(id *)a1;
- (id)classifyImage:(struct CGImage { } *)a0 error:(id *)a1;
- (id)classifyPixelBuffer:(struct __CVBuffer { } *)a0 error:(id *)a1;
- (struct NetworkOutputs { struct TensorView<float, 1> { float *x0; struct array<int, 1UL> { int x0[1]; } x1; } x0; struct TensorView<float, 3> { float *x0; struct array<int, 3UL> { int x0[3]; } x1; } x1; struct TensorView<float, 3> { float *x0; struct array<int, 3UL> { int x0[3]; } x1; } x2; })computeOutputForImage:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a0 error:(id *)a1;
- (id)generateClassificationScoresForImage:(struct CGImage { } *)a0 error:(id *)a1;
- (id)generateClassificationScoresForPixelBuffer:(struct __CVBuffer { } *)a0 error:(id *)a1;
- (BOOL)isSensitive:(id)a0 sensitivityScore:(id *)a1;
- (BOOL)isSensitive:(id)a0 sensitivityScore:(id *)a1 classificationMode:(unsigned long long)a2;
- (BOOL)loadNetworkForURL:(id)a0 espressoEngine:(int)a1 storageType:(int)a2 deviceId:(int)a3;
- (id)scaleMethod;
- (BOOL)shouldProcessDetections;

@end
