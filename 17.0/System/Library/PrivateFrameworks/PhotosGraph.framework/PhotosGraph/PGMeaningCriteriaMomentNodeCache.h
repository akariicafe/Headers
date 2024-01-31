@class PGGraphMomentNodeCollection, NSSet, NSArray, PGGraphPublicEventCategoryNodeCollection, PGGraphMomentNode, PGGraphAddressNodeCollection, PGGraphMeNodeCollection;

@interface PGMeaningCriteriaMomentNodeCache : NSObject {
    PGGraphMomentNode *_momentNode;
    PGGraphMomentNodeCollection *_momentNodeAsCollection;
    PGGraphMeNodeCollection *_meNodeAsCollection;
    PGGraphAddressNodeCollection *_preciseAddressNodeCollection;
    char _hasAddressNodes;
    char _happensPartiallyAtMyHome;
    char _happensPartiallyAtMyWork;
    char _happensAtFrequentLocation;
    char _happensPartiallyAtMyHomeOrWork;
    unsigned long long _partsOfDay;
    unsigned long long _significantPartsOfDay;
}

@property (readonly) BOOL hasAddressNodes;
@property (readonly) BOOL happensPartiallyAtMyHome;
@property (readonly) BOOL happensPartiallyAtMyWork;
@property (readonly) BOOL happensAtFrequentLocation;
@property (readonly) BOOL happensPartiallyAtMyHomeOrWork;
@property (readonly) unsigned long long significantPartsOfDay;
@property (readonly) unsigned long long partsOfDay;
@property (readonly) NSSet *personNodes;
@property (readonly) NSSet *preciseAddressNodes;
@property (readonly) NSSet *preciseAreaNodes;
@property (readonly) NSSet *poiNodes;
@property (readonly) NSSet *specialPOINodes;
@property (readonly) NSSet *roiNodes;
@property (retain, nonatomic) NSArray *sceneEdges;
@property (readonly) PGGraphPublicEventCategoryNodeCollection *publicEventCategoryNodes;

- (void).cxx_destruct;
- (void)_computeHomeWork;
- (void)enumerateSceneEdgesAndNodesUsingBlock:(id /* block */)a0;
- (id)initWithMomentNode:(id)a0;
- (id)preciseAddressNodeCollection;

@end
