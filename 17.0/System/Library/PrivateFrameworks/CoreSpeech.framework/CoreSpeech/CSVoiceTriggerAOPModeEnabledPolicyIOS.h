@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CSVoiceTriggerAOPModeEnabledPolicyIOS : CSPolicy <CSSiriClientBehaviorMonitorDelegate, CSIntuitiveConvAudioCaptureMonitorDelegate> {
    NSObject<OS_dispatch_queue> *_recordStateQueue;
}

@property (nonatomic) BOOL isSiriClientConsideredAsRecord;
@property (retain, nonatomic) NSString *pendingRecordingStopUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_isHearstRoutedAndWithNoPhoneCall;
- (BOOL)_isSpeechDetectionDevicePresent;
- (id)init;
- (void)siriClientBehaviorMonitor:(id)a0 didStartStreamWithContext:(id)a1 successfully:(BOOL)a2 option:(id)a3 withEventUUID:(id)a4;
- (void)intuitiveConvAudioCaptureMonitorDidStopAudioCapture:(id)a0 stopStreamOption:(id)a1 eventUUID:(id)a2;
- (BOOL)_isAudioRouteIneligibleForAP;
- (void)_addConditionsForIOSAOP;
- (void)siriClientBehaviorMonitor:(id)a0 didChangedRecordState:(BOOL)a1 withEventUUID:(id)a2 withContext:(id)a3;
- (BOOL)_isInPhoneCallStateWithHSPhoneCallCapableRoute;
- (BOOL)_isJarvisRouted;
- (void)_subscribeEventMonitors;
- (void)_addConditionsForIOSBargeIn;
- (void)_handleClientRecordStateDidChange:(BOOL)a0 eventUUID:(id)a1;
- (void).cxx_destruct;
- (void)siriClientBehaviorMonitor:(id)a0 willStartStreamWithContext:(id)a1 option:(id)a2;
- (void)_addVoiceTriggerAOPModeEnabledConditions;
- (void)intuitiveConvAudioCaptureMonitor:(id)a0 didStartAudioCaptureSuccessfully:(BOOL)a1 option:(id)a2 eventUUID:(id)a3;
- (void)siriClientBehaviorMonitor:(id)a0 didStopStream:(id)a1 withEventUUID:(id)a2;
- (void)siriClientBehaviorMonitor:(id)a0 willStopStream:(id)a1 reason:(unsigned long long)a2;

@end
