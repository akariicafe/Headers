@class _VNImageAnalyzerMultiDetectorSceneOperationPointsCache, VNRegionOfInterestTilingOptions, VisionCoreSceneNetInferenceNetworkDescriptor;

@interface VNImageAnalyzerMultiDetector : VNDetector {
    VNRegionOfInterestTilingOptions *_inputImageTilingOptions;
    int _customClassifierEspressoEngine;
    int _customClassifierEspressoDeviceID;
    unsigned long long _model;
    VisionCoreSceneNetInferenceNetworkDescriptor *_inferenceDescriptor;
    unsigned int _cachedInferenceImagePixelFormatType;
    struct shared_ptr<vision::mod::ImageClassifier_HierarchicalModel> { struct ImageClassifier_HierarchicalModel *__ptr_; struct __shared_weak_count *__cntrl_; } _defaultSceneClassificationHierarchicalModel;
    struct shared_ptr<vision::mod::ImageAnalyzer> { struct ImageAnalyzer *__ptr_; struct __shared_weak_count *__cntrl_; } _imageAnalyzer;
    struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *__begin_; unsigned long long *__end_; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *__value_; } __end_cap_; } _entityNetIndexesToReport;
    _VNImageAnalyzerMultiDetectorSceneOperationPointsCache *_operationPointsCache;
    struct shared_ptr<std::vector<std::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>>> { void *__ptr_; struct __shared_weak_count *__cntrl_; } _junkCustomClassifiers_DO_NOT_ACCESS_DIRECTLY;
    struct unique_ptr<vision::mod::ImageAnalyzer_PCA, std::default_delete<vision::mod::ImageAnalyzer_PCA>> { struct __compressed_pair<vision::mod::ImageAnalyzer_PCA *, std::default_delete<vision::mod::ImageAnalyzer_PCA>> { struct ImageAnalyzer_PCA *__value_; } __ptr_; } _imageAnalyzerPCA256_DO_NOT_ACCESS_DIRECTLY;
    struct shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier> { struct ImageAnalyzer_CustomClassifier *__ptr_; struct __shared_weak_count *__cntrl_; } _VNVYvzEtX1JlUdu8xx5qhDICustomClassifier;
    struct shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier> { struct ImageAnalyzer_CustomClassifier *__ptr_; struct __shared_weak_count *__cntrl_; } _potentialLandmarkCustomClassifier_DO_NOT_ACCESS_DIRECTLY;
    struct shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier> { struct ImageAnalyzer_CustomClassifier *__ptr_; struct __shared_weak_count *__cntrl_; } _VN5kJNH3eYuyaLxNpZr5Z7ziCustomClassifier;
    struct shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier> { struct ImageAnalyzer_CustomClassifier *__ptr_; struct __shared_weak_count *__cntrl_; } _significantEventCustomClassifier_DO_NOT_ACCESS_DIRECTLY;
    struct shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier> { struct ImageAnalyzer_CustomClassifier *__ptr_; struct __shared_weak_count *__cntrl_; } _cityNatureCustomClassifier_DO_NOT_ACCESS_DIRECTLY;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _cachedAllSceneClassificationsFromLastAnalysisAccessLock;
    struct shared_ptr<const std::vector<std::tuple<std::string, float, bool>>> { void *__ptr_; struct __shared_weak_count *__cntrl_; } _cachedAllSceneClassificationsFromLastAnalysis;
    BOOL _hasherInitialized;
}

@property (readonly) BOOL hasObjDetNet;
@property (readonly) BOOL hasSliderNet;

