@class NSString, NSObject, NSHashTable;
@protocol OS_dispatch_queue;

@interface CSVoiceTriggerEventsCoordinator : NSObject <CSAudioRouteChangeMonitorDelegate, CSBluetoothWirelessSplitterMonitorDelegate, CSVoiceTriggerDelegate> {
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_targetQueue;
    BOOL _isHearstRouted;
    BOOL _isHearstOwned;
    BOOL _hasStarted;
    unsigned long long _splitterState;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)setTargetQueue:(id)a0;
- (void)_notifySpeakerReject:(id)a0;
- (id)init;
- (void)voiceTriggerDidDetectKeyword:(id)a0 myriadHash:(id)a1 remoteTriggerType:(unsigned long long)a2 remoteDeviceId:(id)a3 isTriggeredFromFullWake:(BOOL)a4 completion:(id /* block */)a5;
- (void)registerObserver:(id)a0;
- (void)start;
- (void)CSBluetoothWirelessSplitterMonitor:(id)a0 didReceiveSplitterStateChange:(unsigned long long)a1 shouldDisableSpeakerVerificationInSplitterMode:(BOOL)a2;
- (void)_notifyRaiseToSpeakTriggerEvent:(id)a0;
- (void)CSAudioRouteChangeMonitor:(id)a0 didReceiveAudioRouteChangeEvent:(long long)a1;
- (void)unregisterObserver:(id)a0;
- (void)voiceTriggerDidDetectKeyword:(id)a0 deviceId:(id)a1 completion:(id /* block */)a2;
- (void)_notifyRemoteTriggerEvent:(id)a0 myriadHash:(id)a1 remoteTriggerType:(unsigned long long)a2 remoteDeviceId:(id)a3 isTriggeredFromFullWake:(BOOL)a4 completion:(id /* block */)a5;
- (void)voiceTriggerGotSuperVector:(id)a0;
- (void)_notifySuperVector:(id)a0;
- (void)raiseToSpeakDetected:(id)a0;
- (void)voiceTriggerDidDetectSpeakerReject:(id)a0;
- (id)_myriadPhashFromVoiceTriggerInfo:(id)a0;
- (void)keywordDetectorDidDetectKeyword;
- (void)_notifyKeywordReject:(id)a0 deviceId:(id)a1;
- (void)_notifyKeywordDetect;
- (id)_createVoiceTriggerEventInfoString:(id)a0;
- (BOOL)_isVoiceTriggerFromRemora:(id)a0;
- (void)_printVoiceTriggerMetricsString:(id)a0;
- (void).cxx_destruct;
- (void)_notifyWakeKeywordSpokenEvent:(id)a0 deviceId:(id)a1;
- (BOOL)_shouldIgnoreVoiceTriggerEvent:(id)a0;
- (void)_notifyTriggerEvent:(id)a0 deviceId:(id)a1 completion:(id /* block */)a2;
- (void)voiceTriggerDidDetectKeyword:(id)a0 deviceId:(id)a1;
- (BOOL)_isVoiceTriggerFromHearst:(id)a0;
- (void)voiceTriggerDidDetectNearMiss:(id)a0 deviceId:(id)a1;
- (void)_notifyNearMissEvent:(id)a0 deviceId:(id)a1;
- (void)voiceTriggerDidRejected:(id)a0 deviceId:(id)a1;

@end
