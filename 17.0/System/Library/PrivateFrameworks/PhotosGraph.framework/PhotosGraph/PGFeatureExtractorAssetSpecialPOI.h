@class PGGraph;

@interface PGFeatureExtractorAssetSpecialPOI : PGAssetFeatureExtractor

@property (readonly, nonatomic) PGGraph *graph;

- (id)featureNames;
- (void).cxx_destruct;
- (id)name;
- (id)initWithGraph:(id)a0;
- (id)floatVectorWithEntity:(id)a0 error:(id *)a1;
- (BOOL)_generateError:(id *)a0 withCode:(long long)a1 andMessage:(id)a2;
- (long long)featureLength;
- (id)floatVectorWithMoment:(id)a0 error:(id *)a1;

@end
