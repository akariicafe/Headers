@class NSArray, NSString;

@interface PGMeaningSceneCriteria : NSObject <PGMeaningCriteria>

@property (retain, nonatomic) NSArray *positiveScenes;
@property (nonatomic) unsigned long long minimumNumberOfPositiveScenes;
@property (nonatomic) unsigned long long minimumNumberOfAssetsWithPositiveScenes;
@property (nonatomic) BOOL accumulateAssetCountsWithPositiveScenes;
@property (nonatomic) double minimumRatioOfAssetsWithPositiveScenes;
@property (retain, nonatomic) NSArray *negativeScenes;
@property (nonatomic) unsigned long long minimumNumberOfNegativeScenes;
@property (nonatomic) unsigned long long minimumNumberOfAssetsWithNegativeScenes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)criteriaKey;
+ (id)criteriaWithDictionary:(id)a0;

- (BOOL)isValid;
- (void).cxx_destruct;
- (BOOL)passesForAssets:(id)a0;
- (BOOL)passesForMomentNode:(id)a0 momentNodeCache:(id)a1;

@end
