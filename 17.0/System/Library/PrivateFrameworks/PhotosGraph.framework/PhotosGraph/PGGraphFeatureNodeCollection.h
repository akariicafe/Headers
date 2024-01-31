@class PGGraphMomentNodeCollection, NSSet, MARelation, PGGraphMemoryNodeCollection;

@interface PGGraphFeatureNodeCollection : PGGraphNodeCollection

@property (class, readonly) MARelation *momentOfFeature;
@property (class, readonly) MARelation *memoryOfFeature;

@property (readonly, nonatomic) NSSet *featureIdentifiers;
@property (readonly, nonatomic) PGGraphMomentNodeCollection *momentNodes;
@property (readonly, nonatomic) PGGraphMemoryNodeCollection *memoryNodes;

+ (id)featureNodeCollectionWithCollection:(id)a0;
+ (id)featureNodeCollectionWithFeatures:(id)a0 inGraph:(id)a1;

- (id)allFeatures;

@end
