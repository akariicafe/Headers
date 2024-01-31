@class APSConnection, NSString, ADLoggingProfileMonitor;
@protocol NSObject;

@interface ADAdTrackingSchedulingManager : NSObject <APSConnectionDelegate>

@property (retain, nonatomic) ADLoggingProfileMonitor *loggingProfileMonitor;
@property (retain, nonatomic) id<NSObject> storeFrontNotifyToken;
@property (retain, nonatomic) id<NSObject> accountChangedNotifyToken;
@property (retain, nonatomic) APSConnection *pushConnection;
@property (nonatomic) BOOL isConfigRequestInFlight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)connection:(id)a0 didReceiveToken:(id)a1 forTopic:(id)a2 identifier:(id)a3;
- (id)init;
- (void)connection:(id)a0 didReceivePublicToken:(id)a1;
- (void)dealloc;
- (void)connection:(id)a0 didReceiveIncomingMessage:(id)a1;
- (id)retrieveNewsRecord:(id *)a0;
- (void)handleAccountChange;
- (long long)latestPersonalizedConsentVersion;
- (BOOL)isAdEnabledLocality;
- (id)currentBundleID;
- (void)refreshConfiguration:(id /* block */)a0;
- (BOOL)isSearchOrSegmentEnabled;
- (void)registerForLockStateNotification;
- (void)migratePersonalizedAdsFromLAT;
- (BOOL)_shouldSaveConfig;
- (void).cxx_destruct;
- (BOOL)isNewsOrStocksEnabledLocality;
- (void)handleConfiguration;
- (void)pushDisable;
- (BOOL)isSearchAdsEnabled;
- (void)pushEnable;
- (void)migratePersonalizedAdsOnboarding;
- (void)forceExpiration;

@end
