@class AVAudioConverter, NSArray, NSObject, NSMutableOrderedSet, NSCondition, AVAudioSession, AVAudioFormat;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface TTSWrappedAudioQueue : NSObject <TTSSynthesisProviderAudioOutput> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _bufferLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _audioQueueLock;
}

@property (nonatomic) struct OpaqueAudioQueue { } *aqRef;
@property (nonatomic) struct OpaqueAudioQueueTimeline { } *aqTimeline;
@property (retain, nonatomic) AVAudioFormat *format;
@property (retain, nonatomic) AVAudioFormat *queueFormat;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSCondition *buffersAvailable;
@property (nonatomic) unsigned int audioQueueFlags;
@property (nonatomic) BOOL shouldRebuildAudioQueue;
@property BOOL audioQueueActive;
@property (retain, nonatomic) NSMutableOrderedSet *inflightBuffers;
@property (retain, nonatomic) NSMutableOrderedSet *availableBuffers;
@property (retain, nonatomic) AVAudioSession *audioSession;
@property (nonatomic) BOOL usingSharedSession;
@property (retain, nonatomic) NSArray *channels;
@property (retain, nonatomic) AVAudioConverter *cachedAudioConverter;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *deferredStopQueue;
@property (retain) NSObject<OS_dispatch_source> *deferredStopSource;
@property (nonatomic) double startedOn;

- (BOOL)play;
- (void)pause;
- (id)init;
- (void)dealloc;
- (void)stop;
- (BOOL)isRunning;
- (void)setOutputFormat:(id)a0;
- (void).cxx_destruct;
- (void)scheduleBuffer:(id)a0 completionHandler:(id /* block */)a1;
- (void)bufferCallback:(struct AudioQueueBuffer { unsigned int x0; void *x1; unsigned int x2; void *x3; unsigned int x4; struct AudioStreamPacketDescription *x5; unsigned int x6; } *)a0;
- (BOOL)_attemptQueueStart;
- (void)_buildAudioQueue;
- (unsigned long long)_minimumBufferByteSize;
- (void)_rebuildAudioQueue;
- (void)_reconfigureQueueFormatForMultiChannelOutputIfNecessary;
- (void)_scheduleDeferredStop;
- (void)_selectChannels:(struct OpaqueAudioQueue { } *)a0;
- (BOOL)_startQueueWithRetry;
- (void)_tearDownAudioQueue;
- (id)convertBufferIfNecessary:(id)a0;
- (void)handleMediaServicesReset;
- (void)scheduleBuffer:(id)a0 completionHandler:(id /* block */)a1 lastBuffer:(BOOL)a2;

@end
