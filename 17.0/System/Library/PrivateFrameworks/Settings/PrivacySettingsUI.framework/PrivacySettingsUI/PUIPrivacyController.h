@class NSString, NSArray, NSURL, CoreTelephonyClient, PSSpecifier, NSObject, NSNumber, ACAccountStore;
@protocol OS_dispatch_queue;

@interface PUIPrivacyController : PSListController <CoreTelephonyClientCarrierBundleDelegate, PSListControllerTestableSpecifiers> {
    int profileInstalledToken;
    int profileUninstalledToken;
    NSObject<OS_dispatch_queue> *securitySettingsQueue;
    PSSpecifier *_locationSpecifier;
    ACAccountStore *_accountStore;
}

@property (retain, nonatomic) CoreTelephonyClient *_client;
@property (retain, nonatomic) NSNumber *_cachedLocationServicesAvailableValue;
@property (retain, nonatomic) NSArray *driverBundleControllers;
@property (retain, nonatomic) NSArray *driverSpecifiers;
@property (nonatomic) BOOL launchHasCompleted;
@property (retain, nonatomic) NSURL *nudityDetectionURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)booleanCapabilitiesToTest;
+ (void)formatSearchEntries:(id)a0 parent:(id)a1;

- (BOOL)shouldReloadSpecifiersOnResume;
- (id)init;
- (void)dealloc;
- (id)_accountStore;
- (id)specifiers;
- (BOOL)shouldDeferPushForSpecifierID:(id)a0 urlDictionary:(id)a1;
- (void).cxx_destruct;
- (void)reloadSpecifiers;
- (void)carrierBundleChange:(id)a0;
- (id)locationServicesEnabled:(id)a0;
- (id)getNudityDetectionEnabledValue;
- (void)setCapabilityEnabled:(id)a0 specifier:(id)a1;
- (void)_nudityDetectionLinkClicked:(id)a0;
- (void)_updateNudityDetectionFooter:(id)a0;
- (id)capabilityEnabled:(id)a0;
- (id)developerModeEnabled:(id)a0;
- (id)driverKitSpecifiers;
- (id)lockdownModeEnabled:(id)a0;
- (void)refreshLocationServicesAvailable;
- (void)updateLocationServicesVisibility;
- (void)updateNudityDetectionGroup:(id)a0;
- (void)updateSecurityGroup;

@end
