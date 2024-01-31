@class AFSettingsConnection;

@interface AFUICloudStorageViewController : PSListController {
    AFSettingsConnection *_settings;
}

- (void)viewDidLoad;
- (id)specifiers;
- (void)didReceiveMemoryWarning;
- (void).cxx_destruct;
- (void)_disableAndDeleteCloudSync;
- (void)confirmDisable;
- (void)confirmDisableForMultiUserVoiceIdentification;
- (void)handleDisableAndDeleteButtonPress;

@end
