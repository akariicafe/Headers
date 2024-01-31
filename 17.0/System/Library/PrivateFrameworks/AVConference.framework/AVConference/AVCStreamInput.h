@class AVConferenceXPCClient, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface AVCStreamInput : NSObject {
    AVConferenceXPCClient *_xpcConnection;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    id _delegate;
    NSString *_description;
    BOOL _isStarted;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastHealthPrintTime;
    struct opaqueVCRemoteImageQueue { } *_senderQueue;
    BOOL _useFigRemoteQueue;
    BOOL _didInitializeSuccessfully;
    BOOL _serverDiedWhileStarted;
    unsigned long long _memoryPoolSize;
    char _streamInputIDString[20];
    BOOL _printSampleBufferDetailsEnabled;
    BOOL _requireTileIndexAttachment;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _senderQueueLock;
    struct tagAVCStreamInputDataStats { unsigned int sampleBufferCount; struct { long long value; int timescale; unsigned int flags; long long epoch; } lastSampleBufferTime; float averageBitrate; } _payloadStats;
    struct tagAVCStreamInputDataStats { unsigned int sampleBufferCount; struct { long long value; int timescale; unsigned int flags; long long epoch; } lastSampleBufferTime; float averageBitrate; } _tileIndexStats[2];
}

@property (readonly) NSObject<OS_dispatch_queue> *xpcQueue;
@property (readonly, nonatomic) long long streamInputID;
@property (readonly, nonatomic) struct opaqueCMFormatDescription { } *formatDescription;
@property (readonly, nonatomic) struct __CFAllocator { } *sampleBufferAllocator;

- (void)dealloc;
- (id)delegate;
- (int)setupXPCConnection;
- (id)description;
- (void)didStart;
- (void)resetStats;
- (void)didStop;
- (int)processOptions:(id)a0;
- (void)registerService:(char *)a0 weakSelf:(id)a1 block:(id /* block */)a2;
- (int)initializeServerSideInputStream;
- (void)senderQueueLock;
- (int)createAndAddRemoteQueueToXPCDictionary:(id)a0;
- (void)deregisterBlocksForNotifications;
- (void)didResume;
- (void)didServerDie;
- (void)didSuspend;
- (id)formatDescriptionString;
- (id)initWithDelegate:(id)a0 delegateQueue:(id)a1 format:(struct opaqueCMFormatDescription { } *)a2 options:(id)a3 error:(id *)a4;
- (id)newRemoteQueueWithServerPid:(int)a0;
- (int)processFormat:(struct opaqueCMFormatDescription { } *)a0;
- (BOOL)pushSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 error:(id *)a1;
- (void)registerBlocksForNotification;
- (void)registerDidServerDieBlock:(id)a0;
- (int)resetXPCConnection;
- (BOOL)sendSampleBufferOverXPC:(struct opaqueCMSampleBuffer { } *)a0 error:(id *)a1;
- (void)senderQueueUnlock;
- (int)setupDelegate:(id)a0 delegateQueue:(id)a1;
- (int)setupXPCQueue;
- (void)tearDownConnectionWithTerminateMessage:(BOOL)a0;
- (void)tearDownRemoteQueue;

@end