+ (id)configurationOptionKeysForDetectorKey;
+ (id)supportedComputeStageDevicesForOptions:(id)a0 error:(id *)a1;
+ (struct shared_ptr<vision::mod::ImageClassifier_HierarchicalModel> { struct ImageClassifier_HierarchicalModel *x0; struct __shared_weak_count *x1; })createHierarchicalModelForMultiDetectorModel:(unsigned long long)a0 error:(id *)a1;
+ (id)_saliencyHeatmapBoundingBoxGeneratorTypeForOriginatingRequestSpecifier:(id)a0;
+ (BOOL)_getAssociatedBoundingBoxGeneratorClass:(Class *)a0 options:(id *)a1 forConfigurationOptions:(id)a2 error:(id *)a3;
+ (struct shared_ptr<vision::mod::ImageClassifier_HierarchicalModel> { struct ImageClassifier_HierarchicalModel *x0; struct __shared_weak_count *x1; })createHierarchicalModelForInferenceDescriptor:(id)a0 error:(id *)a1;
+ (id)_newSaliencyHeatmapBoundingBoxGeneratorOptionsForOptions:(id)a0;
+ (id)supportedImageSizeSetForOptions:(id)a0 error:(id *)a1;
+ (id)_newInferenceDescriptorForModel:(unsigned long long)a0 configuredWithOptions:(id)a1 error:(id *)a2;
+ (id)allPhotosAdjustmentKeys;
+ (Class)detectorClassForConfigurationOptions:(id)a0 error:(id *)a1;
+ (id)computeStagesToBindForConfigurationOptions:(id)a0;
+ (unsigned long long)modelForRequestClass:(Class)a0 revision:(unsigned long long)a1;
+ (void)recordDefaultConfigurationOptionsInDictionary:(id)a0;
+ (id)disallowedListForModel:(unsigned long long)a0;
+ (id)_inferenceDescriptorForOptions:(id)a0 error:(id *)a1;

- (id)internalProcessUsingQualityOfServiceClass:(unsigned int)a0 options:(id)a1 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 warningRecorder:(id)a3 error:(id *)a4 progressHandler:(id /* block */)a5;
- (id)initWithConfigurationOptions:(id)a0;
- (id).cxx_construct;
- (id)description;
- (void).cxx_destruct;
- (BOOL)completeInitializationForSession:(id)a0 error:(id *)a1;
- (BOOL)createRegionOfInterestCrop:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 options:(id)a1 qosClass:(unsigned int)a2 warningRecorder:(id)a3 pixelBuffer:(struct __CVBuffer **)a4 error:(id *)a5 progressHandler:(id /* block */)a6;
- (id)processRegionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 croppedPixelBuffer:(const struct __CVBuffer { } *)a1 options:(id)a2 qosClass:(unsigned int)a3 warningRecorder:(id)a4 error:(id *)a5 progressHandler:(id /* block */)a6;
- (id)_processFullImagePixelBuffer:(const struct __CVBuffer { } *)a0 options:(id)a1 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 qosClass:(unsigned int)a3 warningRecorder:(id)a4 error:(id *)a5 progressHandler:(id /* block */)a6;
- (id)allCityNatureIdentifiersWithOptions:(id)a0 error:(id *)a1;
- (id)allJunkIdentifiersForOptions:(id)a0 error:(id *)a1;
- (id)allRecognizedObjectsIdentifiersWithOptions:(id)a0 error:(id *)a1;
- (id)allSceneIdentifiersWithOptions:(id)a0 error:(id *)a1;
- (id)allSignificantEventIdentifiersWithOptions:(id)a0 error:(id *)a1;
- (id)allVN5kJNH3eYuyaLxNpZr5Z7ziIdentifiersWithOptions:(id)a0 error:(id *)a1;
- (BOOL)canBehaveAsDetectorOfClass:(Class)a0 withConfiguration:(id)a1;
- (id)sceneLabelOperationPointsForOriginatingRequestSpecifier:(id)a0 error:(id *)a1;
- (BOOL)shouldBeReplacedByDetectorOfClass:(Class)a0 withConfiguration:(id)a1;
- (unsigned long long)signPostAdditionalParameter;
- (BOOL)warmUpSession:(id)a0 withOptions:(id)a1 error:(id *)a2;

@end
