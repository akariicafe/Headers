@class AXUIClient, NSString;

@interface SpeakTypingServices : NSObject <AXUIClientDelegate>

@property (retain, nonatomic) AXUIClient *speakTypingClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)setLetterFeedbackEnabled:(BOOL)a0;
- (void)setWordFeedbackEnabled:(BOOL)a0;
- (void)setPhoneticFeedbackEnabled:(BOOL)a0;
- (id)init;
- (void)dealloc;
- (void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)a0;
- (id)_clientIdentifier;
- (void).cxx_destruct;
- (BOOL)notifySpeakServicesForAttributedSpeechOutput:(id)a0;
- (BOOL)notifySpeakServicesToStopSpeaking;
- (BOOL)notifySpeakServicesForSpeakAutoCorrections:(id)a0 forCurrentInputMode:(id)a1;
- (void)setVoiceIdentifier:(id)a0 forLanguage:(id)a1;
- (void)clearLastSpokenString;
- (void)initializeServerConnection;
- (id)lastSpokenString;
- (id)lastUsedVoiceIdentifier;
- (BOOL)notifySpeakServicesForSpeechOutput:(id)a0 volume:(double)a1 speakingRate:(double)a2;
- (BOOL)notifySpeakServicesToFeedbackQuickTypePrediction:(id)a0 forCurrentInputMode:(id)a1;
- (BOOL)notifySpeakServicesToInitializeServerConnection;
- (BOOL)notifySpeakServicesToStopSpeakingAutocorrections;
- (BOOL)verifyTestingConnection;

@end
