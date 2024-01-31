@class NSSet, NSArray;

@interface PGPotentialEarlyMomentsWithPeopleMemory : PGPotentialMemory

@property (readonly, nonatomic) NSSet *personNodes;
@property (retain, nonatomic) NSArray *facedAssetLocalIdentifiers;

- (void).cxx_destruct;
- (id)initWithMomentNodes:(id)a0 personNodes:(id)a1;
- (unsigned long long)memoryCategory;
- (unsigned long long)memoryCategorySubcategory;
- (id)memoryFeatureNodesInGraph:(id)a0;

@end
