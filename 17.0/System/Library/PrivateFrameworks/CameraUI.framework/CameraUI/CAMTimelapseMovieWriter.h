@class NSString, NSArray, AVAssetWriter, NSMutableDictionary, NSOperationQueue, NSMutableSet, NSObject, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor;
@protocol OS_dispatch_queue;

@interface CAMTimelapseMovieWriter : NSObject <CAMTimelapseMovieWriterProtocol>

@property (readonly, nonatomic) NSArray *_frameFilePaths;
@property (readonly, nonatomic) long long _nextReadFileIndex;
@property (readonly, nonatomic) long long _residentImageDataCount;
@property (readonly, nonatomic) long long _residentPixelBufferCount;
@property (readonly, nonatomic) NSMutableDictionary *_availableImageData;
@property (readonly, nonatomic) NSMutableDictionary *_availablePixelBuffers;
@property (readonly, nonatomic) NSMutableSet *_inFlightReadFrameIndexes;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_synchronizationQueue;
@property (readonly, nonatomic) NSOperationQueue *_imageReadQueue;
@property (readonly, nonatomic) NSOperationQueue *_imageDecodeQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_movieWritingQueue;
@property (readonly, nonatomic) AVAssetWriter *_writer;
@property (readonly, nonatomic) AVAssetWriterInput *_videoInput;
@property (readonly, nonatomic) AVAssetWriterInputPixelBufferAdaptor *_pixelBufferAdaptor;
@property (readonly, nonatomic) long long _framesPerSecond;
@property (readonly, nonatomic) long long _nextWriteFileIndex;
@property (readonly, nonatomic) long long _currentOutputFrameIndex;
@property (readonly, copy, nonatomic) id /* block */ _completion;
@property (nonatomic, getter=isSuspended) BOOL suspended;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)_reset;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)writeMovieFromImageFiles:(id)a0 visMetadataFiles:(id)a1 startDate:(id)a2 location:(id)a3 outputPath:(id)a4 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a5 framesPerSecond:(long long)a6 preferHEVC:(BOOL)a7 completionHandler:(id /* block */)a8;
- (struct CGSize { double x0; double x1; })_desiredOutputSizeForFrameSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)_appendPixelBuffer:(struct __CVBuffer { } *)a0;
- (void)_enqueueNextDecode;
- (void)_enqueueNextRead;
- (void)_enqueueNextWrite;
- (void)_finishMovieWithCompletionHandler:(id /* block */)a0;
- (void)_setMetadataOnVideoTrackAssetWriterInput:(id)a0;
- (BOOL)_startWritingWithOutputPath:(id)a0 width:(long long)a1 height:(long long)a2 videoFormatDescription:(struct opaqueCMFormatDescription { } *)a3 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a4 framesPerSecond:(long long)a5 frameCount:(long long)a6 preferHEVC:(BOOL)a7 videoMetadata:(id)a8;

@end
