@class PSSystemPolicyForApp, NSString, PSDriverPolicyForApp;

@interface PSAppListController : PSListController <PSSystemPolicyForAppDelegate, PSDriverPolicyForAppDelegate>

@property (retain, nonatomic) PSSystemPolicyForApp *appPolicy;
@property (retain, nonatomic) PSSystemPolicyForApp *systemPolicy;
@property (retain, nonatomic) PSDriverPolicyForApp *driverPolicy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_typeErrorStringForKeyWithName:(id)a0 expectedType:(Class)a1 actualType:(Class)a2;
+ (id)allowedPrivacyBundlesForID;
+ (id)allowedPrivacyBundlesForName;
+ (BOOL)canUseOnBoardingKitFOrPrivacyDisplayForBundleName:(id)a0;
+ (BOOL)canUseOnBoardingKitForPrivacyDisplayForBundleID:(id)a0;
+ (id)childPaneSpecifierFromDictionary:(id)a0 stringsTable:(id)a1 parentSpecifier:(id)a2 target:(id)a3;
+ (id)groupSpecifierFromDictionary:(id)a0 stringsTable:(id)a1 parentSpecifier:(id)a2 target:(id)a3;
+ (id)localizedTitlesFromUnlocalizedTitles:(id)a0 stringsTable:(id)a1 parentSpecifier:(id)a2;
+ (id)multiValueSpecifierFromDictionary:(id)a0 stringsTable:(id)a1 parentSpecifier:(id)a2 target:(id)a3;
+ (id)onBoardingKitBundleIDDict;
+ (id)onBoardingKitBundleNameDict;
+ (id)radioGroupSpecifiersFromDictionary:(id)a0 stringsTable:(id)a1 parentSpecifier:(id)a2 target:(id)a3;
+ (id)sliderSpecifierFromDictionary:(id)a0 stringsTable:(id)a1 parentSpecifier:(id)a2 target:(id)a3;
+ (id)specifiersFromDictionary:(id)a0 stringsTable:(id)a1 parentSpecifier:(id)a2 target:(id)a3;
+ (id)textFieldSpecifierFromDictionary:(id)a0 stringsTable:(id)a1 parentSpecifier:(id)a2 target:(id)a3;
+ (id)titleValueSpecifierFromDictionary:(id)a0 stringsTable:(id)a1 parentSpecifier:(id)a2 target:(id)a3;
+ (id)toggleSwitchSpecifierFromDictionary:(id)a0 stringsTable:(id)a1 parentSpecifier:(id)a2 target:(id)a3;

- (void)viewWillAppear:(BOOL)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)bundle;
- (id)specifiers;
- (void).cxx_destruct;
- (void)setPreferenceValue:(id)a0 specifier:(id)a1;
- (id)_readToggleSwitchSpecifierValue:(id)a0;
- (void)_setToggleSwitchSpecifierValue:(id)a0 specifier:(id)a1;
- (id)_uiValueFromValue:(id)a0 specifier:(id)a1;
- (id)_valueFromUIValue:(id)a0 specifier:(id)a1;
- (void)postThirdPartySettingDidChangeNotificationForSpecifier:(id)a0;
- (void)showPrivacyControllerForBundleID:(id)a0;
- (void)showPrivacyControllerForBundleName:(id)a0;

@end
