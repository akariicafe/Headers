@class PGManagerWorkingContext, CLSCurationSession, CLSSimilarStacker, PHPhotoLibrary;

@interface PGSyndicationProcessor : NSObject {
    PGManagerWorkingContext *_workingContext;
    CLSSimilarStacker *_similarStacker;
    PHPhotoLibrary *_syndicationLibrary;
    CLSCurationSession *_curationSession;
}

- (void).cxx_destruct;
- (id)_bestAssetUUIDInAssetCluster:(id)a0;
- (void)_persistCurationScores:(id)a0 inPhotoLibrary:(id)a1;
- (id)duplicateAssetUUIDsForSuggesterResult:(id)a0 assetsInferredAsGuestAsset:(id)a1 syndicationLibrary:(id)a2 error:(id *)a3 progressBlock:(id /* block */)a4;
- (id)guestAssetSenderIdentifiersByMomentUUIDForMomentUUIDs:(id)a0 inPhotoLibrary:(id)a1;
- (id)initWithWorkingContext:(id)a0;
- (id)initWithWorkingContext:(id)a0 syndicationLibrary:(id)a1;
- (BOOL)processSavedSyndicatedAssetsWithError:(id *)a0 progressBlock:(id /* block */)a1;
- (BOOL)processSyndicatedAssetCurationWithError:(id *)a0 progressBlock:(id /* block */)a1;
- (BOOL)processSyndicatedAssetGuestInferenceWithError:(id *)a0 progressBlock:(id /* block */)a1;
- (BOOL)processSyndicatedAssetGuestInferenceWithError:(id *)a0 progressBlock:(id /* block */)a1 shareBackSuggester:(id)a2;
- (BOOL)processSyndicatedAssetRevGeoCodingWithError:(id *)a0 progressBlock:(id /* block */)a1;
- (id)similarStacker;
- (id)syndicationPhotoLibraryWithError:(id *)a0;

@end
