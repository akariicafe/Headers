@class NSString, NSMapTable, NSObject;
@protocol OS_dispatch_queue, SKADatabaseManaging, SKAPushManaging, SKAChannelManaging;

@interface SKAStatusSubscriptionManager : NSObject <SKAStatusSubscriptionManaging>

@property (retain, nonatomic) NSMapTable *activeTransientSubscriptionsByClient;
@property (retain, nonatomic) NSMapTable *activePresenceSubscriptionsByClient;
@property (retain, nonatomic) id<SKADatabaseManaging> databaseManager;
@property (retain, nonatomic) id<SKAChannelManaging> channelManager;
@property (retain, nonatomic) id<SKAPushManaging> pushManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalWorkQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logger;
+ (id)_tooManySubscriptionsError;

- (long long)_maxPresenceSubscriptionCacheCount;
- (void)releasePresenceSubscriptionAssertionForSubscriptionIdentifier:(id)a0 client:(id)a1 completion:(id /* block */)a2;
- (void)releasePersistentSubscriptionAssertionForSubscriptionIdentifier:(id)a0 statusTypeIdentifier:(id)a1 applicationIdentifier:(id)a2 completion:(id /* block */)a3;
- (id)_fetchAllActiveSubscriptionAssertionsWithCache;
- (BOOL)_removeTransientSubscriptionAssertionForClient:(id)a0 subscriptionIdentifier:(id)a1;
- (id)_recentlyReleasedTransientSubscriptionAssertionIdentifiersExcludingSubscriptionIdentifiers:(id)a0 count:(long long)a1 presenceCount:(long long)a2 databaseContext:(id)a3;
- (void)releaseAllTransientSubscriptionAssertionsAssociatedWithClient:(id)a0 completion:(id /* block */)a1;
- (id)_activeTransientSubscriptionsForClient:(id)a0;
- (void)retainTransientSubscriptionAssertionForSubscriptionIdentifier:(id)a0 statusTypeIdentifier:(id)a1 client:(id)a2 completion:(id /* block */)a3;
- (void)updateRegisteredSubscriptionsForActiveAssertionsWithCompletion:(id /* block */)a0;
- (BOOL)activePresenceSubscriptionAssertionsExistForChannelIdentifier:(id)a0;
- (double)_subscriptionTTL;
- (void)allSubscriptionIdentifiersWithActiveAssertionsForStatusTypeIdentifier:(id)a0 completion:(id /* block */)a1;
- (long long)_hardMaxSubscriptionCount;
- (id)_fetchAllClientActiveSubscriptionAssertions;
- (void)releaseTransientSubscriptionAssertionForSubscriptionIdentifier:(id)a0 statusTypeIdentifier:(id)a1 client:(id)a2 completion:(id /* block */)a3;
- (BOOL)_activePresenceAssertionsExist;
- (id)_sortAndDedupeSubscriptionIdentifiers:(id)a0;
- (id)_allPersonalChannelIdentifiersRequiringSelfSubscriptionWithDatabaseContext:(id)a0;
- (void)_markCacheSubscriptionDateForChannelIdentifier:(id)a0;
- (id)_activePresenceSubscriptionsForClient:(id)a0;
- (BOOL)_activeTransientAssertionsExist;
- (id)initWithDatabaseManager:(id)a0 channelManager:(id)a1 pushManager:(id)a2;
- (id)_statusTypeIdentifiersRequiringSelfSubscription;
- (BOOL)_removePresenceSubscriptionAssertionForClient:(id)a0 subscriptionIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)retainPresenceSubscriptionAssertionForSubscriptionIdentifier:(id)a0 client:(id)a1 completion:(id /* block */)a2;
- (id)_enforceSubscriptionsHardCapOnSubscriptionIdentifiers:(id)a0;
- (id)_filterSubscriptionIdentifierToStatus:(id)a0;
- (void)allStatusSubscriptionIdentifiersWithActiveSubscriptionsWithCompletion:(id /* block */)a0;
- (BOOL)_addPresenceSubscriptionAssertionForClient:(id)a0 subscriptionIdentifier:(id)a1;
- (id)_fetchAllActivePresenceSubscriptions;
- (id)_filterSubscriptionIdentifierToPresence:(id)a0;
- (BOOL)_addTransientSubscriptionAssertionForClient:(id)a0 subscriptionIdentifier:(id)a1;
- (long long)_maxSubscriptionCacheCount;
- (void)releaseAllPresenceSubscriptionAssertionsAssociatedWithClient:(id)a0 completion:(id /* block */)a1;
- (void)retainPersistentSubscriptionAssertionForSubscriptionIdentifier:(id)a0 statusTypeIdentifier:(id)a1 applicationIdentifier:(id)a2 completion:(id /* block */)a3;

@end
