@class PHPhotoLibrary, NSObject, PGNeighborScoreComputer;
@protocol PGEnrichedMemoryProtocol, OS_os_log;

@interface PGMemoryPhotosGraphProperties : NSObject {
    id<PGEnrichedMemoryProtocol> _enrichedMemory;
    PHPhotoLibrary *_photoLibrary;
    PGNeighborScoreComputer *_neighborScoreComputer;
    NSObject<OS_os_log> *_loggingConnection;
    BOOL _isAppleMusicSubscriber;
}

+ (id)_storyRecipeSongCatalogForAppleMusicSubscriber:(BOOL)a0;

- (long long)sourceType;
- (id)infoDictionary;
- (id)dictionary;
- (void).cxx_destruct;
- (id)musicGenreDistribution;
- (id)personLocalIdentifiers;
- (id)featureVectorV1;
- (unsigned long long)numberOfMoments;
- (long long)phTitleCategory;
- (id)encodedFeatures;
- (id)featureVectorV2;
- (id)_recipeFromEnrichedMemory:(id)a0 subscriberCatalog:(id)a1 applyColorGrading:(BOOL)a2 loggingConnection:(id)a3;
- (id)encodedBlockableFeatures;
- (id)infoForBackingMoments;
- (id)infoForChapterTitles;
- (id)infoForGraphCollection;
- (id)initWithEnrichedMemory:(id)a0 neighborScoreComputer:(id)a1 isAppleMusicSubscriber:(BOOL)a2 photoLibrary:(id)a3 loggingConnection:(id)a4;
- (BOOL)isTriggered;
- (id)triggerTypesArray;

@end
