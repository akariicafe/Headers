@class PGGraphMomentNodeCollection, MABinaryAdjacency;

@interface PGMeaningfulEventProcessorCache : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    MABinaryAdjacency *_sceneNodesByMomentNode;
    MABinaryAdjacency *_reliableSceneNodesByMomentNode;
    MABinaryAdjacency *_poiNodesByMomentNode;
    MABinaryAdjacency *_roiNodesByMomentNode;
    MABinaryAdjacency *_addressNodesByMomentNode;
    MABinaryAdjacency *_preciseAddressNodesByMomentNode;
    MABinaryAdjacency *_dateNodesByMomentNode;
    MABinaryAdjacency *_personNodesByMomentNode;
    MABinaryAdjacency *_socialGroupNodesByMomentNode;
    MABinaryAdjacency *_publicEventCategoryNodesByMomentNode;
    MABinaryAdjacency *_partOfDayNodesByMomentNode;
    MABinaryAdjacency *_significantPartOfDayNodesByMomentNode;
    MABinaryAdjacency *_mobilityNodesByMomentNode;
}

@property (readonly, nonatomic) PGGraphMomentNodeCollection *momentNodes;

- (void).cxx_destruct;
- (id)socialGroupNodesForMomentNodes:(id)a0;
- (id)addressNodesForMomentNodes:(id)a0;
- (id)dateNodesForMomentNodes:(id)a0;
- (id)initWithMomentNodes:(id)a0;
- (id)mobilityNodesForMomentNodes:(id)a0;
- (unsigned long long)partsOfDayForMomentNodes:(id)a0;
- (id)peopleNodesForMomentNodes:(id)a0;
- (id)poiNodesWithNonzeroConfidenceForMomentNodes:(id)a0;
- (id)preciseAddressNodesForMomentNodes:(id)a0;
- (id)publicEventCategoryNodesForMomentNodes:(id)a0;
- (id)reliableSceneNodesForMomentNodes:(id)a0;
- (id)roiNodesWithNonzeroConfidenceForMomentNodes:(id)a0;
- (id)sceneNodesForMomentNodes:(id)a0;
- (unsigned long long)significantPartsOfDayForMomentNodes:(id)a0;

@end
