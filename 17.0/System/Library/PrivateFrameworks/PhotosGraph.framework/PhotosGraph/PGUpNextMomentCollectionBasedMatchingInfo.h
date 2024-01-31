@class PGGraphMeaningNodeCollection, NSDate, NSString, PGGraphFeatureNodeCollection, PGGraphPersonNodeCollection, PGGraphMomentNodeCollection, CLLocation, PGGraphSceneNodeCollection;

@interface PGUpNextMomentCollectionBasedMatchingInfo : NSObject <PGUpNextMatchingInfo> {
    PGGraphPersonNodeCollection *_personNodes;
    PGGraphSceneNodeCollection *_sceneNodes;
    PGGraphMeaningNodeCollection *_meaningNodes;
    BOOL _isTripMemory;
    CLLocation *_representativeLocation;
    NSDate *_representativeDate;
    BOOL _isTripMemoryIsResolved;
    BOOL _representativeLocationIsResolved;
    BOOL _representativeDateIsResolved;
}

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

+ (id)representativeDateForMomentNodes:(id)a0;
+ (id)representativeDateForMomentNodesUniversalDateInterval:(id)a0;
+ (id)representativeLocationForLocations:(id)a0;
+ (id)representativeLocationForMomentNodes:(id)a0;
+ (id)representativeMeaningNodesForEligibleMeaningNodesByMomentNode:(id)a0;
+ (id)representativeMeaningNodesForMomentNodes:(id)a0;
+ (id)representativePersonNodesForMomentNodes:(id)a0;
+ (id)representativePersonNodesForPersonNodesByMomentNode:(id)a0;
+ (id)representativeSceneNodesForMomentNodes:(id)a0;
+ (id)representativeSceneNodesForSceneNodesByMomentNode:(id)a0;

@end
