@class MPSImageSpatioTemporalGuidedFilter, NSObject;
@protocol MTLComputePipelineState, OS_dispatch_semaphore;

@interface VNRemoveBackgroundProcessor : VNEspressoModelFileBasedDetector {
    unsigned long long _networkWidth;
    unsigned long long _networkHeight;
    struct { void *data; void *reserved; unsigned long long dim[4]; unsigned long long stride[4]; unsigned long long width; unsigned long long height; unsigned long long channels; unsigned long long batch_number; unsigned long long sequence_length; unsigned long long stride_width; unsigned long long stride_height; unsigned long long stride_channels; unsigned long long stride_batch_number; unsigned long long stride_sequence_length; int storage_type; } _outputMaskEspressoBuffer;
    struct { void *data; void *reserved; unsigned long long dim[4]; unsigned long long stride[4]; unsigned long long width; unsigned long long height; unsigned long long channels; unsigned long long batch_number; unsigned long long sequence_length; unsigned long long stride_width; unsigned long long stride_height; unsigned long long stride_channels; unsigned long long stride_batch_number; unsigned long long stride_sequence_length; int storage_type; } _outputConfidenceEspressoBuffer;
    MPSImageSpatioTemporalGuidedFilter *_guidedFilter;
    id<MTLComputePipelineState> _assembleConstraintsState;
    id<MTLComputePipelineState> _applyMaskComputeState;
    id<MTLComputePipelineState> _copyCropComputeState;
    NSObject<OS_dispatch_semaphore> *_removeBackgroundSemaphore;
}

+ (id)supportedComputeStageDevicesForOptions:(id)a0 error:(id *)a1;
+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)a0;
+ (id)espressoModelFileNameForConfigurationOptions:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)completeInitializationForSession:(id)a0 error:(id *)a1;
- (BOOL)createRegionOfInterestCrop:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 options:(id)a1 qosClass:(unsigned int)a2 warningRecorder:(id)a3 pixelBuffer:(struct __CVBuffer **)a4 error:(id *)a5 progressHandler:(id /* block */)a6;
- (id)processRegionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 croppedPixelBuffer:(const struct __CVBuffer { } *)a1 options:(id)a2 qosClass:(unsigned int)a3 warningRecorder:(id)a4 error:(id *)a5 progressHandler:(id /* block */)a6;

@end
