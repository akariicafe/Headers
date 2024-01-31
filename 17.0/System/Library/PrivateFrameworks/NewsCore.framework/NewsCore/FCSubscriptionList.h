@class NSOrderedSet, NSSet, NSDictionary, NSMutableDictionary, FCMTWriterLock;
@protocol FCTagRanking;

@interface FCSubscriptionList : FCPrivateDataController {
    NSOrderedSet *_orderedSubscribedTagIDsInternal;
    NSSet *_subscribedTagIDsInternal;
    NSSet *_mutedTagIDsInternal;
    NSSet *_autoFavoriteTagIDsInternal;
    NSSet *_groupableTagIDsInternal;
    NSSet *_ignoredTagIDsInternal;
    NSMutableDictionary *_mutableSubscriptionsBySubscriptionID;
    FCMTWriterLock *_itemsLock;
}

@property (readonly, copy, nonatomic) NSOrderedSet *orderedSubscribedTagIDs;
@property (readonly, copy, nonatomic) NSSet *subscribedTagIDs;
@property (readonly, copy, nonatomic) NSSet *mutedTagIDs;
@property (readonly, copy, nonatomic) NSSet *autoFavoriteTagIDs;
@property (readonly, copy, nonatomic) NSSet *groupableTagIDs;
@property (readonly, copy, nonatomic) NSSet *ignoredTagIDs;
@property (readonly, copy, nonatomic) NSSet *allSubscribedTagIDs;
@property (retain, nonatomic) id<FCTagRanking> subscribedTagRanker;
@property (readonly, copy, nonatomic) NSDictionary *subscriptionsBySubscriptionID;

+ (id)subscriptionIDForTagID:(id)a0 type:(unsigned long long)a1;
+ (id)desiredKeys;
+ (unsigned long long)localStoreVersion;
+ (BOOL)requiresPushNotificationSupport;
+ (id)backingRecordZoneIDs;
+ (long long)commandQueueUrgency;
+ (void)configureKeyValueStoreForJSONHandling:(id)a0;
+ (id)commandsToMergeLocalDataToCloud:(id)a0 privateDataDirectory:(id)a1;
+ (id)backingRecordIDs;
+ (id)commandStoreFileName;
+ (id)localStoreFilename;
+ (BOOL)requiresHighPriorityFirstSync;
+ (BOOL)requiresBatchedSync;

- (id)t_reconcileSubscriptions:(id)a0;
- (void)removeObserver:(id)a0;
- (id)subscriptionsForType:(unsigned long long)a0;
- (void)handleSyncDidResetLocalDataForRecordZoneWithID:(id)a0;
- (void)removeSubscriptionsForTagIDs:(id)a0 typeProvider:(id /* block */)a1 completion:(id /* block */)a2;
- (id)subscriptionForTagID:(id)a0;
- (void)loadLocalCachesFromStore;
- (id)subscriptionForTagIDOfAnyType:(id)a0;
- (BOOL)canHelpRestoreZoneName:(id)a0;
- (BOOL)hasAutoFavoriteSubscriptionForTagID:(id)a0;
- (void)assignOrderToTagSubscriptionsIfNeeded;
- (void)handleSyncCompletion;
- (BOOL)addSubscriptionForTagID:(id)a0 type:(unsigned long long)a1;
- (id)recordsForRestoringZoneName:(id)a0;
- (BOOL)addSubscriptionForTagID:(id)a0 type:(unsigned long long)a1 origin:(unsigned long long)a2 groupID:(id)a3;
- (void)addSubscriptionsForTagIDs:(id)a0 typeProvider:(id /* block */)a1 originProvider:(id /* block */)a2 completion:(id /* block */)a3;
- (void)removeSubscriptionForTagID:(id)a0 type:(unsigned long long)a1;
- (BOOL)moveSubscriptionForTagID:(id)a0 toIndex:(unsigned long long)a1;
- (id)allKnownRecordNamesWithinRecordZoneWithID:(id)a0;
- (void).cxx_destruct;
- (BOOL)addSubscriptionForTagID:(id)a0 type:(unsigned long long)a1 origin:(unsigned long long)a2 groupID:(id)a3 notificationsEnabled:(BOOL)a4;
- (void)handleSyncWithChangedRecords:(id)a0 deletedRecordNames:(id)a1;
- (BOOL)setNotificationsEnabled:(BOOL)a0 forTagID:(id)a1;
- (BOOL)addSubscriptionForTagID:(id)a0 type:(unsigned long long)a1 origin:(unsigned long long)a2;
- (BOOL)hasMutedSubscriptionForTagID:(id)a0;
- (id)subscriptionForTagID:(id)a0 type:(unsigned long long)a1;
- (BOOL)hasNotificationsEnabledForTagID:(id)a0;
- (BOOL)hasIgnoredSubscriptionForTagID:(id)a0;
- (id)initWithContext:(id)a0 pushNotificationCenter:(id)a1 storeDirectory:(id)a2;
- (BOOL)canAddSubscription;
- (BOOL)appendSubscriptionForTagID:(id)a0 type:(unsigned long long)a1;
- (BOOL)hasSubscriptionForTagID:(id)a0;
- (void)addObserver:(id)a0;

@end
