@class VTPreferences;

@interface SRSVTPreferences : NSObject {
    VTPreferences *_preferences;
}

- (id)init;
- (BOOL)voiceTriggerEnabled;
- (void)setVoiceTriggerEnabled:(BOOL)a0;
- (void).cxx_destruct;
- (id)localizedTriggerPhraseForLanguageCode:(id)a0;

@end
