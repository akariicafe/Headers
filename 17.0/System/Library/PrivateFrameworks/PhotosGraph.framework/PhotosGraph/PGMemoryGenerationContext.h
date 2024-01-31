@class PGGraphLocationHelper, PGMemoryMomentNodesWithBlockedFeatureCache, PGGraphYearNodeCollection, NSDictionary, MABinaryAdjacency, NSObject, PGGraphMomentNodeCollection, PGMemoryProcessedScenesAndFacesCache;
@protocol OS_os_log;

@interface PGMemoryGenerationContext : NSObject {
    PGGraphMomentNodeCollection *_momentNodesAtSensitiveLocations;
    PGGraphMomentNodeCollection *_momentNodesInterestingWithAlternateJunking;
    PGGraphMomentNodeCollection *_momentNodesInterestingForMemories;
    NSDictionary *_numberOfAssetsInExtendedCurationByMomentNodeIdentifier;
    NSDictionary *_contentScoreByMomentNodeIdentifier;
    MABinaryAdjacency *_yearNodesByMomentNode;
    NSDictionary *_yearByYearNodeIdentifier;
    PGGraphYearNodeCollection *_yearNodes;
}

@property (readonly, nonatomic) PGMemoryProcessedScenesAndFacesCache *processedScenesAndFacesCache;
@property (readonly, nonatomic) PGMemoryMomentNodesWithBlockedFeatureCache *momentNodesWithBlockedFeatureCache;
@property (readonly, nonatomic) PGGraphLocationHelper *locationHelper;
@property (readonly, nonatomic) NSObject<OS_os_log> *loggingConnection;

- (void).cxx_destruct;
- (id)_yearNodesInGraph:(id)a0;
- (double)averageContentScoreForMomentNodes:(id)a0;
- (id)initWithPhotoLibrary:(id)a0 userFeedbackCalculator:(id)a1 graph:(id)a2 loggingConnection:(id)a3;
- (id)initWithProcessedScenesAndFacesCache:(id)a0 momentNodesWithBlockedFeatureCache:(id)a1 locationHelper:(id)a2 loggingConnection:(id)a3;
- (id)interestingForMemoriesSubsetFromMomentNodes:(id)a0;
- (id)interestingWithAlternateJunkingSubsetFromMomentNodes:(id)a0;
- (id)momentNodesAtSensitiveLocationsInGraph:(id)a0;
- (unsigned long long)numberOfAssetsInExtendedCurationForMomentNodes:(id)a0;
- (id)yearNodesByMomentNodeInGraph:(id)a0;
- (id)yearNodesForMomentNodes:(id)a0;
- (id)yearsForYearNodes:(id)a0;

@end
