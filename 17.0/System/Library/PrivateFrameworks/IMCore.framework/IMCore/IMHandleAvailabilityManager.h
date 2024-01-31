@class NSMutableDictionary, NSString, NSMutableSet, SKStatusSubscriptionService, NSObject;
@protocol OS_dispatch_queue;

@interface IMHandleAvailabilityManager : NSObject <SKStatusSubscriptionServiceDelegate>

@property (retain, nonatomic) NSMutableDictionary *currentSubscriptionCache;
@property (retain, nonatomic) NSMutableDictionary *lastKnownSubscriptionCache;
@property (nonatomic) long long currentCacheGeneration;
@property (retain, nonatomic) NSMutableSet *pendingFetchesForCacheKeys;
@property (retain, nonatomic) SKStatusSubscriptionService *subscriptionService;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *privateWorkQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)fetchPersonalAvailabilityWithCompletion:(id /* block */)a0;
- (id)_skHandleForString:(id)a0;
- (id)_subscriptionCacheKeyForHandle:(id)a0;
- (void)subscriptionInvitationReceived:(id)a0;
- (long long)_availablityFromStatusSubscription:(id)a0 handleID:(id)a1;
- (id)_cachedStatusSubscriptionForIMHandle:(id)a0 fromCache:(id)a1 cacheDescription:(id)a2 cacheMiss:(BOOL *)a3;
- (void)_clearCurrentSubscriptionCache;
- (void)_fetchUpdatedStatusForHandle:(id)a0 completion:(id /* block */)a1;
- (void)_postNotificationForUpdatedStatusWithSubscription:(id)a0;
- (id)_skHandleForIMHandle:(id)a0;
- (long long)availabilityForHandle:(id)a0;
- (id)availabilityStatusPublishedDateForHandle:(id)a0;
- (void)beginObservingAvailabilityForHandle:(id)a0;
- (void)endObservingAvailabilityForHandle:(id)a0;
- (void)fetchUpdatedStatusAndUpdateCachesForHandle:(id)a0 lastKnownStatus:(id)a1;
- (id)statusSubscriptionForHandle:(id)a0;
- (void)subscriptionReceivedStatusUpdate:(id)a0;
- (void)subscriptionServiceDaemonDisconnected:(id)a0;
- (void)subscriptionStateChanged:(id)a0;

@end
