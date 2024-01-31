@class CTCellularUsageWorkspaceInfo, NSString, CTDeviceDataUsage, NSDictionary, CoreTelephonyClient;

@interface PSDataUsageStatisticsCache : NSObject <CoreTelephonyClientAppDataUsageDelegate, CoreTelephonyClientRegistrationDelegate>

@property (retain, nonatomic) CoreTelephonyClient *client;
@property (retain) CTDeviceDataUsage *cachedDeviceDataUsage;
@property BOOL refreshInProgress;
@property (copy) id /* block */ refreshCompletionHandler;
@property (retain) CTCellularUsageWorkspaceInfo *workspaceInfo;
@property (retain) NSDictionary *hotspotClientsUsage;
@property BOOL cacheNeedsRefresh;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)initPrivate;
- (id)init;
- (void)dealloc;
- (void)willEnterForeground;
- (id)getLogger;
- (void).cxx_destruct;
- (id)initWithCoreTelephonyClient:(id)a0;
- (id)billingCycleEndDate;
- (BOOL)billingCycleSupported;
- (void)dataRatesChanged;
- (void)refreshDataUsageUINotification;
- (void)_clearCache;
- (id)bundleIDsForAppType:(unsigned long long)a0;
- (id)displayNamesForBundleIDs:(id)a0 appType:(unsigned long long)a1;
- (void)fetchDeviceDataUsageWithCompletion:(id /* block */)a0;
- (unsigned long long)totalCellularUsageForPeriod:(unsigned long long)a0;
- (unsigned long long)totalHotspotClientUsageForPeriod:(unsigned long long)a0;
- (unsigned long long)totalRoamingUsageForPeriod:(unsigned long long)a0;
- (id)totalSystemServicesUsageForPeriod:(unsigned long long)a0;
- (id)totalUninstalledAppUsageForPeriod:(unsigned long long)a0;
- (id)totalWatchOnlyAppUsageForPeriod:(unsigned long long)a0;
- (BOOL)useCalendarMonthBillingCycle;
- (id)wifiAssistUsageForPeriod:(unsigned long long)a0;
- (void)_handleUsageOrInfoChanged;
- (id)displayNameForHotspotClientID:(id)a0;
- (void)fetchDeviceDataUsage;
- (void)fetchHotspotClientsUsage;
- (void)fetchWorkspaceInfo;
- (id)hotspotClientIDsForPeriod:(unsigned long long)a0;
- (id)previousBillingCycleEndDate;
- (void)refreshCacheIfNeeded;
- (id)usageForBundleID:(id)a0 inPeriod:(unsigned long long)a1;
- (unsigned long long)usageForHotspotClientID:(id)a0 inPeriod:(unsigned long long)a1;

@end
