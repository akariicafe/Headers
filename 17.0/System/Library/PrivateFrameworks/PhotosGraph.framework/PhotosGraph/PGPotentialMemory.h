@class NSDate, NSString, NSSet, NSDictionary, PGGraphMomentNode, PHAssetCollection, PGGraphMomentNodeCollection, CLLocation;

@interface PGPotentialMemory : NSObject <PGGraphMemoryProtocol>

@property (retain) PHAssetCollection *assetCollection;
@property (retain) PGGraphMomentNode *momentNode;
@property (retain, nonatomic) NSSet *momentNodes;
@property long long sourceType;
@property unsigned long long category;
@property unsigned long long subcategory;
@property double score;
@property (retain) NSDate *localDate;
@property (retain) CLLocation *location;
@property (retain) NSSet *peopleUUIDs;
@property (retain) NSString *eventName;
@property double contentScore;
@property (retain, nonatomic) NSSet *features;
@property (readonly) NSDate *localStartDate;
@property (readonly) NSDate *localEndDate;
@property (readonly) NSDate *universalStartDate;
@property (readonly) NSDate *universalEndDate;
@property (readonly) NSSet *momentIDs;
@property (readonly) NSDictionary *numberOfAssetsByMomentIDs;
@property (readonly, nonatomic) unsigned long long memoryCategory;
@property (readonly, nonatomic) unsigned long long memoryCategorySubcategory;
@property (readonly, nonatomic) PGGraphMomentNodeCollection *memoryMomentNodes;
@property (readonly, nonatomic) BOOL generatedWithFallbackRequirements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (double)computeContentScore;
- (void)_prepareForOverlapCheck;
- (void)_resetOverlapCheck;
- (id)buildAssetCollectionUsingMemoryController:(id)a0 withMinimumNumberOfAssets:(unsigned long long)a1;
- (id)initWithCategory:(unsigned long long)a0 subcategory:(unsigned long long)a1;
- (id)initWithCategory:(unsigned long long)a0 subcategory:(unsigned long long)a1 momentNode:(id)a2;
- (id)initWithCategory:(unsigned long long)a0 subcategory:(unsigned long long)a1 momentNodes:(id)a2 sourceType:(long long)a3;
- (id)memoryFeatureNodesInGraph:(id)a0;

@end
