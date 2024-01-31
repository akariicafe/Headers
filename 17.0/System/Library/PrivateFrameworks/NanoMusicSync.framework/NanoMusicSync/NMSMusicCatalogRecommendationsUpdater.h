@class NSObject, NSBackgroundActivityScheduler, NRPairedDeviceRegistry, NMSSubscriptionManager;
@protocol OS_dispatch_queue;

@interface NMSMusicCatalogRecommendationsUpdater : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NRPairedDeviceRegistry *_pairedDeviceRegistry;
    NMSSubscriptionManager *_subscriptionManager;
    NSBackgroundActivityScheduler *_updateScheduler;
    unsigned long long _retryAttempt;
}

@property (copy, nonatomic) id /* block */ updateHandlerBlock;

+ (void)_clearLastUpdatedDateIfNeeded;
+ (struct { long long x0; struct _NSRange { unsigned long long x0; unsigned long long x1; } x1; })_configurationWithBag:(id)a0;
+ (double)_nextUpdateDelayAfterDate:(id)a0 configuration:(struct { long long x0; struct _NSRange { unsigned long long x0; unsigned long long x1; } x1; })a1;
+ (double)_stalenessIntervalWithBag:(id)a0;

- (id)init;
- (void)_handleSubscriptionStatusDidChangeNotification:(id)a0;
- (void).cxx_destruct;
- (void)_handlePairedDeviceRegistryDeviceDidPairNotification:(id)a0;
- (BOOL)_needsInitialContentUpdate;
- (void)_performNextUpdateWithScheduler:(id)a0 completionHandler:(id /* block */)a1;
- (void)_performNextUpdateWithScheduler:(id)a0 urlBag:(id)a1 completionHandler:(id /* block */)a2;
- (void)_scheduleNextUpdateIfNeeded;
- (void)_scheduleNextUpdateWithBag:(id)a0;
- (void)beginAutomaticContentUpdating;
- (void)endAutomaticContentUpdating;

@end
