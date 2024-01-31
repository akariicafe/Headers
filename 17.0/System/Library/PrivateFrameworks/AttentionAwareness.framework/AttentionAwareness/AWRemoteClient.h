@class NSXPCConnection, NSString, NSArray, NSSet, AWScheduler, NSObject, AWAttentionAwarenessConfiguration, AWAttentionEvent;
@protocol OS_dispatch_queue, AWFrameworkClient;

@interface AWRemoteClient : NSObject <AWRemoteClient> {
    NSObject<OS_dispatch_queue> *_queue;
    AWScheduler *_scheduler;
    id<AWFrameworkClient> _proxy;
    NSXPCConnection *_connection;
    unsigned long long _tagIndex;
    unsigned long long _notificationMask;
    unsigned long long _eventMask;
    unsigned long long _attentionLostEventMask;
    BOOL _sampleWhileAbsent;
    BOOL _retroactiveTimeoutMode;
    BOOL _continuousFaceDetectMode;
    NSSet *_digitizerDisplayUUIDs;
    NSSet *_keyboardDisplayUUIDs;
    NSSet *_buttonDisplayUUIDs;
    NSArray *_attentionLostTimeoutsSec;
    NSSet *_allowedHIDEventsForRemoteEvent;
    struct { double x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; BOOL x8; BOOL x9; BOOL x10; } *_clientState;
    AWAttentionEvent *_lastEvent;
    AWAttentionAwarenessConfiguration *_lastConfig;
}

@property (copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long samplingInterval;
@property (readonly, nonatomic) unsigned long long samplingDelay;
@property (readonly, nonatomic) BOOL invalid;
@property (readonly, nonatomic) int clientIndex;
@property (nonatomic) unsigned long long streamingStartTime;
@property (nonatomic) double streamingDuration;
@property (readonly, nonatomic) BOOL activateAttentionDetection;
@property (readonly, nonatomic) BOOL activateMotionDetect;
@property (readonly, nonatomic) BOOL activateEyeRelief;

- (void)deliverPollEventType:(unsigned long long)a0 event:(id)a1;
- (void)deliverNotification:(unsigned long long)a0;
- (BOOL)shouldInitBeSent;
- (void)notifyEvent:(unsigned long long)a0 timestamp:(unsigned long long)a1;
- (void)invalidateWithHandler:(id /* block */)a0;
- (void)resetAttentionLostTimerWithReply:(id /* block */)a0;
- (void)pingWithReply:(id /* block */)a0;
- (void)deliverEvent:(id)a0;
- (void)invalidate;
- (void)notifyClientOfStreamingEvent:(id)a0;
- (void)updateDeadlinesForTime:(unsigned long long)a0;
- (id)connection;
- (unsigned long long)_activeEventMask;
- (unsigned long long)nextSampleTime;
- (id)description;
- (BOOL)_interestedInHIDEvent:(struct __IOHIDEvent { } *)a0 mask:(unsigned long long)a1 metadata:(union { struct AWFaceDetectMetadata { BOOL x0; double x1; double x2; double x3; unsigned long long x4; double x5; unsigned long long x6; double x7; unsigned long long x8; float x9[16]; } x0; struct AWRemoteMetadata { long long x0; long long x1; unsigned long long x2; BOOL x3; } x1; struct AWDigitizerButtonKeyboardMetadata { unsigned long long x0; struct __CFString *x1; } x2; } *)a2 senderID:(unsigned long long)a3 displayUUID:(id)a4;
- (void)pollWithTimeout:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)updateEventTimesForMask:(unsigned long long)a0 timestamp:(unsigned long long)a1;
- (id)initWithProxy:(id)a0 connection:(id)a1 clientConfig:(id)a2 clientIndex:(int)a3 scheduler:(id)a4 error:(id *)a5;
- (void)initializeClientState;
- (BOOL)_isSamplingClient;
- (void).cxx_destruct;
- (void)_resetAttentionLostTimer;
- (void)notifyHIDEvent:(struct __IOHIDEvent { } *)a0 mask:(unsigned long long)a1 timestamp:(unsigned long long)a2 senderID:(unsigned long long)a3 displayUUID:(id)a4;
- (void)reevaluateConfig;
- (unsigned long long)nextAttentionLostTime:(BOOL *)a0;
- (void)getLastEvent:(id /* block */)a0;
- (BOOL)_setClientConfig:(id)a0 shouldReset:(BOOL)a1 error:(id *)a2;
- (BOOL)isStreamingClient;
- (void)streamFaceDetectEventsWithReply:(id /* block */)a0;
- (void)notifyEvent:(unsigned long long)a0 timestamp:(unsigned long long)a1 metadata:(union { struct AWFaceDetectMetadata { BOOL x0; double x1; double x2; double x3; unsigned long long x4; double x5; unsigned long long x6; double x7; unsigned long long x8; float x9[16]; } x0; struct AWRemoteMetadata { long long x0; long long x1; unsigned long long x2; BOOL x3; } x1; struct AWDigitizerButtonKeyboardMetadata { unsigned long long x0; struct __CFString *x1; } x2; } *)a2;
- (void)cancelFaceDetectStreamWithReply:(id /* block */)a0;
- (unsigned long long)nextTimerForTime:(unsigned long long)a0;
- (void)notifyStreamingClientOfInterruption:(unsigned long long)a0;
- (void)setClientConfig:(id)a0 shouldReset:(BOOL)a1 reply:(id /* block */)a2;

@end
