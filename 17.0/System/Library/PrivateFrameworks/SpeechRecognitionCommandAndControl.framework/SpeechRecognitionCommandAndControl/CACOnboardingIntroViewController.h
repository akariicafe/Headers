@class CACOnboardingCommandsTableViewController, OBTrayButton;

@interface CACOnboardingIntroViewController : OBWelcomeController

@property (retain, nonatomic) OBTrayButton *mainButton;
@property (retain, nonatomic) OBTrayButton *linkButton;
@property (retain, nonatomic) CACOnboardingCommandsTableViewController *onboardingTVC;
@property (nonatomic) unsigned long long style;

+ (id)defaultControllerWithStyle:(unsigned long long)a0;

- (void)dealloc;
- (void)viewDidLoad;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (BOOL)shouldInlineButtonTray;
- (void)dismissWelcomeController;
- (void)configureDownloadCaption;
- (void)configureLanguageButton;
- (void)enableVoiceControlAndMoveToCommandsOverview;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2 style:(unsigned long long)a3;
- (void)languageDidChange;
- (void)presentLanguageSelection;

@end
