@class RMUIProfileViewModel;
@protocol RMConfigurationsDataProvider;

@interface RMInteractiveLegacyProfilesViewController : PSListController

@property (retain, nonatomic) RMUIProfileViewModel *profileModel;
@property (retain, nonatomic) id<RMConfigurationsDataProvider> rmDataProvider;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (id)specifiers;
- (void).cxx_destruct;
- (void)_activateProfile:(id)a0 specifier:(id)a1;
- (id)_isActivatedProfile:(id)a0;
- (void)_presentAlertForErrorModel:(id)a0;
- (void)_processUserInfoDictionary;
- (id)_specifiersForProfile;

@end
