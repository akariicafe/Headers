@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface VCEffectsManager : NSObject {
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;
    BOOL _effectsRegistered;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _loggingLock;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastPrintTimestamp;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastReceivedTimestamp;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastSentTimestamp;
    int _consecutiveDroppedFrameCount;
    int _sentFrameCount;
    int _receivedFrameCount;
    int _droppedFrameCount;
    int _failedFrameCount;
    BOOL _forceDisableEffectsHealthCheck;
    struct opaqueVCRemoteImageQueue { } *_receiverQueue;
    struct __CFAllocator { } *_bufferAllocator;
    struct __CVBuffer { } *_lastReceivedPixelBuffer;
    struct __CVBuffer { } *_lastReceivedDepthBuffer;
    int _thermalPressureLevel;
}

@property (nonatomic) id delegate;
@property (retain) NSMutableArray *effectsArray;
@property (readonly, nonatomic) struct opaqueVCRemoteImageQueue { } *senderQueue;

+ (id)sharedManager;

- (id)init;
- (void)dealloc;
- (void)registerBlocksForService;
- (BOOL)createAllocators;
- (void)effectsRegistered:(BOOL)a0;
- (void)encodeProcessedPixelBuffer:(struct __CVBuffer { } *)a0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 imageData:(id)a2 processTime:(id)a3;
- (void)flushRemoteQueue;
- (BOOL)initializeReceiveQueue:(id)a0 error:(id *)a1;
- (BOOL)isFaceMeshTrackingEnabled;
- (void)releaseAllocators;
- (void)remoteQueueOperationHandlerWithError:(int)a0 operation:(struct FigRemoteOperation { int x0; int x1; unsigned long long x2; struct __CFString *x3; union { struct { struct __CFDictionary *x0; struct __CFDictionary *x1; } x0; struct { void *x0; struct __IOSurface *x1; struct __IOSurface *x2; } x1; struct { struct opaqueCMSampleBuffer *x0; unsigned long long x1; struct __CFArray *x2; } x2; struct { struct opaqueCMFormatDescription *x0; } x3; struct { long long x0; struct opaqueCMFormatDescription *x1; } x4; } x4; } *)a1;
- (void)resetEffectsLogging;
- (void)tearDownRemoteQueues;
- (void)updateThermalLevel:(int)a0;

@end
