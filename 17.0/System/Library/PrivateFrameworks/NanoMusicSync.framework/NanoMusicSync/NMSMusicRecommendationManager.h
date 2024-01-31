@class NMSInitialCloudLibraryImportObserver, NSArray, NSSet, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_dispatch_group;

@interface NMSMusicRecommendationManager : NSObject {
    NSArray *_recommendations;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_libraryRecommendationExpirationTimer;
    NSObject<OS_dispatch_source> *_artworkRetryTimer;
    unsigned long long _artworkRetryAttempt;
    NSSet *_artworkRetryPlaylists;
    NSObject<OS_dispatch_group> *_initialRecommendationsFetchGroup;
    BOOL _hasFetchedInitialRecommendations;
    NMSInitialCloudLibraryImportObserver *_initialCloudLibraryImportObserver;
}

@property (nonatomic) BOOL wantsContentsUpdate;

+ (id)sharedManager;
+ (BOOL)_shouldComputeLibraryRecommendations;

- (void)_notifyMusicRecommendationsDidUpdateNotification;
- (id)init;
- (void)_unregisterForPairingFinishedNotification;
- (void)dealloc;
- (void)_importArtworkIfNecessaryForObjectsIgnorePreviousCache:(BOOL)a0;
- (void)_removeLegacyRecommendationsDefaultsIfNecessary;
- (void)_reloadRecommendationsFromDefaultsWithCompletion:(id /* block */)a0;
- (id)_recommendations;
- (id)_expirationDateForUpdateDate:(id)a0 withOffsetDays:(long long)a1;
- (void)persistRecommendationsSelections:(id)a0;
- (void)_handleSubscriptionStatusDidChangeNotification:(id)a0;
- (id)_fetchAddedDateForContainer:(id)a0;
- (void)_scheduleNextLibraryRecommendationReloadIfNecessary;
- (void)_handleActiveAccountDidChangeNotification:(id)a0;
- (void)_reloadRecommendationContentsIfNecessary;
- (void)_registerForPairingFinishedNotification;
- (void)fetchRecommendationsWithQueue:(id)a0 completion:(id /* block */)a1;
- (void)_setArtworkImageCache:(id)a0 withToken:(id)a1;
- (void)_handleMusicLibraryContentsDidChangeNotification:(id)a0;
- (void)_persistUpdatedRecommendationsWithResponse:(id)a0;
- (void)_deleteCachedArtworksWithTokens:(id)a0;
- (void)_reloadLibraryRecommendations;
- (void)_invalidateArtworkRetryTimer;
- (void)_handleMediaLibraryEntitiesAddedOrRemovedNotification:(id)a0;
- (void)_handleArtworksDidUpdateNotification:(id)a0;
- (void)_handleRecommendationStoreContentsDidChangeNotification:(id)a0;
- (void)_importArtworkForPlaylists:(id)a0;
- (void)nms_fetchRecentMusicRecommendationWithQueue:(id)a0 completionHandler:(id /* block */)a1;
- (void)_retryFailedArtworkImportsIfNecessary;
- (void).cxx_destruct;
- (void)_finishLoadingContentsWithResponse:(id)a0;
- (void)_removePreviousRecommendationDefaults;
- (void)_handlePairedDeviceDidBecomeActiveNotification:(id)a0;
- (BOOL)_isLibraryRecommendationExpired;
- (BOOL)hasSelectedRecommendationWithIdentifier:(id)a0;
- (void)_handleMediaLibraryDidChangeNotification:(id)a0;
- (BOOL)_updateWithRecommendations:(id)a0;
- (void)_invalidateLibraryRecommendationExpirationTimer;
- (void)_handleRecommendationSelectionsDidChangeNotification:(id)a0;
- (void)nms_deselectRecommendationIfNecessaryForModelObject:(id)a0;
- (void)_handleMediaLibraryDynamicPropertiesDidChangeNotification:(id)a0;
- (void)nms_fetchSelectedRecommendationSectionTypesForModelObject:(id)a0 queue:(id)a1 completionHandler:(id /* block */)a2;
- (void)_handlePairingFinishedNotification:(id)a0;
- (id)_sortedContainersBasedOnRecency;
- (BOOL)_updateRecommendationsSelections;
- (void)_removePreviousCachedRecommendationsResponses;
- (void)_startArtworkRetryTimer;

@end
