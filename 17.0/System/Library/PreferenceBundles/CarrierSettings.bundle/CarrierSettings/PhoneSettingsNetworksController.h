@class PhoneSettingsTelephony, PSSpecifier, NSString, PHNetworkFetcher, NSMutableArray;

@interface PhoneSettingsNetworksController : PSListItemsController

@property (readonly, nonatomic) PhoneSettingsTelephony *telephonySettings;
@property (retain) PHNetworkFetcher *fetcher;
@property (nonatomic) BOOL showNetworkList;
@property (retain, nonatomic) PSSpecifier *titleSpecifier;
@property (retain, nonatomic) PSSpecifier *automaticSpecifier;
@property (retain, nonatomic) PSSpecifier *networksGroupSpecifier;
@property (retain, nonatomic) PSSpecifier *searchingSpecifier;
@property (retain) NSMutableArray *networksSpecifiersArray;
@property (retain) NSString *cachedMobileIdentity;

- (BOOL)shouldReloadSpecifiersOnResume;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (id)descriptionDictionary;
- (void).cxx_destruct;
- (void)listItemSelected:(id)a0;
- (BOOL)_isInManualMode;
- (void)_setAutomaticSwitchOn:(BOOL)a0 animated:(BOOL)a1;
- (void)_autoSwitchTurnedOff;
- (void)_autoSwitchTurnedOn;
- (int)_currentNetworkSelectionState;
- (void)_handleNetworkFetcherErrorNotification:(id)a0;
- (void)_handleNetworkFetcherNetworkSelectionStateChangedNotification:(id)a0;
- (void)_handleNetworkFetcherStateChangedNotification:(id)a0;
- (void)_handleNetworkSettingsDisabledNotification:(id)a0;
- (void)_handleNetworksChangedNotification:(id)a0;
- (void)_handleRadioOffErrorNotification:(id)a0;
- (void)_handleSimChangedNotification:(id)a0;
- (BOOL)_isInAutomaticMode;
- (void)_registerEventListeners;
- (void)_settingsResumed;
- (void)_updateCachedMobileIdentity;
- (id)getAutomaticSwitchStateForSpecifier:(id)a0;
- (void)setAutomaticSwitchState:(id)a0 forSpecifier:(id)a1;
- (void)updateNetworkListSpecifierStates;
- (void)updateNetworkListSpecifiers;

@end
