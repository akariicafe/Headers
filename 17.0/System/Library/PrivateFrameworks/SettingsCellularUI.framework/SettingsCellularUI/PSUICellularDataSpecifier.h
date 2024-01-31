@class PSListController, NSArray, PSSimStatusCache, PSUICellularPlanManagerCache, PSUICellularDataListItemsController, PSUICoreTelephonyCallCache, PSUIDeviceWiFiState, PSUICoreTelephonyDataCache;

@interface PSUICellularDataSpecifier : PSSpecifier

@property (weak, nonatomic) PSListController *hostController;
@property (retain, nonatomic) PSSimStatusCache *simStatusCache;
@property (retain, nonatomic) PSUICellularPlanManagerCache *planManagerCache;
@property (retain, nonatomic) PSUICoreTelephonyDataCache *dataCache;
@property (retain, nonatomic) PSUICoreTelephonyCallCache *callCache;
@property (retain, nonatomic) PSUIDeviceWiFiState *wifiState;
@property (retain, nonatomic) NSArray *cachedPlanItems;
@property (nonatomic) BOOL isMSOActive;
@property (weak, nonatomic) PSUICellularDataListItemsController *detailController;

- (void)setAirplaneMode:(BOOL)a0;
- (id)getLogger;
- (void).cxx_destruct;
- (id)subscriptionContextForListItem:(id)a0;
- (void)_acceptedDataSwitch:(id)a0;
- (id)_isCellularDataEnabled:(id)a0;
- (void)_setCellularDataEnabled:(id)a0 specifier:(id)a1;
- (void)_setCellularDataSwitch:(id)a0;
- (void)acceptedDataSwitch:(id)a0;
- (id)callEndConfirmationSpecifier;
- (void)canceledDataSwitch:(id)a0;
- (id)initWithHostController:(id)a0;
- (id)initWithHostController:(id)a0 simStatusCache:(id)a1 planManagerCache:(id)a2 callCache:(id)a3 dataCache:(id)a4 wifiState:(id)a5;
- (id)isCellularDataEnabled:(id)a0;
- (BOOL)isDetailControllerNeeded;
- (id)planItemForListItem:(id)a0;
- (void)setCellularDataEnabled:(id)a0 specifier:(id)a1;
- (void)setCellularDataSwitch:(BOOL)a0;
- (void)updateCachedState;

@end
