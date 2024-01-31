@class VNImageSourceManager, VNImageBufferCache, CIContext, VNSession, NSDictionary, CIImage, NSNumber, VNDepthRepresentation;

@interface VNImageBuffer : NSObject <VNSequencedRequestSupporting> {
    VNSession *_session;
    struct __CVBuffer { } *_origPixelBuffer;
    CIImage *_origCIImage;
    struct opaqueCMSampleBuffer { } *_origSampleBuffer;
    VNImageSourceManager *_imageSourceManager;
    VNImageBufferCache *_pixelBufferRepsCache;
    CIContext *_passedInCIContext;
    int _orientation;
    unsigned long long _origImageWidth;
    unsigned long long _origImageHeight;
    NSDictionary *_options;
    VNDepthRepresentation *_depthRepresentation;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _depthRepresentationLock;
}

@property (class, readonly) const void *mapOrientationToRotationDegrees;

@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } fullImageBufferRect;
@property (readonly) unsigned long long width;
@property (readonly) unsigned long long height;
@property (readonly) int orientation;
@property (readonly) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; } timingInfo;
@property (readonly) NSNumber *sceneStabilityMetric;
@property (readonly) VNSession *session;

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })computeCenterCropRectFromCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inImageSize:(struct CGSize { double x0; double x1; })a1 calculatedScaleX:(double *)a2 calculatedScaleY:(double *)a3;

- (id)debugQuickLookObject;
- (BOOL)wantsSequencedRequestObservationsRecording;
- (void)purgeCachedRepresentations;
- (id)initWithCIImage:(id)a0 orientation:(unsigned int)a1 options:(id)a2 session:(id)a3;
- (struct __CVBuffer { } *)createCroppedBufferWithMaxSideLengthOf:(unsigned long long)a0 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 pixelFormat:(unsigned int)a2 options:(id)a3 error:(id *)a4 pixelBufferRepsCacheKey:(id *)a5;
- (void)dealloc;
- (id)fileURL;
- (id)initWithCMSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 depthData:(id)a1 orientation:(unsigned int)a2 options:(id)a3 session:(id)a4;
- (int)aspect;
- (id)initWithData:(id)a0 orientation:(unsigned int)a1 options:(id)a2;
- (struct __CVBuffer { } *)createBufferWithMaxSideLengthOf:(unsigned long long)a0 pixelFormat:(unsigned int)a1 options:(id)a2 error:(id *)a3;
- (id)initWithCVPixelBuffer:(struct __CVBuffer { } *)a0 orientation:(unsigned int)a1 options:(id)a2 session:(id)a3;
- (id)initWithCVPixelBuffer:(struct __CVBuffer { } *)a0 depthData:(id)a1 orientation:(unsigned int)a2 options:(id)a3 session:(id)a4;
- (id)initWithURL:(id)a0 options:(id)a1;
- (struct __CVBuffer { } *)croppedBufferWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 format:(unsigned int)a2 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 options:(id)a4 error:(id *)a5;
- (struct __CVBuffer { } *)cachedPixelBufferRepresentationForKey:(id)a0;
- (id)initWithCMSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 orientation:(unsigned int)a1 options:(id)a2;
- (struct __CVBuffer { } *)croppedBufferWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 format:(unsigned int)a2 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 options:(id)a4 error:(id *)a5 pixelBufferRepsCacheKey:(id *)a6;
- (id)initWithCMSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 orientation:(unsigned int)a1 options:(id)a2 session:(id)a3;
- (int)aspectForRegionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGImage { } *)originalCGImage;
- (id)initWithCVPixelBuffer:(struct __CVBuffer { } *)a0 options:(id)a1;
- (BOOL)getCameraOpticalCenterIfAvailable:(struct CGPoint { double x0; double x1; } *)a0;
- (id)initWithURL:(id)a0 orientation:(unsigned int)a1 options:(id)a2;
- (void).cxx_destruct;
- (BOOL)getCameraIntrinsicsAvailable:(struct { void /* unknown type, empty encoding */ x0[3]; } *)a0;
- (id)sequencedRequestPreviousObservationsKey;
- (id)augmentedBuffersWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 format:(unsigned int)a2 options:(id)a3 augmentationOptions:(id)a4 error:(id *)a5;
- (id)initWithCMSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 depthData:(id)a1 orientation:(unsigned int)a2 options:(id)a3;
- (struct __CVBuffer { } *)bufferWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 format:(unsigned int)a2 options:(id)a3 error:(id *)a4 pixelBufferRepsCacheKey:(id *)a5;
- (id)initWithCVPixelBuffer:(struct __CVBuffer { } *)a0 depthData:(id)a1 orientation:(unsigned int)a2 options:(id)a3;
- (id)augmentedCroppedBuffersWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 format:(unsigned int)a2 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 options:(id)a4 augmentationOptions:(id)a5 error:(id *)a6;
- (struct __CVBuffer { } *)bufferWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 format:(unsigned int)a2 options:(id)a3 error:(id *)a4;
- (id)initWithData:(id)a0 orientation:(unsigned int)a1 options:(id)a2 session:(id)a3;
- (struct __CVBuffer { } *)cropAndScaleBufferWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 format:(unsigned int)a3 imageCropAndScaleOption:(unsigned long long)a4 options:(id)a5 error:(id *)a6 calculatedNormalizedOriginOffset:(struct CGPoint { double x0; double x1; } *)a7 calculatedScaleX:(double *)a8 calculatedScaleY:(double *)a9;
- (BOOL)getPixelFocalLengthIfAvailable:(float *)a0;
- (struct __CVBuffer { } *)cropAndScaleBufferWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 format:(unsigned int)a3 imageCropAndScaleOption:(unsigned long long)a4 options:(id)a5 error:(id *)a6 calculatedNormalizedOriginOffset:(struct CGPoint { double x0; double x1; } *)a7 calculatedScaleX:(double *)a8 calculatedScaleY:(double *)a9 pixelBufferRepsCacheKey:(id *)a10;
- (id)initWithCVPixelBuffer:(struct __CVBuffer { } *)a0 orientation:(unsigned int)a1 options:(id)a2;
- (id)initWithCGImage:(struct CGImage { } *)a0 orientation:(unsigned int)a1 options:(id)a2;
- (id)imageProperties;
- (struct __CVBuffer { } *)originalPixelBuffer;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })makeClippedRectAgainstImageExtentUsingOriginalRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCGImage:(struct CGImage { } *)a0 orientation:(unsigned int)a1 options:(id)a2 session:(id)a3;
- (id)initWithCIImage:(id)a0 orientation:(unsigned int)a1 options:(id)a2;
- (id)initWithURL:(id)a0 orientation:(unsigned int)a1 options:(id)a2 session:(id)a3;

@end
