@class NSString, TTSPVSettingsWrapper;
@protocol TTSPerVoiceSettingsViewControllerDelegate;

@interface TTSPerVoiceSettingsViewController : UIViewController

@property (retain, nonatomic) TTSPVSettingsWrapper *wrapper;
@property (retain, nonatomic) NSString *speechSource;
@property (weak, nonatomic) id<TTSPerVoiceSettingsViewControllerDelegate> dataDelegate;

- (id)init;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)setSpeechSource:(id)a0;
- (id)speechSource;
- (void)reloadView;

@end
