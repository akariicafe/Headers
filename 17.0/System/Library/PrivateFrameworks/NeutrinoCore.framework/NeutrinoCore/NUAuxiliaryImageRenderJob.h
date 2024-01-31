@class NUCVPixelBuffer, CIRenderTask;
@protocol NUAuxiliaryImage, NUImageProperties;

@interface NUAuxiliaryImageRenderJob : NURenderJob {
    unsigned int _pixelFormat;
    CIRenderTask *_renderTask;
    NUCVPixelBuffer *_pixelBuffer;
}

@property (retain) id<NUImageProperties> imageProperties;
@property (retain) id<NUAuxiliaryImage> auxiliaryImage;
@property long long auxiliaryImageType;

- (id)result;
- (void).cxx_destruct;
- (void)cleanUp;
- (BOOL)render:(out id *)a0;
- (BOOL)complete:(out id *)a0;
- (id)newRenderPipelineStateForEvaluationMode:(long long)a0;
- (BOOL)prepare:(out id *)a0;
- (id)scalePolicy;
- (BOOL)wantsOutputGeometry;
- (BOOL)wantsOutputImage;
- (BOOL)wantsRenderScaleClampedToNativeScale;
- (id)evaluateOutputGeometry:(out id *)a0;
- (BOOL)wantsPrepareNodeCached;
- (BOOL)wantsRenderNodeCached;

@end
