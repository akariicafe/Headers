@class GEOClientRankingModelFeatureSourceIdentifier, GEOClientRankingModelFeatureTypeIdentifier, GEOClientRankingModelFeatureFunction;

@interface GEOClientRankingFeatureUnit : NSObject

@property (readonly, nonatomic) long long featureType;
@property (readonly, nonatomic) GEOClientRankingModelFeatureSourceIdentifier *source;
@property (readonly, nonatomic) GEOClientRankingModelFeatureTypeIdentifier *feature;
@property (readonly, nonatomic) GEOClientRankingModelFeatureFunction *function;

- (void).cxx_destruct;
- (id)initWithFeatureType:(id)a0 function:(id)a1;
- (id)initWithSource:(id)a0 function:(id)a1;

@end
