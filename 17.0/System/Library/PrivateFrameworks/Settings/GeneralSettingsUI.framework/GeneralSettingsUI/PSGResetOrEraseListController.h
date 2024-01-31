@class NSMutableArray, NSString, PSSpecifier, CoreTelephonyClient, NSNumber;

@interface PSGResetOrEraseListController : PSListController <MBManagerDelegate, CoreTelephonyClientCarrierBundleDelegate> {
    BOOL _requireRestrictionsCode;
    BOOL _requirePasscode;
    BOOL _returningFromPINSheetWithSuccess;
    BOOL _shouldEraseCellularPlans;
    int _codesNeeded;
    int _codesEntered;
    PSSpecifier *_currentSpecifier;
    PSSpecifier *_locationSpecifier;
    long long _locationSpecifierIndex;
    NSString *_passcode;
    NSMutableArray *_mutableSpecifiers;
}

@property (class, readonly, nonatomic, getter=isLargeTextEnabled) BOOL largeTextEnabled;
@property (class, readonly, nonatomic) NSString *maximumSupportedContentSizeCategory;

@property (retain, nonatomic) CoreTelephonyClient *_client;
@property (retain, nonatomic) NSNumber *_cachedLocationServicesAvailableValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didAcceptEnteredPIN:(id)a0;
- (id)init;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)dealloc;
- (void)confirmationSpecifierConfirmed:(id)a0;
- (void)viewDidLoad;
- (void)profileNotification:(id)a0;
- (void)loadView;
- (Class)tableViewClass;
- (id)specifiers;
- (void)didAppear;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)carrierBundleChange:(id)a0;
- (void)devicePINControllerDidDismissPINPane:(id)a0;
- (BOOL)_networkConnectivityAvailable;
- (void)refreshLocationServicesAvailable;
- (void)_resetWithMode:(long long)a0 andOptions:(id)a1 withSpecifier:(id)a2;
- (void)_showStockholmLocallyStoredValueOfflineWarningIfNeeded:(id /* block */)a0;
- (void)configureSpin:(BOOL)a0 ofCellForSpecifier:(id)a1 setEnabled:(BOOL)a2;
- (void)confirmEraseCellularSettings;
- (void)deviceFullErase:(id)a0;
- (void)didSelectAlertAction:(id)a0;
- (void)eraseCellularSettings;
- (void)eraseSettings:(id)a0;
- (void)prepareMutableSpecifiers;
- (void)presentExitBuddyWithUpsellTradeIn:(BOOL)a0;
- (void)reprovisionAccount;
- (void)resetAKey;
- (void)resetAllCellularNetworks:(id)a0;
- (void)resetIconPositions:(id)a0;
- (void)resetImproveSiriAndDictation;
- (void)resetKeyboardDictionary:(id)a0;
- (void)resetNetworkPrivacy;
- (void)resetNetworkSettings:(id)a0;
- (void)resetPrivacyWarnings:(id)a0;
- (void)resetSceneUnderstandingData:(id)a0;
- (void)showPINSheetFromParentViewController:(id)a0;
- (void)showResetActionSheet:(id)a0;
- (void)subscriberOptions:(id)a0;
- (void)updateLocationResetSpecifier;

@end
