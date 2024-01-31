@class AVConferenceXPCClient, NSObject;
@protocol OS_dispatch_queue;

@interface AVCEffects : NSObject {
    AVConferenceXPCClient *_connection;
    NSObject<OS_dispatch_queue> *_avConferenceEffectsQueue;
    BOOL _isEffectsApplied;
    BOOL _isFaceMeshTrackingEnabled;
    struct opaqueVCRemoteImageQueue { } *_receiverQueue;
    struct opaqueVCRemoteImageQueue { } *_senderQueue;
    struct __CVBuffer { } *_lastReceivedPixelBuffer;
    struct __CVBuffer { } *_lastReceivedDepthBuffer;
}

@property (nonatomic) id delegate;
@property (nonatomic) int mode;
@property (nonatomic) int effectType;

- (void)dealloc;
- (id)initWithDelegate:(id)a0;
- (void)encodeProcessedVideoFrame:(id)a0;
- (void)avcVideoFrameDidRelease:(id)a0;
- (void)deregisterBlocksForNotifications;
- (BOOL)enqueueSampleBuffer:(struct __CVBuffer { } *)a0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)flushRemoteQueue;
- (void)registerBlocksForNotifications;
- (void)remoteQueueOperationHandlerWithError:(int)a0 operation:(struct FigRemoteOperation { int x0; int x1; unsigned long long x2; struct __CFString *x3; union { struct { struct __CFDictionary *x0; struct __CFDictionary *x1; } x0; struct { void *x0; struct __IOSurface *x1; struct __IOSurface *x2; } x1; struct { struct opaqueCMSampleBuffer *x0; unsigned long long x1; struct __CFArray *x2; } x2; struct { struct opaqueCMFormatDescription *x0; } x3; struct { long long x0; struct opaqueCMFormatDescription *x1; } x4; } x4; } *)a1;
- (BOOL)setupRemoteReceiverQueueWithSenderQueue:(id)a0;

@end
