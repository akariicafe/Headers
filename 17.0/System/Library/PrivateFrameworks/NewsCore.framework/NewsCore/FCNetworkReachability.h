@class NSString, NSHashTable;

@interface FCNetworkReachability : NSObject <FCNetworkReachabilityType>

@property (retain, nonatomic) NSHashTable *observers;
@property (nonatomic) BOOL isNetworkReachable;
@property (nonatomic) BOOL isNetworkReachableViaWiFi;
@property (nonatomic) BOOL isNetworkReachableViaCellular;
@property (nonatomic) BOOL isNetworkUsageExpensive;
@property (nonatomic) BOOL isLowDataModeEnabled;
@property (nonatomic) long long cellularRadioAccessTechnology;
@property (nonatomic) BOOL isCloudKitAccessAllowed;
@property (nonatomic) BOOL accessRestrictedBecauseOfAppVersion;
@property (nonatomic) BOOL accessRestrictedBecauseOfOSVersion;
@property (nonatomic) BOOL accessRestrictedBecauseOfCountry;
@property (nonatomic) BOOL accessRestrictedBecauseOfDeviceAbandoned;
@property (readonly, nonatomic) BOOL isNetworkOnlyReachableViaCellular;
@property (readonly, nonatomic) long long reachabilityStatus;
@property (readonly, nonatomic) BOOL isNetworkUsageInexpensive;
@property (readonly, nonatomic) BOOL isCloudKitReachable;
@property (nonatomic) long long offlineReason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedNetworkReachability;

- (id)init;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (long long)_cellularRadioAccessTechnologyFromString:(id)a0;
- (void)_accessRestrictionsChanged;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)_reachabilityChanged:(id)a0;
- (void)_updateReachability;
- (long long)_cellularRadioAccessTechnology;

@end
