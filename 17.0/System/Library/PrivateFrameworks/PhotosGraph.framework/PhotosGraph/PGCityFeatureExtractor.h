@interface PGCityFeatureExtractor : MARelationCollectionFeatureExtractor

+ (id)unlocalizedCityNameFromCityName:(id)a0 countryCode:(id)a1 fromCityManager:(id)a2;

- (id)initWithVersion:(long long)a0 error:(id *)a1;
- (id)labelsForVersion:(long long)a0;

@end
