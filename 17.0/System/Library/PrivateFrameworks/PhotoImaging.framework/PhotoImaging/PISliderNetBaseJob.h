@class CIRenderTask;
@protocol NUPurgeableStorage;

@interface PISliderNetBaseJob : NURenderJob {
    CIRenderTask *_renderTask;
    id<NUPurgeableStorage> _storage;
}

- (void).cxx_destruct;
- (BOOL)render:(out id *)a0;
- (BOOL)complete:(out id *)a0;
- (BOOL)networkProcessingWithResultingPixelBuffer:(struct __CVBuffer { } *)a0 error:(out id *)a1;
- (id)scalePolicy;
- (BOOL)wantsCompleteStage;
- (BOOL)wantsOutputGeometry;
- (BOOL)wantsOutputImage;

@end
