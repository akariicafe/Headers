@class SUManagerClient, PSSpecifier;

@interface SUSUISoftwareUpdateAutomaticUpdateController : PSListController

@property (retain, nonatomic) PSSpecifier *automaticallyInstallSwitchSpecifier;
@property (retain, nonatomic) PSSpecifier *automaticallyDownloadUpdatesSwitchSpecifier;
@property (retain, nonatomic) PSSpecifier *securityResponseSwitchSpecifier;
@property (retain, nonatomic) SUManagerClient *manager;

- (id)init;
- (id)specifiers;
- (void).cxx_destruct;
- (id)updateController;
- (id)automaticDownloadEnabled;
- (id)automaticDownloadStatus;
- (id)automaticUpdateStatus;
- (id)automaticallyDownloadGroup;
- (id)automaticallyDownloadSecurityResponseAndSystemFilesSwitch;
- (id)automaticallyDownloadUpdatesSwitch;
- (id)automaticallyInstallGroup;
- (id)automaticallyInstallSwitch;
- (id)previousUserSpecifiedAutomaticUpdateStatus;
- (id)previousUserSpecifiedSecurityResponseStatus;
- (id)securityResponseStatus;
- (void)setArmedAutomaticallyInstallToggledWithValue:(id)a0 forSpecifier:(id)a1;
- (void)setAutomaticallyDownloadUpdatesToggledWithValue:(id)a0 forSpecifier:(id)a1;
- (void)setAutomaticallyInstallSecurityResponsesAndSystemDataToggledWithValue:(id)a0 forSpecifier:(id)a1;
- (void)setAutomaticallyInstallUpdatesToggledWithValue:(id)a0 forSpecifier:(id)a1;
- (void)setNonArmedAutomaticallyInstallToggledWithValue:(id)a0 forSpecifier:(id)a1;
- (void)setSecurityResponseToggleState:(id)a0 toggleCellEnabled:(id)a1 userSpecified:(BOOL)a2 specifier:(id)a3;

@end
