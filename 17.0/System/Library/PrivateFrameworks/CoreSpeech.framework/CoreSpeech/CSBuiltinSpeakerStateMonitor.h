@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CSBuiltinSpeakerStateMonitor : CSEventMonitor <CSAudioServerCrashMonitorDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) unsigned long long builtInSpeakerState;
@property (nonatomic) BOOL isSpeakerMuted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)CSAudioServerCrashMonitorDidReceiveServerRestart:(id)a0;
- (void)_stopMonitoring;
- (id)init;
- (void)_startMonitoringWithQueue:(id)a0;
- (void).cxx_destruct;
- (void)_notifyObserver:(id)a0 isSpeakerMuted:(BOOL)a1;
- (void)_didReceiveBuiltinSpeakerStateChangeNotification:(unsigned long long)a0;
- (void)_didReceiveSpeakerMuteStateChangeNotification:(BOOL)a0;
- (void)_fetchSpeakerStateActiveInfo;
- (void)_fetchSpeakerStateMutedInfo;
- (BOOL)_getIsSpeakerMutedDefaultVal;
- (void)_notifyObserver:(id)a0 withBuiltinSpeakerState:(unsigned long long)a1;
- (unsigned long long)currentBuiltinSpeakerState;
- (BOOL)isBuiltinSpeakerMuted;

@end
