@class PGGraphMeaningNodeCollection, NSDate, NSString, PGGraphMemoryNodeCollection, PGGraphFeatureNodeCollection, PGGraphPersonNodeCollection, PGGraphMomentNodeCollection, CLLocation, PGGraphSceneNodeCollection;

@interface PGUpNextMemoryFeatureBasedMatchingInfo : NSObject <PGUpNextMatchingTarget> {
    PGGraphMemoryNodeCollection *_memoryNodeAsCollection;
    PGGraphFeatureNodeCollection *_memoryFeatureNodes;
    PGGraphPersonNodeCollection *_personNodes;
    PGGraphSceneNodeCollection *_sceneNodes;
    BOOL _isTripMemory;
    BOOL _isTripMemoryIsResolved;
}

@property (readonly, nonatomic) unsigned long long nodeIdentifier;
@property (readonly, nonatomic) PGGraphMomentNodeCollection *momentNodes;
@property (readonly, nonatomic) PGGraphPersonNodeCollection *personNodes;
@property (readonly, nonatomic) PGGraphSceneNodeCollection *sceneNodes;
@property (readonly, nonatomic) PGGraphMeaningNodeCollection *meaningNodes;
@property (readonly, nonatomic) PGGraphFeatureNodeCollection *memoryFeatureNodes;
@property (readonly, nonatomic) BOOL isTripMemory;
@property (readonly, nonatomic) CLLocation *representativeLocation;
@property (readonly, nonatomic) NSDate *representativeDate;
@property (readonly, nonatomic) NSString *debugInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)matchingInfosWithMemoryNodes:(id)a0;
+ (id)representativeSceneNodesForMemoryFeatureNodes:(id)a0;

- (void).cxx_destruct;
- (id)initWithMemoryNodeAsCollection:(id)a0;

@end
