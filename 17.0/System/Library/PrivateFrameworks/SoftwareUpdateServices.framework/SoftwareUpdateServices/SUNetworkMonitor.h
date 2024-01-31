@class NSString, NWPathEvaluator, NSHashTable, CoreTelephonyClient, NSObject;
@protocol OS_dispatch_queue;

@interface SUNetworkMonitor : NSObject <CoreTelephonyClientRegistrationDelegate, CoreTelephonyClientCarrierBundleDelegate, CoreTelephonyClientDataDelegate> {
    struct __SCNetworkReachability { } *_reachability;
    NSHashTable *_observers;
    int _currentNetworkType;
    int _currentCellularType;
    BOOL _roaming;
    CoreTelephonyClient *_ctClient;
    NSObject<OS_dispatch_queue> *_ctQueue;
    NWPathEvaluator *_pathEvaluator;
    BOOL _pathSatisfied;
    int _overriddenCurrentNetworkType;
    int _overriddenCurrentCellularType;
    BOOL _overriddenRoaming;
    BOOL _overriddenExpensive;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (BOOL)holdsWiFiAssertion;
+ (void)setHoldsWiFiAssertion:(BOOL)a0;

- (void)displayStatusChanged:(id)a0 status:(id)a1;
- (id)init;
- (BOOL)isBootstrap;
- (void)internetDataStatus:(id)a0;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (int)currentNetworkType;
- (void)operatorBundleChange:(id)a0;
- (id)telephonyClient;
- (void)_initNetworkObservation;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (int)_networkTypeFromFlags:(unsigned int)a0;
- (void)setCurrentNetworkType:(int)a0;
- (void)addObserver:(id)a0;
- (void)carrierBundleChange:(id)a0;
- (void)setCellularRoaming:(BOOL)a0;
- (BOOL)isCellularRoaming;
- (BOOL)isPathSatisfied;
- (void)_carrierBundleChanged;
- (BOOL)_isCurrentlyRoaming;
- (int)_networkTypeFromCurrentCellularData;
- (int)_networkTypeFromCurrentCellularDataRespectingWifiAssist:(BOOL)a0;
- (int)_networkTypeFromCurrentCellularDataWithError:(id *)a0;
- (void)_operatorBundleChanged;
- (BOOL)_overriddenByPreferences;
- (int)_queue_currentCellularType;
- (int)_queue_currentNetworkType;
- (void)_resetCtClient;
- (int)currentCellularType;
- (void)detectOverriddenNetwork;
- (BOOL)isCellularDataRoamingEnabled;
- (BOOL)isCurrentNetworkTypeCellular;
- (BOOL)isCurrentNetworkTypeExpensive;
- (BOOL)isNetworkTypeCellular:(int)a0;
- (void)refreshCellularType;
- (void)refreshNetworkAndCellularTypesWithFlags:(unsigned int)a0;
- (void)refreshNetworkTypeWithFlags:(unsigned int)a0;
- (void)setCurrentCellularType:(int)a0;
- (BOOL)usingWifi;

@end
