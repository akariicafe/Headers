@class VNImageBuffer, VNRequestPerformer, VNObservationsCache, VNSession;

@interface VNImageRequestHandler : NSObject {
    VNRequestPerformer *_requestPerformer;
    VNObservationsCache *_observationsCache;
}

@property (readonly, nonatomic) VNImageBuffer *imageBuffer;
@property (readonly, nonatomic) VNSession *session;

+ (void)forcedCleanup;
+ (void)requestForcedCleanupWithOptions:(id)a0;
+ (void)requestForcedCleanupWithOptions:(id)a0 completion:(id /* block */)a1;
+ (void)requestForcedCleanup;
+ (void)forcedCleanupWithOptions:(id)a0;

- (id)debugQuickLookObject;
- (id)initWithCMSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 options:(id)a1;
- (id)initWithCIImage:(id)a0 orientation:(unsigned int)a1 options:(id)a2 session:(id)a3;
- (id)initWithCGImage:(struct CGImage { } *)a0 options:(id)a1;
- (id)initWithCIImage:(id)a0 options:(id)a1 session:(id)a2;
- (BOOL)prepareForPerformingRequests:(id)a0 error:(id *)a1;
- (id)initWithURL:(id)a0 options:(id)a1 session:(id)a2;
- (id)initWithCMSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 depthData:(id)a1 orientation:(unsigned int)a2 options:(id)a3 session:(id)a4;
- (id)initWithData:(id)a0 orientation:(unsigned int)a1 options:(id)a2;
- (id)initWithCVPixelBuffer:(struct __CVBuffer { } *)a0 orientation:(unsigned int)a1 options:(id)a2 session:(id)a3;
- (id)initWithData:(id)a0 options:(id)a1 session:(id)a2;
- (id)initWithCVPixelBuffer:(struct __CVBuffer { } *)a0 depthData:(id)a1 orientation:(unsigned int)a2 options:(id)a3 session:(id)a4;
- (BOOL)performRequests:(id)a0 gatheredForensics:(id *)a1 error:(id *)a2;
- (id)initWithURL:(id)a0 options:(id)a1;
- (id)initWithData:(id)a0 options:(id)a1;
- (id)initWithCMSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 orientation:(unsigned int)a1 options:(id)a2;
- (id)initWithCMSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 orientation:(unsigned int)a1 options:(id)a2 session:(id)a3;
- (id)initWithCIImage:(id)a0 options:(id)a1;
- (id)initWithCVPixelBuffer:(struct __CVBuffer { } *)a0 options:(id)a1;
- (id)initWithURL:(id)a0 orientation:(unsigned int)a1 options:(id)a2;
- (void).cxx_destruct;
- (id)initWithCVPixelBuffer:(struct __CVBuffer { } *)a0 options:(id)a1 session:(id)a2;
- (id)initWithCMSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 depthData:(id)a1 orientation:(unsigned int)a2 options:(id)a3;
- (id)initWithCVPixelBuffer:(struct __CVBuffer { } *)a0 depthData:(id)a1 orientation:(unsigned int)a2 options:(id)a3;
- (id)initWithData:(id)a0 orientation:(unsigned int)a1 options:(id)a2 session:(id)a3;
- (id)initWithCGImage:(struct CGImage { } *)a0 options:(id)a1 session:(id)a2;
- (id)initWithCMSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 options:(id)a1 session:(id)a2;
- (id)initWithCVPixelBuffer:(struct __CVBuffer { } *)a0 orientation:(unsigned int)a1 options:(id)a2;
- (id)initWithCGImage:(struct CGImage { } *)a0 orientation:(unsigned int)a1 options:(id)a2;
- (BOOL)performRequests:(id)a0 error:(id *)a1;
- (id)initWithCGImage:(struct CGImage { } *)a0 orientation:(unsigned int)a1 options:(id)a2 session:(id)a3;
- (id)initWithSession:(id)a0 imageBuffer:(id)a1;
- (id)initWithCIImage:(id)a0 orientation:(unsigned int)a1 options:(id)a2;
- (void)cancelAllRequests;
- (id)initWithURL:(id)a0 orientation:(unsigned int)a1 options:(id)a2 session:(id)a3;

@end
