@class NSString, WBSSavedAccount, NSDictionary;

@interface _SFAirDropAccountSharingAuthenticationContext : NSObject <_SFSettingsAuthenticationRequiring>

@property (readonly, nonatomic) WBSSavedAccount *savedAccount;
@property (readonly, copy, nonatomic) NSString *authenticationPrompt;
@property (readonly, nonatomic) BOOL showsAuthenticationPromptAsTitle;
@property (nonatomic) BOOL hasBeenAuthenticated;
@property (readonly, copy, nonatomic) NSDictionary *customLocalAuthenticationOptions;
@property (readonly, nonatomic) BOOL shouldAuthenticateBeforeShowingSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_localAuthenticationOptionsForSharingPasskeyWithAirDrop;
- (id)_localAuthenticationOptionsForSharingPasswordWithAirDrop;
- (id)_passcodeTitleForSharingPasskeyWithAirDrop;
- (id)_passcodeTitleForSharingPasswordWithAirDrop;
- (id)initWithSavedAccount:(id)a0;

@end
