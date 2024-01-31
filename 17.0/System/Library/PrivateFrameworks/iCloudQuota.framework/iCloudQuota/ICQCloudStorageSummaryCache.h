@class NSMutableDictionary;

@interface ICQCloudStorageSummaryCache : NSObject {
    NSMutableDictionary *_summaryCache;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _cacheLock;
    id _quotaChangeNotificationObserver;
    id _quotaInfoChangeNotificationObserver;
    id _cloudSubscriptionFeaturesObserver;
    BOOL _hasDisplayedDetailsPage;
}

@property (nonatomic) BOOL hasDisplayedDetailsPage;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)_startObservingCloudSubscriptionFeaturesNotifications;
- (void)_stopObservingCloudSubscriptionFeaturesNotifications;
- (void)_startObservingQuotaChangeNotifications;
- (void)setStorageSummary:(id)a0 forAltDSID:(id)a1;
- (void).cxx_destruct;
- (void)_stopObservingQuotaChangeNotifications;
- (void)_cleanupCacheForPrimaryAccount;
- (id)storageSummaryForAltDSID:(id)a0;

@end
