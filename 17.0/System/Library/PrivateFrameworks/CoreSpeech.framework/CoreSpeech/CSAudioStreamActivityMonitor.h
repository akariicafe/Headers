@class NSObject;
@protocol OS_dispatch_queue;

@interface CSAudioStreamActivityMonitor : CSEventMonitor

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL hasNonVoiceTriggerStreamsActive;

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (id)init;
- (void)_startMonitoringWithQueue:(id)a0;
- (void).cxx_destruct;
- (BOOL)hasNonVoiceTriggerStreamsOrStreamHoldersActive;
- (void)notifyActiveStreamsChanged:(id)a0 streamHolders:(id)a1 streamId:(unsigned long long)a2;

@end
