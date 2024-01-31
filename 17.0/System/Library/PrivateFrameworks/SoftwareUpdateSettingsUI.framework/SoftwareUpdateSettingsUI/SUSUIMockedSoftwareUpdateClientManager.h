@class NSString;

@interface SUSUIMockedSoftwareUpdateClientManager : SUSUISoftwareUpdateClientManager <SUSMKSoftwareUpdateServicesResponderDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)preferences;
- (BOOL)isAutoDownloadEnabled;
- (BOOL)isAutoInstallEnabled;
- (BOOL)isAutoInstallPreviousUserSettingsEnabled;
- (BOOL)isAutomaticInstallSystemDataFilesEnabled;
- (BOOL)isSecurityResponseEnabled;
- (BOOL)previousUserSpecifiedSecurityResponseEnabled;
- (void)queue_enableAutoInstallPreviousUserSettings:(BOOL)a0;
- (void)queue_enableAutomaticInstallSystemDataFiles:(BOOL)a0;
- (void)queue_setAutoDownloadEnabled:(BOOL)a0;
- (void)queue_setAutoInstallEnabled:(BOOL)a0;
- (void)queue_setPreviousUserSpecifiedSecurityResponseStatus:(BOOL)a0;
- (void)queue_setSecurityResponseEnabled:(BOOL)a0;

@end
