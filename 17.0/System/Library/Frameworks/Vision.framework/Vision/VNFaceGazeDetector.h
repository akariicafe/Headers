@interface VNFaceGazeDetector : VNDetector {
    struct shared_ptr<vision::mod::CamGazePredictor> { struct CamGazePredictor *__ptr_; struct __shared_weak_count *__cntrl_; } _gazePredictor;
    struct shared_ptr<vision::mod::GazeFollowPredictor> { struct GazeFollowPredictor *__ptr_; struct __shared_weak_count *__cntrl_; } _gazeFollowPredictor;
}

+ (id)supportedComputeStageDevicesForOptions:(id)a0 error:(id *)a1;
+ (id)supportedImageSizeSetForOptions:(id)a0 error:(id *)a1;
+ (id)computeStagesToBindForConfigurationOptions:(id)a0;

- (id)internalProcessUsingQualityOfServiceClass:(unsigned int)a0 options:(id)a1 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 warningRecorder:(id)a3 error:(id *)a4 progressHandler:(id /* block */)a5;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)completeInitializationForSession:(id)a0 error:(id *)a1;
- (BOOL)createRegionOfInterestCrop:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 options:(id)a1 qosClass:(unsigned int)a2 warningRecorder:(id)a3 pixelBuffer:(struct __CVBuffer **)a4 error:(id *)a5 progressHandler:(id /* block */)a6;

@end
