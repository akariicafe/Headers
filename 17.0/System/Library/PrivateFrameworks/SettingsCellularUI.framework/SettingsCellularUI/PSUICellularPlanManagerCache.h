@class CTCellularPlanItem, NSArray, NSString, NSDictionary, CoreTelephonyClient, CTDisplayPlanList;

@interface PSUICellularPlanManagerCache : NSObject <Loggable> {
    BOOL _cacheIsValid;
    NSArray *_planItems;
    NSArray *_danglingPlanItems;
    NSArray *_plansPendingTransfer;
    NSDictionary *_referenceMap;
    CTCellularPlanItem *_selectedPlanItem;
    BOOL _hasSubscriptions;
    BOOL _isMultipleDataPlanSupportAvailable;
    BOOL _shouldShowOldUI;
    BOOL _isAnyLocalFlowTypeSupported;
    BOOL _isWebUIFlowSupported;
    BOOL _isActivationCodeFlowSupported;
    BOOL _isSingleActivationCodeFlowSupported;
    BOOL _isCarrierItemFlowSupported;
}

@property (retain) NSArray *cachedCarrierItems;
@property (retain) CTDisplayPlanList *cachedRemotePlans;
@property BOOL carrierListFetchInProgress;
@property BOOL remoteListFetchInProgress;
@property (retain, nonatomic) CoreTelephonyClient *coreTelephonyClient;
@property (retain, nonatomic) CTCellularPlanItem *selectedPlanItem;
@property (readonly, nonatomic) NSArray *planItems;
@property (readonly, nonatomic) NSArray *danglingPlanItems;
@property (readonly, nonatomic) NSArray *plansPendingTransfer;
@property (readonly, nonatomic) NSArray *embeddedPlanItems;
@property (readonly, nonatomic) BOOL hasSubscriptions;
@property (readonly, nonatomic) BOOL isMultipleDataPlanSupportAvailable;
@property (readonly, nonatomic) BOOL shouldShowAddPlan;
@property (readonly, nonatomic) BOOL shouldShowAccountSetup;
@property (readonly, nonatomic) BOOL isSelectedPlanActivating;
@property (readonly, nonatomic) BOOL isAnyPlanActivating;
@property (readonly, nonatomic) BOOL shouldShowPlanSelector;
@property (readonly, nonatomic) BOOL isCellularDisabled;
@property (readonly, nonatomic) BOOL shouldShowNewUI;
@property (readonly, nonatomic) BOOL isAnyLocalFlowTypeSupported;
@property (readonly, nonatomic) BOOL isWebUIFlowSupported;
@property (readonly, nonatomic) BOOL isActivationCodeFlowSupported;
@property (readonly, nonatomic) BOOL isSingleActivationCodeFlowSupported;
@property (readonly, nonatomic) BOOL isCarrierItemFlowSupported;
@property (readonly, nonatomic) NSArray *carrierItems;
@property (readonly, nonatomic) CTDisplayPlanList *remotePlans;
@property (nonatomic) BOOL remoteListFetchCompleted;
@property (readonly, nonatomic) BOOL isUsingBootstrapDataService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)dealloc;
- (void)didEnablePlanItems:(id)a0;
- (id)getLogger;
- (id)initWithCTClient:(id)a0;
- (id)planFromReference:(id)a0;
- (void)_mcSettingsDidChange;
- (id)predefinedLabels;
- (void)setSelectedPlanItemForData:(id)a0;
- (id)danglingPlanFromReference:(id)a0;
- (void)_invalidatePlanItemsCache;
- (void)_fetchPlanItemsIfNeeded;
- (id)subscriptionContextForPlanItem:(id)a0 cachedSubscriptionContexts:(id)a1;
- (BOOL)shouldShowOldUI;
- (void).cxx_destruct;
- (void)setLabel:(id)a0 forPlan:(id)a1;
- (id)planPendingTransferFromReference:(id)a0;
- (void)clearCachedCarrierItemsAndRemotePlans;
- (void)didSelectDanglingPlan:(id)a0;
- (void)_planInfoDidChange;
- (void)_carrierInfoDidChange;
- (id)planFromReferenceSafe:(id)a0;

@end
