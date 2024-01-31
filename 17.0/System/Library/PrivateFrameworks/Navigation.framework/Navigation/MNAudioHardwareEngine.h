@class NSString, MNAudioPathwayResourceAccess, MNObserverHashTable, MNSoundEffectResourceController, MNSpeechResourceController, MNAudioSystemEvent, MNAudioSystemOptions, MNAudioSessionResourceAccess, MNHapticResourceController, MNAudioSystemEventQueue;

@interface MNAudioHardwareEngine : NSObject <MNAudioEventQueueDelegate, MNAudioSessionAccessDelegate, MNHapticControllerDelegate, MNSoundEffectControllerDelegate, MNSpeechControllerDelegate> {
    int _transportType;
    MNAudioSystemOptions *_options;
    NSString *_voiceLanguage;
    MNObserverHashTable *_observers;
    MNAudioSystemEventQueue *_queue;
    MNAudioSystemEvent *_pendingEvent;
    unsigned long long _currentUtteranceGuidanceLevel;
}

@property (retain, nonatomic) MNAudioPathwayResourceAccess *pathwayAccess;
@property (retain, nonatomic) MNAudioSessionResourceAccess *sessionAccess;
@property (retain, nonatomic) MNHapticResourceController *hapticController;
@property (retain, nonatomic) MNSoundEffectResourceController *sfxController;
@property (retain, nonatomic) MNSpeechResourceController *speechController;
@property (readonly, nonatomic) unsigned long long voiceGuidanceLevel;
@property (readonly) MNAudioSystemOptions *options;
@property (readonly, nonatomic) BOOL speaking;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)deviceSpeakerIsInUse;
+ (BOOL)headphonesAreInUse;

- (void)removeObserver:(id)a0;
- (void)stop;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (BOOL)_speechMuted;
- (BOOL)_hardwareIsBusy;
- (void)changeOptions:(id)a0 forTransportType:(int)a1;
- (void)speak:(id)a0 withShortPrompt:(unsigned long long)a1 andVoiceGuidanceLevel:(unsigned long long)a2 thenCallCompletion:(id /* block */)a3;
- (void)_mediaSessionServicesWereReset:(id)a0;
- (void)_finishedProcessingEventWithStatus:(unsigned long long)a0;
- (void)_mediaSessionServicesWereLost:(id)a0;
- (void)_process:(id)a0;
- (void)_processNextEvent;
- (void)_processNextEventIfNecessary;
- (void)_registerForObservation;
- (BOOL)_stopCurrentEvent;
- (void)audioSessionResourceAccess:(id)a0 didActivateSession:(BOOL)a1;
- (void)audioSessionResourceAccess:(id)a0 didDeactivateSession:(BOOL)a1;
- (void)audioSessionResourceAccess:(id)a0 didFailWhileActivatingSession:(id)a1;
- (void)audioSessionResourceAccess:(id)a0 didFailWhileDeactivatingSession:(id)a1;
- (void)audioSystemEventQueue:(id)a0 eventWillInterrupt:(id)a1;
- (void)cache:(id)a0;
- (void)changeTransportType:(int)a0;
- (void)clearAlEvents;
- (double)durationOf:(id)a0;
- (id)initWithAudioSystemOptions:(id)a0 andVoiceLanguage:(id)a1 andTransportType:(int)a2;
- (void)soundEffectResourceController:(id)a0 didFailWhilePlayingIndicator:(unsigned long long)a1 withError:(id)a2;
- (void)soundEffectResourceController:(id)a0 didFinishPlayingIndicator:(unsigned long long)a1;
- (void)soundEffectResourceController:(id)a0 wasInterruptedWhilePlayingIndicator:(unsigned long long)a1 withError:(id)a2;
- (void)speechResourceController:(id)a0 didFailWhileSpeakingUtterance:(id)a1 withError:(id)a2;
- (void)speechResourceController:(id)a0 didFinishSpeakingUtterance:(id)a1 withDuration:(double)a2;
- (void)speechResourceController:(id)a0 didTimeoutWhileSpeakingUtterance:(id)a1 withError:(id)a2;
- (void)speechResourceController:(id)a0 wasInterruptedWhileSpeakingUtterance:(id)a1 withError:(id)a2;
- (void)speechResourceController:(id)a0 willStartSpeakingUtterance:(id)a1;
- (BOOL)vibrateForShortPrompt:(unsigned long long)a0;

@end
