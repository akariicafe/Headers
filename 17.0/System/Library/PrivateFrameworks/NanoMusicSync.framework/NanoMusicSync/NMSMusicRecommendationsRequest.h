@class NSDictionary, NSData;

@interface NMSMusicRecommendationsRequest : NSObject

@property (retain, nonatomic) NSDictionary *unarchivedCombinedResponsesDictionary;
@property (nonatomic) BOOL useCachedDataOnly;
@property (retain, nonatomic) NSData *cachedData;

+ (id)_recentMusicDirectory;

- (void)_performLegacyLookupRequestWithModelObjects:(id)a0 completion:(id /* block */)a1;
- (void)_writeData:(id)a0 toURL:(id)a1;
- (void)performWithResponseHandler:(id /* block */)a0;
- (void)_continueToHeavyRotationRequestWithContext:(id)a0 queue:(id)a1 responseHandler:(id /* block */)a2;
- (void)_performHeavyRotationRequestWithCompletion:(id /* block */)a0;
- (void)_finishWithContext:(id)a0 queue:(id)a1 responseHandler:(id /* block */)a2;
- (void)_performStarterPackMultiplexRequestWithCompletion:(id /* block */)a0;
- (void)_performForYouRequestWithCompletion:(id /* block */)a0;
- (void)_performStarterPackRoomRequestWithURL:(id)a0 completion:(id /* block */)a1;
- (void)_continueToProcessResultsWithContext:(id)a0 queue:(id)a1 responseHandler:(id /* block */)a2;
- (void)_continueToLegacyForYouRequestWithContext:(id)a0 queue:(id)a1 responseHandler:(id /* block */)a2;
- (void)_performLegacyLibraryImportChangeRequestWithModelObjects:(id)a0 completion:(id /* block */)a1;
- (void)_performLibraryImportChangeRequestWithModelObjects:(id)a0 completion:(id /* block */)a1;
- (void)_continueToLegacyLookupWithContext:(id)a0 queue:(id)a1 responseHandler:(id /* block */)a2;
- (void)_continueToStarterPackMultiplexRequestWithContext:(id)a0 queue:(id)a1 responseHandler:(id /* block */)a2;
- (void)_performLibraryRecentMusicRequestWithCompletion:(id /* block */)a0;
- (id)_starterPackMultiplexCacheURL;
- (void)_continueToLegacyLibraryImportWithContext:(id)a0 queue:(id)a1 responseHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (void)_continueToStarterPackRoomRequestWithURL:(id)a0 context:(id)a1 queue:(id)a2 responseHandler:(id /* block */)a3;
- (void)_continueToLibraryImportWithContext:(id)a0 queue:(id)a1 responseHandler:(id /* block */)a2;
- (void)_performEditorialBrowseRequestWithCompletion:(id /* block */)a0;
- (id)_heavyRotationCacheURL;
- (id)_starterPackRoomCacheURL;
- (void)_continueToLibraryRecentMusicRecommedationsWithContext:(id)a0 queue:(id)a1 responseHandler:(id /* block */)a2;
- (id)_unarchivedCombinedResponsesDictionary;
- (void)_continueToLegacyEditorialRequestWithContext:(id)a0 queue:(id)a1 responseHandler:(id /* block */)a2;

@end
