@interface FTMSRScaler : NSObject <FTScaling> {
    struct unique_ptr<ik::MemoryScalerRotator, std::default_delete<ik::MemoryScalerRotator>> { struct __compressed_pair<ik::MemoryScalerRotator *, std::default_delete<ik::MemoryScalerRotator>> { struct MemoryScalerRotator *__value_; } __ptr_; } _resampler;
}

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)scaleSourceBuffer:(struct __CVBuffer { } *)a0 toDestinationBuffer:(struct __CVBuffer { } *)a1 sourceROI:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 destinationROI:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (BOOL)scaleSourceBuffer:(struct __CVBuffer { } *)a0 toDestinationBuffer:(struct __CVBuffer { } *)a1 sourceROI:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 destinationROI:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 mean:(void *)a4;

@end
