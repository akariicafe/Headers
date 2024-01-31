@class PSConfirmationSpecifier, PSSpecifier;
@protocol AssistantVoiceActivationDelegate;

@interface AssistantVoiceActivationController : PSListController {
    PSSpecifier *_voiceActivationOffSpecifier;
    PSSpecifier *_voiceActivationHSSpecifier;
    PSSpecifier *_voiceActivationHSAndCompactSpecifier;
    PSSpecifier *_groupSpecifier;
    PSConfirmationSpecifier *_confirmationSpecifier;
    unsigned long long _selectedPhrase;
}

@property (weak, nonatomic) id<AssistantVoiceActivationDelegate> delegate;

+ (id)bundle;

- (void)viewWillAppear:(BOOL)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)specifiers;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (BOOL)_isVoiceTriggerEnabled;
- (BOOL)_isHeySiriAlwaysOn;
- (id)_localizeTriggerString:(id)a0;
- (void)_refreshFootersForSpecifiers;
- (id)_updateAndGetCheckedSpecifier;
- (void)_updateSelectedPhrase;
- (void)_updateSpecifiersFromPreferences;
- (id)footerVariant;
- (void)preferencesDidChange:(id)a0;
- (void)setVoiceActivation:(id)a0 forSpecifier:(id)a1;
- (id)voiceActivation:(id)a0;

@end
