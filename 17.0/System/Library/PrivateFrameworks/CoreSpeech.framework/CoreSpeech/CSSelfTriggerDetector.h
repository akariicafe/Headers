@class NSHashTable, NSString, CSContinuousVoiceTriggerConfig, CSOSTransaction, CSKeywordAnalyzerNDAPI, NSObject, CSAsset, CSSpeechManager, CSAudioStream, CSAudioTimeConverter;
@protocol OS_dispatch_queue, CSAudioStreamProviding;

@interface CSSelfTriggerDetector : NSObject <CSAudioStreamProvidingDelegate, CSSiriClientBehaviorMonitorDelegate, CSAudioServerCrashMonitorDelegate, CSPhoneCallStateMonitorDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSHashTable *observers;
@property (weak, nonatomic) CSSpeechManager *speechManager;
@property (retain, nonatomic) CSAsset *currentAsset;
@property (retain, nonatomic) CSKeywordAnalyzerNDAPI *keywordAnalyzer;
@property (nonatomic) BOOL isKeywordAnalyzerCorrupted;
@property (nonatomic) unsigned long long outputAudioChannel;
@property (retain, nonatomic) CSAudioStream *audioStream;
@property (nonatomic) BOOL isSiriClientListening;
@property (nonatomic) BOOL selfTriggerEnabled;
@property (nonatomic) BOOL isListenPollingStarting;
@property (retain, nonatomic) NSString *audioProviderUUID;
@property (retain, nonatomic) CSAudioTimeConverter *audioTimeConverter;
@property (retain, nonatomic) CSContinuousVoiceTriggerConfig *selfTriggerConfig;
@property (weak, nonatomic) id<CSAudioStreamProviding> audioTapProvider;
@property (nonatomic) unsigned long long audioSourceType;
@property (nonatomic) unsigned long long mode;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) CSOSTransaction *modelLoadTransaction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_setAsset:(id)a0;
- (void)CSAudioServerCrashMonitorDidReceiveServerRestart:(id)a0;
- (void)audioStreamProvider:(id)a0 audioChunkForTVAvailable:(id)a1;
- (void)reset;
- (void)registerObserver:(id)a0;
- (void)siriClientBehaviorMonitor:(id)a0 didStartStreamWithContext:(id)a1 successfully:(BOOL)a2 option:(id)a3 withEventUUID:(id)a4;
- (void)_reset;
- (void)start;
- (void)_startListenPollingWithInterval:(double)a0 completion:(id /* block */)a1;
- (void)audioStreamProvider:(id)a0 didStopStreamUnexpectedly:(long long)a1;
- (void)unregisterObserver:(id)a0;
- (unsigned long long)currentState;
- (void)_startListenWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_keywordAnalyzerNDAPI:(id)a0 hasResultAvailable:(id)a1 forChannel:(unsigned long long)a2;
- (BOOL)_shouldReuseBuiltInAudioProvider;
- (void)siriClientBehaviorMonitor:(id)a0 willStartStreamWithContext:(id)a1 option:(id)a2;
- (void)CSPhoneCallStateMonitor:(id)a0 didRecievePhoneCallStateChange:(unsigned long long)a1;
- (void)setAsset:(id)a0;
- (void)siriClientBehaviorMonitor:(id)a0 didStopStream:(id)a1 withEventUUID:(id)a2;
- (void)audioStreamProvider:(id)a0 audioBufferAvailable:(id)a1;
- (void)siriClientBehaviorMonitor:(id)a0 willStopStream:(id)a1 reason:(unsigned long long)a2;
- (void)_addPowerLogsIfSupported:(unsigned long long)a0;
- (unsigned long long)_getPlaybackRouteType;
- (void)_hardStopAndRestartAudioQueueIfNeeded;
- (BOOL)_isTelephonyTapAvailable;
- (void)_loadCurrentAssetToAnalyzer;
- (BOOL)_shouldAddPowerLogs;
- (void)_startListenPolling;
- (void)_stopListeningWithCompletion:(id /* block */)a0;
- (void)_transitCurrentStateTo:(unsigned long long)a0;
- (void)_unloadCurrentAssetToAnalyzer;
- (id)initWithTargetQueue:(id)a0 audioTapProvider:(id)a1 audioSourceType:(unsigned long long)a2;
- (void)startAnalyze;
- (void)stopAnalyzeWithCompletion:(id /* block */)a0;

@end
