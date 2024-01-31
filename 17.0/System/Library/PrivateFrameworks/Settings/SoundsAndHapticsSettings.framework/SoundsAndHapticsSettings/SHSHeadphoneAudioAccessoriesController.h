@class ADASManager;

@interface SHSHeadphoneAudioAccessoriesController : PSListController

@property (retain, nonatomic) ADASManager *audioSettingsManager;

- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)loadView;
- (id)specifiers;
- (void).cxx_destruct;
- (id)getConnectedToHeadphonesEnabled;
- (void)confirmForgetAudioAccessoriesAction;
- (void)deleteAllAudioAccessoryData;
- (void)setConnectedToHeadphonesEnabled:(id)a0 forSpecifier:(id)a1;

@end
