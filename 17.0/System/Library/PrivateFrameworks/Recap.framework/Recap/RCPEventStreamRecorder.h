@class RCPRecorderConfig;
@protocol RCPAnalyticsEventSender;

@interface RCPEventStreamRecorder : RCPEventStream {
    struct __IOHIDEvent { } *_startLocationEvent;
}

@property (nonatomic) long long state;
@property (nonatomic) unsigned long long startTimestamp;
@property (nonatomic) struct __IOHIDEvent { } *startLocationEvent;
@property (retain, nonatomic) id<RCPAnalyticsEventSender> analyticsEventSender;
@property (readonly, nonatomic) RCPRecorderConfig *config;
@property (readonly, nonatomic, getter=isRecording) BOOL recording;

+ (id)recorderWithConfiguration:(id)a0;

- (void)stopRecording;
- (void)startRecording;
- (void)enqueueEvent:(id)a0;
- (void)dealloc;
- (void)finalizeEvents;
- (void)_finalizePointerEvents;
- (void).cxx_destruct;

@end
