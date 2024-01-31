@class NSString, NSDictionary, NSMutableSet;

@interface FCPrivateChannelMembershipController : FCPrivateDataController <FCAppActivityObserving> {
    NSDictionary *_membershipsByChannelID;
    NSMutableSet *_membershipReferences;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)desiredKeys;
+ (unsigned long long)localStoreVersion;
+ (BOOL)requiresPushNotificationSupport;
+ (id)backingRecordZoneIDs;
+ (long long)commandQueueUrgency;
+ (id)commandsToMergeLocalDataToCloud:(id)a0 privateDataDirectory:(id)a1;
+ (id)backingRecordIDs;
+ (id)commandStoreFileName;
+ (id)localStoreFilename;
+ (BOOL)requiresHighPriorityFirstSync;
+ (BOOL)requiresBatchedSync;

- (void)dealloc;
- (void)removeObserver:(id)a0;
- (BOOL)isMemberOfChannelID:(id)a0;
- (void)loadLocalCachesFromStore;
- (void)isAllowedToSeeArticleID:(id)a0 completionBlock:(id /* block */)a1;
- (BOOL)isAllowedToSeeDraftsForChannelID:(id)a0;
- (void)isAllowedToSeeIssueID:(id)a0 completionBlock:(id /* block */)a1;
- (id)membershipChannelIDs;
- (id)allKnownRecordNamesWithinRecordZoneWithID:(id)a0;
- (void).cxx_destruct;
- (void)handleSyncWithChangedRecords:(id)a0 deletedRecordNames:(id)a1;
- (BOOL)hasMemberships;
- (id)initWithContext:(id)a0 pushNotificationCenter:(id)a1 storeDirectory:(id)a2;
- (void)activityObservingApplicationWindowDidBecomeForeground;
- (void)addObserver:(id)a0;
- (id)feedDescriptorForDraftFeedForChannel:(id)a0;

@end
