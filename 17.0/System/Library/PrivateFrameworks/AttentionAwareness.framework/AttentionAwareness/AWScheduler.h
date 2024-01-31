@class NSUserDefaults, NSString, AWAttentionSampler, NSMutableDictionary, AWAttentionStreamer, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_source, AWSchedulerObserver;

@interface AWScheduler : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
    NSMutableArray *_clients;
    NSMutableDictionary *_streamingClients;
    NSMutableDictionary *_interruptedStreamingClients;
    AWAttentionStreamer *_attentionStreamer;
    struct mach_timebase_info { unsigned int numer; unsigned int denom; } _timebase;
    NSUserDefaults *_userDefaults;
    BOOL _useAVFoundation;
}

@property (weak, nonatomic) id<AWSchedulerObserver> observer;
@property (readonly, nonatomic) AWAttentionSampler *attentionSampler;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL allowFaceDetect;
@property (readonly, nonatomic) BOOL allowHIDEvents;
@property (readonly, nonatomic) BOOL allowMotionDetect;
@property (readonly, nonatomic) BOOL unitTestMode;

+ (id)sharedScheduler;
+ (id)sharedUnitTestScheduler;
+ (id)sharedMotionDetectScheduler;

- (void)setSmartCoverClosed:(BOOL)a0;
- (void)addClient:(id)a0;
- (id)cancelFaceDetectStream:(id)a0 withIdentifier:(id)a1;
- (id)streamFaceDetectEvents;
- (BOOL)canRunMotionDetect;
- (void)reevaluate;
- (BOOL)shouldActivateMotionDetectForSampling;
- (id)addStreamingClient:(id)a0 withIdentifier:(int)a1;
- (void)processHIDEvent:(struct __IOHIDEvent { } *)a0 mask:(unsigned long long)a1 timestamp:(unsigned long long)a2 senderID:(unsigned long long)a3 displayUUID:(id)a4;
- (id)description;
- (void)removeInvalidClients;
- (void)setClientAsInterrupted:(id)a0 forKey:(id)a1;
- (id)streamFaceDetectEventsWithOptions:(struct { BOOL x0; BOOL x1; })a0;
- (void)removeInvalidClientsWithConnection:(id)a0;
- (void).cxx_destruct;
- (void)removeStreamingClientwithIdentifier:(int)a0;
- (void)armEvents;
- (id)initWithOptions:(id)a0;
- (BOOL)shouldActivateEyeReliefForStreaming;
- (BOOL)shouldActivateAttentionDetectForStreaming;
- (BOOL)shouldActivateAttentionDetectionForSampling;
- (unsigned long long)nextSamplingTimeForSamplingInterval:(unsigned long long)a0;
- (void)handleNotification:(unsigned long long)a0;
- (double)calculateTimeDelta:(unsigned long long)a0 endTime:(unsigned long long)a1 timebase:(struct mach_timebase_info { unsigned int x0; unsigned int x1; })a2;

@end
