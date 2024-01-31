@interface VNFaceAnalyzerMultiDetector : VNFaceAnalyzerMultiDetectorBase {
    struct shared_ptr<vision::mod::FaceFrontalizer> { struct FaceFrontalizer *__ptr_; struct __shared_weak_count *__cntrl_; } _mFaceFrontalizerImpl;
}

+ (unsigned int)networkRequiredInputImagePixelFormatForConfigurationOptions:(id)a0;
+ (float)faceBoundingBoxScalingFactorForFaceObservation:(unsigned long long)a0;

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)_isFaceprintJunk:(struct shared_ptr<vision::mod::ImageDescriptorBufferAbstract> { struct ImageDescriptorBufferAbstract *x0; struct __shared_weak_count *x1; })a0;
- (BOOL)completeInitializationForSession:(id)a0 error:(id *)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculateCropRectForInputFace:(id)a0 imageBuffer:(id)a1 options:(id)a2 error:(id *)a3;
- (BOOL)prepare_vImageBufferForCVPixelBuffer:(struct __CVBuffer { } *)a0 vImageBuffer:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a1 error:(id *)a2;

@end
