@interface GEOClientRankingModelFeatureTypeIdentifier : GEOClientRankingModelFeatureIdentifier

@property (readonly, nonatomic) long long featureType;

- (id)init;
- (long long)featureIdentifierType;
- (id)initWithFeatureType:(long long)a0;

@end
