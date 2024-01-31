@interface PGMusicWrapper : NSObject

+ (id)_musicCurationFeaturesWithFeatureExtractionContext:(id)a0 assetFetchResult:(id)a1 graphManager:(id)a2 progressReporter:(id)a3 error:(id *)a4;
+ (id)_musicCurationFeaturesWithFeatureExtractionContext:(id)a0 memory:(id)a1 graphManager:(id)a2 progressReporter:(id)a3 error:(id *)a4;
+ (BOOL)cacheRemoveAllForPhotoLibrary:(id)a0 error:(id *)a1;
+ (id)cacheStatusWithPhotoLibrary:(id)a0 error:(id *)a1;
+ (void)fetchMusicCatalogAdamIDsForPurchasedSongID:(id)a0 inflationContext:(id)a1 progressReporter:(id)a2 completionHandler:(id /* block */)a3;
+ (void)fetchSongDisplayMetadataJSONForAdamIDs:(id)a0 inflationContext:(id)a1 progressReporter:(id)a2 completionHandler:(id /* block */)a3;
+ (id)generateFlexMusicCurationDebugInformationForAssetCollection:(id)a0 graphManager:(id)a1 progressReporter:(id)a2 error:(id *)a3;
+ (id)generateFlexMusicCurationDebugInformationForSongWithUID:(id)a0 graphManager:(id)a1 progressReporter:(id)a2 error:(id *)a3;
+ (id)generateMusicCurationDebugInformationForAssetCollection:(id)a0 graphManager:(id)a1 progressReporter:(id)a2 error:(id *)a3;
+ (id)generateMusicCurationDebugInformationForSongWithAdamID:(id)a0 graphManager:(id)a1 progressReporter:(id)a2 error:(id *)a3;
+ (void)requestFlexMusicCurationForAssetCollection:(id)a0 curationOptions:(id)a1 graphManager:(id)a2 reply:(id /* block */)a3;
+ (void)requestFlexMusicCurationForAssetFetchResult:(id)a0 curationOptions:(id)a1 graphManager:(id)a2 reply:(id /* block */)a3;
+ (void)requestMusicCurationForAssetCollection:(id)a0 curationOptions:(id)a1 graphManager:(id)a2 reply:(id /* block */)a3;
+ (void)requestMusicCurationForAssetFetchResult:(id)a0 curationOptions:(id)a1 graphManager:(id)a2 reply:(id /* block */)a3;

@end
