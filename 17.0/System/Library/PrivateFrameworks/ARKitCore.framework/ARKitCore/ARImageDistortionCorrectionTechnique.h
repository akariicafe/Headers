@class NSDictionary;

@interface ARImageDistortionCorrectionTechnique : ARTechnique {
    struct __CVPixelBufferPool { } *_undistortedImageBufferPool;
    NSDictionary *_undistortionMappingsForRotations;
    BOOL _computeUndistortionCoefficientsForEveryFrame;
    struct optional<(anonymous namespace)::Undistorter> { union { char __null_state_; struct Undistorter { unsigned long long m_unrotatedImageWidth; unsigned long long m_unrotatedImageHeight; struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; struct __compressed_pair<float *, std::allocator<float>> { float *__value_; } __end_cap_; } m_mappingU; struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; struct __compressed_pair<float *, std::allocator<float>> { float *__value_; } __end_cap_; } m_mappingV; } __val_; } ; BOOL __engaged_; } _undistorter;
}

@property (nonatomic) struct CGSize { double width; double height; } imageSize;

- (void)dealloc;
- (id)processData:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithImageSize:(struct CGSize { double x0; double x1; })a0;
- (void)buildUVMapFromHardcodedCalibrationParameters;
- (void)buildUVMapWithCameraCalibrationData:(id)a0;
- (void)buildUVMapWithDistortedPixelProviderBlock:(id /* block */)a0;
- (struct CGPoint { double x0; double x1; })lensDistortionPointForPoint:(struct CGPoint { double x0; double x1; })a0 lookupTable:(id)a1 distortionOpticalCenter:(struct CGPoint { double x0; double x1; })a2 imageSize:(struct CGSize { double x0; double x1; })a3;
- (void)undistortImage:(struct __CVBuffer { } *)a0 toTargetImage:(struct __CVBuffer { } *)a1 imageRotationAngle:(long long)a2;

@end
