@class NSString, CTXPCServiceSubscriptionContext, CoreTelephonyClient, AnalyticsWorkspace, NSMutableDictionary, NSArray, ImpoExpoService, NSMutableArray, NSMutableSet, NSObject, NSNumber;
@protocol OS_dispatch_queue;

@interface CoreTelephonyShim : NSObject <CoreTelephonyClientRegistrationDelegate, CoreTelephonyClientDataDelegate> {
    CoreTelephonyClient *coreTelephonyClient;
    CTXPCServiceSubscriptionContext *coreTelephonyClientContext;
    long long currentSubscriberSlotID;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } coreTelephonyClientContextLock;
    ImpoExpoService *ieService;
    AnalyticsWorkspace *workspace;
    id engineReadyObserver;
    BOOL initializationComplete;
    NSArray *lastCellInfo;
    struct timeval { long long tv_sec; int tv_usec; } lastCellInfoTime;
    NSMutableArray *cellInfoCompletionHandlers;
    BOOL cellInfoInflight;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } cellInfoLock;
    NSMutableDictionary *_carrierNameForSlot;
    NSMutableDictionary *_cachedELQMMetricsForSlot;
    unsigned int ctClientInitReadyFlag;
    unsigned long long _pendingCTNotificationRegistrationFlags;
    unsigned long long _currentCTNotificationRegistrationFlags;
    NSMutableSet *_ctRnfChangedDelegates;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } rnfChangedLock;
    NSMutableSet *_ctSignalStrengthChangedDelegates;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } signalStrengthChangedLock;
    NSMutableSet *delegates;
    NSObject<OS_dispatch_queue> *elevatedQueue;
}

@property (readonly, nonatomic) NSMutableDictionary *subscriptions;
@property (readonly, nonatomic) struct __CTServerConnection { } *ctServerConnection;
@property (readonly, nonatomic) NSMutableDictionary *subscribers;
@property (readonly, nonatomic) NSNumber *currentSubscriberTag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)elevatedQueue;
+ (double)timestampFromCTDumpFolderPrefix:(id)a0;
+ (id)dateTimeStringFromCTDumpFolderPrefix:(id)a0;

- (void)subscriptionInfoDidChange;
- (void)currentDataSimChanged:(id)a0;
- (void)_registerForCoreTelephonyNotifications:(unsigned long long)a0;
- (id)initWithQueue:(id)a0;
- (void)_deliverRatSelectionChanged:(id)a0 withSubscriptionDict:(id)a1;
- (void)_completeInitialization;
- (void)commonInit;
- (id)init;
- (id)internalVariables;
- (BOOL)findSubscriberExactMatchForICCID:(id)a0 MDN:(id)a1 slotID:(long long)a2;
- (void)dealloc;
- (void)_unregisterFromCoreTelephonyNotifications:(unsigned long long)a0;
- (id)getCachedContentsForEnhancedLinkQualityMetricType:(long long)a0 forSlot:(long long)a1;
- (void)dualSimStatusInspection:(id)a0 withSubscriptionsInUse:(id)a1;
- (BOOL)getSmartDataModeSetting;
- (void)preferPrivateNetworkCellularOverWiFiDidChange;
- (void)handleCTServerNotification:(struct __CFString { } *)a0 notificationInfo:(struct __CFDictionary { } *)a1;
- (void)removeDelegate:(id)a0;
- (void)registerForCTDumpNotifications;
- (void)_setInitializationComplete:(BOOL)a0;
- (void)addDelegate:(id)a0;
- (id)_coreTelephonyClient;
- (void)dualSimStatusChangedTo:(unsigned char)a0;
- (void)_processEngineReadyNotification:(id)a0;
- (void)_updateSubscribers;
- (void)smartDataModeChanged:(id)a0 userEnabled:(BOOL)a1;
- (void)networkCodeChanged:(id)a0 forContext:(id)a1;
- (BOOL)findSubscriberBestMatchForICCID:(id)a0 MDN:(id)a1 slotID:(long long)a2 update:(BOOL)a3;
- (void)_processPendingCoreTelephonyNotificationRegistrations;
- (id)extractCellInfo:(id)a0;
- (void)updateCurrentRatSelection;
- (void)_dispatchCellInfoResult:(id)a0 error:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
- (BOOL)subscriptionContextIsCurrentDataSubscription:(id)a0;
- (void)unregisterForCTDumpNotifications;
- (void)processDataStatus:(id)a0 forContext:(id)a1;
- (void)simLessSubscriptionsDidChange;
- (void)get5GSupportedForContext:(id)a0;
- (id)elevatedQueue;
- (void)registerSignalStrengthChangedWithDelegate:(id)a0;
- (void)removeCachedContentsForEnhancedLinkQualityMetricType:(long long)a0 forSlot:(long long)a1;
- (id)getCurrentDataSubscriptionContext;
- (void)addNewSubscriberForICCID:(id)a0 MDN:(id)a1 slotID:(long long)a2;
- (void)enhancedDataLinkQualityChanged:(id)a0 metric:(id)a1;
- (void)cacheEnhancedLinkQualityMetricType:(long long)a0 withContents:(id)a1 forSlot:(long long)a2;
- (void)updateSubscribers;
- (void)signalStrengthChanged:(id)a0 info:(id)a1;
- (void)unregisterSignalStrengthChangedWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)_setCurrentSubscriberSlotID:(long long)a0;
- (unsigned char)processEnhancedLinkQualityHighThroughputNotification:(id)a0;
- (id)cellCarrierNameForContext:(id)a0 refresh:(BOOL)a1;
- (void)carrierSettingsDidChange;
- (void)set5GSupportChanged:(id)a0 forContext:(id)a1;
- (void)operatorNameChanged:(id)a0 name:(id)a1;
- (void)_deliverSignalStrengthChanged:(id)a0 cellularRSRP:(id)a1 cellularSNR:(id)a2;
- (void)unregisterRNFChangedWithDelegate:(id)a0;
- (void)countryCodeChanged:(id)a0 forContext:(id)a1;
- (void)updateCurrentSubscriberTag:(id)a0;
- (void)getPrivateNetworkSupported:(BOOL)a0 forContext:(id)a1;
- (void)taggedInfoIndicationChanged:(id)a0 type:(unsigned long long)a1 payload:(id)a2;
- (id)getSortedSubscriberKeys;
- (void)_deliverRNFSettingAvailable:(BOOL)a0 enabled:(BOOL)a1;
- (void)activeSubscriptionsDidChange;
- (id)getCurrentSIMStatus;
- (id)getCurrentDataStatus;
- (id)dictionaryForSubscriptionContext:(id)a0;
- (void)cellMonitorUpdate:(id)a0 info:(id)a1;
- (void)_deliverSmartDataModeSettingChanged:(BOOL)a0;
- (void)copyCellInfoOnQueue:(id)a0 completion:(id /* block */)a1;
- (void)dataStatus:(id)a0 dataStatusInfo:(id)a1;
- (void)initializeCoreTelephonyClient;
- (void)reliableNetworkFallbackChanged:(BOOL)a0 userEnabled:(BOOL)a1;
- (BOOL)getBasebandTraceEnabledState:(BOOL *)a0 coreDumpEnabled:(BOOL *)a1;
- (void)ratSelectionChanged:(id)a0 selection:(id)a1;
- (BOOL)enableCoreTelephonyLoggingForCustomerSeed:(BOOL)a0;
- (void)registerRNFChangedWithDelegate:(id)a0;

@end
