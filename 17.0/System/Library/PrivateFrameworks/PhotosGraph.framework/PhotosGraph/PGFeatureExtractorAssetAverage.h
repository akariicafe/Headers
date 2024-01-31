@class NSArray, NSString;

@interface PGFeatureExtractorAssetAverage : PGFeatureExtractor {
    void /* unknown type, empty encoding */ featureExtractor;
    void /* unknown type, empty encoding */ skipAssetsWithErrors;
}

@property (nonatomic, readonly) long long featureLength;
@property (nonatomic, readonly) NSArray *featureNames;
@property (nonatomic, readonly) NSString *name;

- (id)init;
- (void).cxx_destruct;
- (id)floatVectorWithEntity:(id)a0 error:(id *)a1;
- (id)initWithFeatureExtractor:(id)a0 skipAssetsWithErrors:(BOOL)a1;

@end
