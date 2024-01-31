@class NSObject, NSString, VSMappedData, NSMutableArray, NSError, AVSampleBufferRenderSynchronizer, AVSampleBufferAudioRenderer;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface VSAudioPlaybackServiceAVSBAR : NSObject <VSAudioPlaybackServiceProtocol, AFAudioPowerProviding>

@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } audioQueueBufferLock;
@property (nonatomic) struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } asbd;
@property (retain, nonatomic) AVSampleBufferAudioRenderer *renderer;
@property (retain, nonatomic) AVSampleBufferRenderSynchronizer *synchronizer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dataQueue;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } stateLock;
@property (nonatomic) long long state;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } mappedAudioQueuedTimeStamp;
@property (nonatomic) double rendererEnqueuedAudioDuration;
@property (retain, nonatomic) NSString *outputRoute;
@property (retain, nonatomic) VSMappedData *mappedData;
@property (retain, nonatomic) NSMutableArray *enqueuedMappedAudioInfo;
@property (nonatomic) BOOL startedProvidingData;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *noRemainTasks;
@property (nonatomic) unsigned int sessionID;
@property (readonly, nonatomic) BOOL discontinuedDuringPlayback;
@property (retain, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pause;
- (void)dealloc;
- (id)start;
- (BOOL)getAveragePower:(float *)a0 andPeakPower:(float *)a1;
- (void)stop;
- (void)willBeginAccessPower;
- (void)didEndAccessPower;
- (void).cxx_destruct;
- (void)removeTimeObserver:(id)a0;
- (double)duration:(id)a0;
- (void)handleMediaServerReset;
- (void)stopWaiting;
- (void)_play;
- (void)provideMoreData;
- (void)_startProvidingData;
- (id)addBoundaryTimeObserverForTimes:(id)a0 usingBlock:(id /* block */)a1;
- (void)addEndOfDataAttachment;
- (id)audioPowerProvider;
- (struct opaqueCMSampleBuffer { } *)createSampleBuffer:(id)a0;
- (void)createSampleBufferIdNeeded:(id)a0;
- (struct opaqueCMSampleBuffer { } *)createSilenceEndBuffer;
- (void)enqueue:(id)a0 packetCount:(long long)a1 packetDescriptions:(id)a2;
- (void)flushAndStop;
- (void)freeAudioQueue;
- (id)initWithAudioSessionID:(unsigned int)a0 asbd:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })a1;

@end
