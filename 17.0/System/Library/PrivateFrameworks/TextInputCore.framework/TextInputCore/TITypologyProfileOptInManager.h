@class TITypologyProfileState;

@interface TITypologyProfileOptInManager : NSObject <TITypologyProfileOptInManaging>

@property (retain, nonatomic) TITypologyProfileState *typologyProfileState;
@property (readonly, nonatomic) BOOL isTypologyProfileInstalled;
@property (readonly, nonatomic) BOOL isProfileInstalledAndUserEnabled;

+ (id)localizedStringForKey:(id)a0;

- (id)init;
- (BOOL)devicePasscodeSet;
- (void)presentDialogForType:(long long)a0 withCompletionHandler:(id /* block */)a1;
- (void)_launchVPNAndDeviceManagementSettings;
- (BOOL)_isProfileInstalledAndUserEnabled;
- (id)notificationDetailsForType:(long long)a0;
- (void)dismissDialogWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)iCloudAccountAvailable;
- (void)_askUserToAllow;

@end
