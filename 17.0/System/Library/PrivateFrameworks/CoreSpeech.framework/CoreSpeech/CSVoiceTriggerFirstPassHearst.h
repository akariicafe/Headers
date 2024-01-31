@class NSMutableDictionary, CSPhoneCallStateMonitor, CSOtherAppRecordingStateMonitor, CSVoiceTriggerUserSelectedPhrase, NSObject, CSSpeechManager, CSSiriClientBehaviorMonitor, CSVoiceTriggerAirPodWearerDetectionConfig, CSAudioProvider, NSString, NSArray, CSVoiceTriggerEnabledMonitor, CSAudioStreamHolding, CSAsset;
@protocol OS_dispatch_queue, CSVoiceTriggerDelegate;

@interface CSVoiceTriggerFirstPassHearst : NSObject <CSActivationEventNotificationHandlerDelegate, CSSiriClientBehaviorMonitorDelegate, CSPhoneCallStateMonitorDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableDictionary *hearstSecondPassRequests;
@property (retain, nonatomic) CSAsset *currentAsset;
@property (retain, nonatomic) CSVoiceTriggerAirPodWearerDetectionConfig *airpodWearerConfig;
@property (nonatomic) float remoteMicVADThreshold;
@property (nonatomic) float remoteMicVADMyriadThreshold;
@property (nonatomic) float minimumPhraseLengthForVADGating;
@property (retain, nonatomic) NSArray *phrasesToSkipBoronDecisionMaking;
@property (retain, nonatomic) CSAudioStreamHolding *triggeredAudioStreamHolding;
@property (retain, nonatomic) CSAudioProvider *triggeredAudioProvider;
@property (retain, nonatomic) CSSpeechManager *speechManager;
@property (retain, nonatomic) CSPhoneCallStateMonitor *phoneCallStateMonitor;
@property (nonatomic) unsigned long long phoneCallState;
@property (retain, nonatomic) CSOtherAppRecordingStateMonitor *otherAppRecordingStateMonitor;
@property (retain, nonatomic) CSSiriClientBehaviorMonitor *siriClientBehaviorMonitor;
@property (retain, nonatomic) CSVoiceTriggerEnabledMonitor *voiceTriggerEnabledMonitor;
@property (retain, nonatomic) CSVoiceTriggerUserSelectedPhrase *multiPhraseEnabledStatus;
@property (weak, nonatomic) id<CSVoiceTriggerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_setAsset:(id)a0;
- (id)init;
- (void)reset;
- (void)siriClientBehaviorMonitor:(id)a0 didStartStreamWithContext:(id)a1 successfully:(BOOL)a2 option:(id)a3 withEventUUID:(id)a4;
- (void)_reset;
- (void)start;
- (void).cxx_destruct;
- (void)siriClientBehaviorMonitor:(id)a0 willStartStreamWithContext:(id)a1 option:(id)a2;
- (void)CSPhoneCallStateMonitor:(id)a0 didRecievePhoneCallStateChange:(unsigned long long)a1;
- (void)setAsset:(id)a0;
- (void)siriClientBehaviorMonitor:(id)a0 didStopStream:(id)a1 withEventUUID:(id)a2;
- (void)activationEventNotificationHandler:(id)a0 event:(id)a1 completion:(id /* block */)a2;
- (void)siriClientBehaviorMonitor:(id)a0 willStopStream:(id)a1 reason:(unsigned long long)a2;
- (void)_handleRemoteMicVoiceTriggerEvent:(id)a0 secondPassRequest:(id)a1 completion:(id /* block */)a2;
- (id)initWithSpeechManager:(id)a0 voiceTriggerEnabledMonitor:(id)a1 siriClientBehaviorMonitor:(id)a2 phoneCallStateMonitor:(id)a3 otherAppRecordingStateMonitor:(id)a4;
- (void)_cancelAllAudioStreamHoldings;
- (void)_handleRemoteMicVADEventWithSecondPassRequest:(id)a0;
- (void)_handleSecondPassResult:(id)a0 secondPassRequest:(id)a1 deviceId:(id)a2 requestOption:(id)a3 error:(id)a4 completion:(id /* block */)a5;
- (void)_requestStartAudioStreamWitContext:(id)a0 secondPassRequest:(id)a1 startStreamOption:(id)a2 completion:(id /* block */)a3;

@end
