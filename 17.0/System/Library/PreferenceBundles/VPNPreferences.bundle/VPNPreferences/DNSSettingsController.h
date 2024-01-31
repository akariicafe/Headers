@class NSUUID, NSString, PSSpecifier, NSMutableArray;

@interface DNSSettingsController : PSListController

@property (copy) NSUUID *serviceID;
@property (retain) NSString *applicationName;
@property (retain) NSString *serverName;
@property (retain) NSString *typeIdentifier;
@property (retain) PSSpecifier *automaticDNSSettingsSpecifier;
@property (retain) NSMutableArray *currentDNSSettingsSpecifiers;
@property (retain) NSMutableArray *perAppSpecifiers;
@property BOOL hasDNSProxyProhibitDisablement;
@property BOOL hasDNSSettingsProhibitDisablement;

- (id)init;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)dealloc;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)specifiers;
- (void).cxx_destruct;
- (void)disableAllDNSSettings;
- (void)showDNSSettingsPrivacyPage;
- (void)someConfigurationChanged:(id)a0;
- (void)someStatusChanged:(id)a0;
- (void)toggleDNSSettingsForSpecifier:(id)a0;

@end
