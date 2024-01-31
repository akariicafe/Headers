@class NSArray, CoreTelephonyClient;

@interface PUILockdownModeController : PSListController <PUIOnboardingCellDelegate>

@property (retain, nonatomic) CoreTelephonyClient *client;
@property (nonatomic) BOOL has2GSupport;
@property (nonatomic) BOOL _2GEnabled;
@property (nonatomic) BOOL lockdownModeEnabled;
@property (retain, nonatomic) NSArray *_lockdownModeOptionsSpecifiers;

- (BOOL)shouldReloadSpecifiersOnResume;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)specifiers;
- (void).cxx_destruct;
- (void)presentErrorAlert;
- (void)didTapEnableLockdownModeButton:(id)a0;
- (id)_2GEnabled:(id)a0;
- (void)dataDidChange;
- (void)didTapOnboardingCellLink:(id)a0;
- (void)didTapOnboardingLockdownModeButton;
- (void)getEligibleDevicesWithCompletion:(id /* block */)a0;
- (id)lockdownModeOptionsSpecifiers;
- (void)openLearnMorePage;
- (void)presentConfirmationAlert:(id)a0 hasPairedWatch:(BOOL)a1;
- (void)presentOnboardingController;
- (void)refreshLinkStatusInParent;
- (void)set2GEnabled:(id)a0 specifier:(id)a1;
- (void)setLockdownModeEnabled:(BOOL)a0 forAllDevices:(BOOL)a1;
- (void)updateSpecifiersForImposedSettings;

@end
