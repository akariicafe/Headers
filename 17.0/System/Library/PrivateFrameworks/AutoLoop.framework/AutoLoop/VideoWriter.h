@class AVAssetWriterInputPixelBufferAdaptor, AVAssetWriterInput, NSConditionLock, NSError, NSObject, AVAssetWriter;
@protocol OS_dispatch_queue;

@interface VideoWriter : NSObject

@property (retain) AVAssetWriter *assetWriter;
@property (retain) AVAssetWriterInput *writerInput;
@property (retain) AVAssetWriterInputPixelBufferAdaptor *inputAdaptor;
@property (retain) NSConditionLock *inputLock;
@property (retain) NSObject<OS_dispatch_queue> *frameWriteQueue;
@property long long currFrameTime;
@property long long frameIncr;
@property BOOL initFailed;
@property (readonly) float fps;
@property (readonly) long long currFrame;
@property (readonly) unsigned int imgWidth;
@property (readonly) unsigned int imgHeight;
@property (readonly) int timeScale;
@property (readonly) unsigned int pixelFormat;
@property (readonly) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } preferredTransform;
@property (readonly) NSError *lastError;

- (id)finish;
- (void).cxx_destruct;
- (id)addFrame:(struct CGImage { } *)a0;
- (void)endSessionInfer;
- (id)addFrameAsPixelBuf:(struct __CVBuffer { } *)a0 atFrameTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (id)addFrameAsPixelBuf:(struct __CVBuffer { } *)a0;
- (struct __CVBuffer { } *)createPixelBuffer;
- (void)endSessionAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)initForPath:(const char *)a0 fileType:(id)a1 codecType:(id)a2 imgWidth:(unsigned int)a3 imgHeight:(unsigned int)a4 fps:(float)a5 pixFormat:(unsigned int)a6 metadata:(id)a7;
- (id)initForURL:(id)a0 fileType:(id)a1 codecType:(id)a2 imgWidth:(unsigned int)a3 imgHeight:(unsigned int)a4 fps:(float)a5 pixFormat:(unsigned int)a6 metadata:(id)a7;
- (id)initForURL:(id)a0 fileType:(id)a1 codecType:(id)a2 imgWidth:(unsigned int)a3 imgHeight:(unsigned int)a4 fps:(float)a5 timeScale:(int)a6 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a7 pixFormat:(unsigned int)a8 metadata:(id)a9;
- (void)setInputReady;

@end
