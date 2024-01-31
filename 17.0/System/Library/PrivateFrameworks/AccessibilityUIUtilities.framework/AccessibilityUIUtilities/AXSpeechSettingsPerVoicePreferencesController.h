@class NSString, AXSettingsResourceDownloadController, TTSPerVoiceSettingsViewController;

@interface AXSpeechSettingsPerVoicePreferencesController : UIViewController <TTSPerVoiceSettingsViewControllerDelegate>

@property (retain, nonatomic) TTSPerVoiceSettingsViewController *pvsettingViewController;
@property (retain, nonatomic) NSString *voiceIdentifier;
@property (weak, nonatomic) AXSettingsResourceDownloadController *parentController;
@property (retain, nonatomic) NSString *speechSourceKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)getVoiceIdentifier;
- (id)getVoiceSettings;
- (void)voiceSettingsDidChangeForVoice:(id)a0 settings:(id)a1;

@end
