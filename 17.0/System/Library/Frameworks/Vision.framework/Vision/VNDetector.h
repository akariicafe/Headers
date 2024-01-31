@class NSString, NSDictionary, VNMetalContext, VNControlledCapacityTasksQueue;

@interface VNDetector : NSObject <VNClassCodeProviding, VNDetectorKeyProviding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _detectorMultiSessionAccessLock;
    NSDictionary *_boundComputeStageDevices;
}

@property (class, readonly) VNControlledCapacityTasksQueue *detectorCropCreationAsyncTasksQueue;
@property (class, readonly) VNControlledCapacityTasksQueue *detectorCropProcessingAsyncTasksQueue;
@property (class, readonly) VNControlledCapacityTasksQueue *detectorInternalProcessingAsyncTasksQueue;

@property (retain, nonatomic) VNControlledCapacityTasksQueue *synchronizationQueue;
@property (readonly, nonatomic) unsigned long long signPostAdditionalParameter;
@property (readonly, copy) NSDictionary *configurationOptions;
@property (readonly, nonatomic) VNMetalContext *metalContext;
@property (readonly, nonatomic) unsigned long long backingStore;
@property (readonly, copy, nonatomic) NSDictionary *boundComputeStageDevices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)configurationOptionKeysForDetectorKey;
+ (id)supportedComputeStageDevicesForOptions:(id)a0 error:(id *)a1;
+ (id)supportedImageSizeSetForOptions:(id)a0 error:(id *)a1;
+ (Class)detectorClassForConfigurationOptions:(id)a0 error:(id *)a1;
+ (id)computeStagesToBindForConfigurationOptions:(id)a0;
+ (void)fullyPopulateConfigurationOptions:(id)a0;
+ (void)recordDefaultConfigurationOptionsInDictionary:(id)a0;
+ (unsigned int)VNClassCode;
+ (id)_computeStageDeviceBindingsForConfiguration:(id)a0 error:(id *)a1;
+ (id)computeDeviceForComputeStage:(id)a0 configurationOptions:(id)a1 error:(id *)a2;
+ (id)computeDeviceForConfiguredProcessingDeviceBridge:(id)a0 computeStage:(id)a1 supportedComputeDevices:(id)a2 error:(id *)a3;
+ (id)computeStageDevicesForConfigurationOptions:(id)a0 error:(id *)a1;
+ (Class)detectorClassForDetectorType:(id)a0 configuredWithOptions:(id)a1 error:(id *)a2;
+ (Class)detectorClassForDetectorType:(id)a0 error:(id *)a1;
+ (id)detectorKeyComponentForDetectorConfigurationOptionKey:(id)a0 value:(id)a1;
+ (id)detectorName;
+ (id)detectorWithConfigurationOptions:(id)a0 forSession:(id)a1 error:(id *)a2;
+ (id)fullyPopulatedConfigurationOptionsWithOverridingOptions:(id)a0;
+ (BOOL)isReentrant;
+ (id)keyForDetectorWithConfigurationOptions:(id)a0;
+ (BOOL)loadedInstanceWithBoundComputeStageDevices:(id)a0 canBeUsedForRequestedComputeStageDevices:(id)a1;
+ (BOOL)loadedInstanceWithComputeDevice:(id)a0 boundToComputeStage:(id)a1 canBeUsedForProcessingDeviceBridge:(id)a2;
+ (void)runSuccessReportingBlockSynchronously:(id /* block */)a0 detector:(id)a1 qosClass:(unsigned int)a2 error:(id *)a3;
+ (id)supportedImageSizeSetForEspressoModelAtPath:(id)a0 inputImageBlobName:(id)a1 analysisPixelFormatType:(unsigned int)a2 error:(id *)a3;

- (id)internalProcessUsingQualityOfServiceClass:(unsigned int)a0 options:(id)a1 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 warningRecorder:(id)a3 error:(id *)a4 progressHandler:(id /* block */)a5;
- (id)initWithConfigurationOptions:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)completeInitializationForSession:(id)a0 error:(id *)a1;
- (BOOL)createRegionOfInterestCrop:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 options:(id)a1 qosClass:(unsigned int)a2 warningRecorder:(id)a3 pixelBuffer:(struct __CVBuffer **)a4 error:(id *)a5 progressHandler:(id /* block */)a6;
- (id)processRegionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 croppedPixelBuffer:(const struct __CVBuffer { } *)a1 options:(id)a2 qosClass:(unsigned int)a3 warningRecorder:(id)a4 error:(id *)a5 progressHandler:(id /* block */)a6;
- (void)recordImageCropQuickLookInfoToOptionsSafe:(id)a0 cacheKey:(id)a1 imageBuffer:(id)a2;
- (id)boundComputeDeviceForComputeStage:(id)a0 error:(id *)a1;
- (BOOL)canBehaveAsDetectorOfClass:(Class)a0 withConfiguration:(id)a1;
- (id)computeDeviceForComputeStage:(id)a0 processingOptions:(id)a1 error:(id *)a2;
- (id)computeDeviceOfTypes:(unsigned long long)a0 forComputeStage:(id)a1 processingOptions:(id)a2 error:(id *)a3;
- (BOOL)currentQueueIsSynchronizationQueue;
- (BOOL)getOptionalCanceller:(id *)a0 inOptions:(id)a1 error:(id *)a2;
- (BOOL)needsMetalContext;
- (id)newMetalContextForConfigurationOptions:(id)a0 error:(id *)a1;
- (id)processUsingQualityOfServiceClass:(unsigned int)a0 options:(id)a1 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 warningRecorder:(id)a3 error:(id *)a4 progressHandler:(id /* block */)a5;
- (void)recordImageCropQuickLookInfoFromOptions:(id)a0 toObservation:(id)a1;
- (void)recordImageCropQuickLookInfoFromOptionsSafe:(id)a0 toObservation:(id)a1;
- (void)recordImageCropQuickLookInfoToOptions:(id)a0 cacheKey:(id)a1 imageBuffer:(id)a2;
- (id)requiredCancellerInOptions:(id)a0 error:(id *)a1;
- (BOOL)shouldBeReplacedByDetectorOfClass:(Class)a0 withConfiguration:(id)a1;
- (BOOL)useGPU;
- (BOOL)validateImageBuffer:(id)a0 error:(id *)a1;
- (id)validatedImageBufferFromOptions:(id)a0 error:(id *)a1;
- (BOOL)warmUpSession:(id)a0 withOptions:(id)a1 error:(id *)a2;

@end
