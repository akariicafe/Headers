@class VideoAttributes, NSString, NSMutableDictionary, VCMediaRecorderHistoryBuffer, NSMutableArray, NSObject;
@protocol VCMovieWriterProtocol, OS_dispatch_queue;

@interface VCMediaRecorderHistory : NSObject <VCMediaRecorderHistoryBufferDelegate> {
    NSMutableDictionary *_writers;
    id<VCMovieWriterProtocol> _writer;
    NSString *_masterTransactionID;
    NSMutableArray *_pendingRequests;
    NSObject<OS_dispatch_queue> *_recordingQueue;
    VCMediaRecorderHistoryBuffer *_frameBuffer;
    VCMediaRecorderHistoryBuffer *_localAudioBuffer;
    VCMediaRecorderHistoryBuffer *_remoteAudioBuffer;
    NSMutableDictionary *_completionHandlers;
    NSMutableDictionary *_stillImageURLs;
    VideoAttributes *_targetScreenAttributes;
    struct __CVPixelBufferPool { } *_bufferPool;
    struct CGSize { double width; double height; } _bufferPoolResolution;
    struct __CVPixelBufferPool { } *_copyPool;
    struct OpaqueVTPixelTransferSession { } *_transferSession;
    struct OpaqueVTPixelTransferSession { } *_copyTransferSession;
    int _captureHeight;
    int _captureWidth;
    BOOL _resize;
    BOOL _isFirstFrame;
    struct __CFAllocator { } *_audioSampleBufferAllocator;
    struct tagVCMediaRecorderHistoryAudioFormat { struct opaqueCMFormatDescription *figFormat; struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } basicFormat; } _localFormat;
    struct tagVCMediaRecorderHistoryAudioFormat { struct opaqueCMFormatDescription *figFormat; struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } basicFormat; } _remoteFormat;
    struct __CFAllocator { } *_frameAllocator;
    BOOL _retainPixelBufferEnabled;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _targetScreenAttributesLock;
}

@property (nonatomic) int imageType;
@property (nonatomic) int videoCodec;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)setFrameRate:(float)a0;
- (void)cancelRequestWithTransactionID:(id)a0;
- (id)_getActiveWriters;
- (unsigned char)_mediaTypeForBuffer:(id)a0;
- (void)appendSampleWithWriter:(id)a0 buffer:(id)a1 sample:(struct opaqueCMSampleBuffer { } *)a2 mediaType:(unsigned char)a3;
- (void)cleanupTransferSession;
- (void)endRecording:(id)a0 timestamp:(unsigned int)a1 completionHandler:(id /* block */)a2;
- (void)flushHistoryBuffers;
- (id)getFilePathWithTransactionID:(id)a0 type:(unsigned char)a1;
- (void)getLivePhotoWithTransactionID:(id)a0 timestamp:(unsigned int)a1 completionHandler:(id /* block */)a2;
- (void)getPhotoWithTransactionID:(id)a0 timestamp:(unsigned int)a1 completionHandler:(id /* block */)a2;
- (void)handlePendingRequestSuccessWithSourceURL:(id)a0;
- (void)handlePendingRequestWithError:(id)a0;
- (void)handlePendingRequestsWithSourceURL:(id)a0 error:(id)a1;
- (void)handleSinglePendingRequestWithTransactionID:(id)a0 sourceURL:(id)a1;
- (void)historyBuffer:(id)a0 didDequeueSample:(struct opaqueCMSampleBuffer { } *)a1 timestamp:(unsigned int)a2;
- (void)registerDirectoryWithFilePath:(id)a0;
- (int)rewriteMovieMetadataWithURL:(id)a0 transactionID:(id)a1;
- (void)setCompletionHandler:(id /* block */)a0 forTransactionID:(id)a1;
- (void)setupResizingSessionsWithVisibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 cameraStatusBit:(unsigned char)a1;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })setupStillImageWithTimestamp:(unsigned int)a0 transactionID:(id)a1 visibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2 cameraStatusBit:(char *)a3 imageType:(int)a4;
- (void)setupWriterWithTransactionID:(id)a0 filePath:(id)a1 stillImageTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 visibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 cameraStatusBit:(unsigned char)a4;
- (void)startRecording:(unsigned char)a0 transactionID:(id)a1 timestamp:(unsigned int)a2 completionHandler:(id /* block */)a3;
- (BOOL)writeToFileWithTimestamp:(unsigned int)a0 transactionID:(id)a1 URL:(id *)a2 imageType:(int)a3;
- (BOOL)writeToLivePhotoToFileWithFrame:(struct __CVBuffer { } *)a0 transactionID:(id)a1 URL:(id *)a2 imageType:(int)a3 cameraStatusBits:(unsigned char)a4;

@end
