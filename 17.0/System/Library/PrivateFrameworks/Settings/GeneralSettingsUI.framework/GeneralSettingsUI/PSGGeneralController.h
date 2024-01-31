@class CRCarPlayPreferences, NSString, NSTimer, FLTopLevelViewModel, NSArray, PSSpecifier, NSObject, NSUserDefaults, PSGTVOutManager;
@protocol OS_dispatch_queue;

@interface PSGGeneralController : PSListController <CRCarPlayPreferencesDelegate, PSGHomeButtonCustomizeControllerDelegate, SFAirDropDiscoveryControllerDelegate, DevicePINControllerDelegate, PSListControllerTestableSpecifiers> {
    NSTimer *_usageTimer;
    PSGTVOutManager *_tvOutManager;
    PSSpecifier *_tvOutSpecifier;
    PSSpecifier *_airDropSpecifier;
    NSArray *_vpnBundleControllers;
    NSArray *_vpnSpecifiers;
    NSArray *_profileBundleControllers;
    NSArray *_profileSpecifiers;
    NSArray *_fontBundleControllers;
    NSArray *_fontSpecifiers;
    NSUserDefaults *_gameControllerPrefs;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *loadingQueue;
@property (retain, nonatomic) PSSpecifier *carplayMatterGroup;
@property (retain, nonatomic) PSSpecifier *matterSpecifier;
@property (retain, nonatomic) CRCarPlayPreferences *carPreferences;
@property (nonatomic) BOOL specifiersHaveLoaded;
@property (retain, nonatomic) FLTopLevelViewModel *followUpModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)booleanCapabilitiesToTest;

- (void)enableEdge:(id)a0;
- (BOOL)shouldReloadSpecifiersOnResume;
- (id)init;
- (void)dealloc;
- (void)loadLegalAndRegulatoryWithSpecifier:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)updateGameControllersWithCompletion:(id /* block */)a0;
- (void)reloadAsyncSpecifiersWithCompletion:(id /* block */)a0;
- (void)profileNotification:(id)a0;
- (void)handleCarPlayAllowedDidChange;
- (void)delayedAsyncLoadSpecifiers;
- (id)specifiers;
- (void)updateFontsWithCompletion:(id /* block */)a0;
- (void)loadHomeButtonSettings:(id)a0;
- (void)homeButtonCustomizeControllerDidFinish:(id)a0;
- (void)pointerDevicesDidChange;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)updateTrackpadWithCompletion:(id /* block */)a0;
- (BOOL)_hasCarPlayContent;
- (void)viewDidAppear:(BOOL)a0;
- (void)handleTVOutChange;
- (void)reloadSpecifiers;
- (void)shutDown:(id)a0;
- (void)insertOrderedSpecifiers:(id)a0 atID:(id)a1 animated:(BOOL)a2;
- (BOOL)shouldDeferPushForSpecifierID:(id)a0;
- (void)_setUseSwitchForOrientationLockWithSpecifier:(id)a0;
- (void)pairedVehiclesDidChange;
- (void)updateMatterWithCompletion:(id /* block */)a0;
- (id)EDGEEnabled:(id)a0;
- (void)launchHasCompleted:(id)a0;
- (void)updateSoftwareUpdateBadge;
- (void)gameControllersDidChange;

@end
