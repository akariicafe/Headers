@class NSMutableDictionary;

@interface CLSSimilarStacker : NSObject {
    Class _similarityModelClass;
    NSMutableDictionary *_similarityModelByVersion;
    double _distanceThresholdForIdenticalSimilarity;
    double _distanceThresholdForIdenticalSimilarityWithPeople;
    double _distanceThresholdForSemanticalSimilarity;
    double _distanceThresholdForSemanticalSimilarityWithPeople;
    double _distanceThresholdForSemanticalSimilarityWithPersons;
}

@property (copy, nonatomic) id /* block */ sceneprintGetterBlock;

+ (id /* block */)distanceBlockWithMetric:(unsigned long long)a0 sceneprintGetterBlock:(id /* block */)a1;

- (void).cxx_destruct;
- (id)adaptiveStackSimilarItems:(id)a0 progressBlock:(id /* block */)a1;
- (double)distanceBetweenItem:(id)a0 andItem:(id)a1;
- (double)distanceThresholdForSimilarity:(long long)a0 withSimilarityModelVersion:(unsigned long long)a1;
- (id)initWithSimilarityModelClass:(Class)a0;
- (void)overrideDistanceThreshold:(double)a0 forSimilarity:(long long)a1;
- (id)stackSimilarItems:(id)a0 withSimilarity:(long long)a1 timestampSupport:(BOOL)a2 progressBlock:(id /* block */)a3;
- (id)_similarityModelForVersion:(unsigned long long)a0;
- (double)distanceThresholdForSimilarity:(long long)a0 similarityModel:(id)a1;
- (id /* block */)similarGroupComparator;

@end
