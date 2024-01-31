@class NSString, BMUserFocusComputedModeStream, BPSSink, BMUserActivityMetadataStream, NSObject;
@protocol OS_dispatch_queue, CKContextRecentsCacheDelegate, OS_os_transaction;

@interface CKContextRecentsCache : NSObject {
    BMUserActivityMetadataStream *_stream;
    NSObject<OS_dispatch_queue> *_biomeQueue;
    id /* block */ _deferredMaintenanceTaskBlock;
    NSObject<OS_os_transaction> *_deferredMaintenanceTransaction;
    NSString *_latestActivity;
    unsigned long long _configuration;
    BMUserFocusComputedModeStream *_computedModeStream;
    NSObject<OS_dispatch_queue> *_computedFocusModeQueue;
    BPSSink *_computedModeSink;
}

@property (weak, nonatomic) id<CKContextRecentsCacheDelegate> delegate;

- (void)retrieveRecentMatchingUUID:(id)a0 withReply:(id /* block */)a1;
- (void)dealloc;
- (void)retrieveRecentsMatchingBundleIdentifier:(id)a0 withReply:(id /* block */)a1;
- (id)_modeUUIDStringForComputedModeEvent:(id)a0;
- (void)retrieveRecentsCatalogWithStyle:(unsigned long long)a0 withReply:(id /* block */)a1;
- (id)initWithCacheConfiguration:(unsigned long long)a0;
- (void)_registerComputedModeStream;
- (void)pruneRecentsForBundleIdentifiers:(id)a0;
- (void)_groupActivitiesByModeIntoSectionsWithRecents:(id)a0 limit:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)_groupActivitiesByDateIntoSectionsWithRecents:(id)a0 limit:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)removeRecentWithUUID:(id)a0;
- (void)_scheduleDeferredMaintenanceTasks;
- (id)_associatedTopicTitlesForRecent:(id)a0;
- (void)retrieveRecentsMatchingTopicIds:(id)a0 titles:(id)a1 withReply:(id /* block */)a2;
- (void)_groupActivitiesByAppIntoSectionsWithRecents:(id)a0 limit:(unsigned long long)a1 reply:(id /* block */)a2;
- (BOOL)_recent:(id)a0 matchesKeywords:(id)a1;
- (void)_modeDidChangeToModeWithModeUUIDString:(id)a0;
- (id)_associatedTopicIdsForRecent:(id)a0;
- (BOOL)_constellationResult:(id)a0 intersectsWithRecent:(id)a1;
- (void)_performMaintenanceTasksForRecents:(id)a0;
- (unsigned long long)_maximumNumberOfItemsToRetrieve;
- (void)_updateLatestFocusMode;
- (id)_relativeDateStringForRecent:(id)a0;
- (void).cxx_destruct;
- (void)retrieveRecentsForPredictionWithReply:(id /* block */)a0;
- (void)_performMaintenanceTasks;
- (void)_pruneRecentsFromUnusedAppsForRecents:(id)a0;
- (void)removeAllRecentsWithReply:(id /* block */)a0;
- (void)_groupActivitiesByConstellationIntoSectionsWithRecents:(id)a0 limit:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)insertUserActivityData:(id)a0 preferredTitle:(id)a1 bundleId:(id)a2 topics:(id)a3 hasAssociatedImageRepresentation:(BOOL)a4 uuid:(id)a5;
- (void)retrieveRecentsMatchingStrings:(id)a0 withReply:(id /* block */)a1;
- (void)retrieveRecentsMatchingMode:(id)a0 withReply:(id /* block */)a1;
- (void)removeRecentsMatchingRecent:(id)a0;
- (void)retrieveRecentsBetweenStartDate:(id)a0 endDate:(id)a1 withReply:(id /* block */)a2;
- (void)allRecentsWithReply:(id /* block */)a0;

@end
