@class NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface PFExportGIFRequest : NSObject <NSCopying>

@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *_exportQueue;

@property (copy, nonatomic) NSURL *videoURL;
@property (nonatomic) BOOL shouldDither;
@property (nonatomic) double ditherDepth;
@property (nonatomic) double maximumFrameRate;
@property (nonatomic) unsigned long long maximumFrameSize;
@property (nonatomic, getter=isSynchronous) BOOL synchronous;

+ (struct opaqueCMSampleBuffer { } *)_copyNextSampleBuffer:(id)a0 reader:(id)a1 time:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a2 didReachEnd:(BOOL *)a3 error:(id *)a4;
+ (struct CGImage { } *)_createProcessedGIFImage:(struct opaqueCMSampleBuffer { } *)a0 options:(id)a1 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2 error:(id *)a3;
+ (BOOL)_exportGIFToURL:(id)a0 request:(id)a1 progress:(id /* block */)a2 error:(id *)a3;
+ (id)runExport:(id)a0 toURL:(id)a1 completion:(id /* block */)a2;
+ (void)runExport:(id)a0 toURL:(id)a1 progress:(id /* block */)a2 completion:(id /* block */)a3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithVideoURL:(id)a0;
- (void)_ensureValidInputs;

@end
