@interface PXSearchSampleResultsFactory : NSObject

+ (id)_albumSubtitles;
+ (id)_categoryTitles;
+ (id)_albumTitles;
+ (id)_memorySubtitles;
+ (id)_memoryTitles;
+ (id)_momentSubtitles;
+ (id)_momentTitles;
+ (id)_personTitles;
+ (id)_placeTitles;
+ (unsigned long long)_randomAssetCount:(unsigned long long)a0;
+ (id)_uniqueSampleUUID;
+ (id)sampleAlbumResults;
+ (id)sampleAssetResults;
+ (id)sampleMemoryResults;
+ (id)sampleMomentResults;
+ (id)samplePersonResults;
+ (id)samplePlaceResults;
+ (id)sampleSceneResults;

@end
