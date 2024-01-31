@class NSArray, NSString;

@interface PGFeatureExtractorStoredCLIP : PGAssetFeatureExtractor

@property (nonatomic, readonly) long long featureLength;
@property (nonatomic, readonly) NSArray *featureNames;
@property (nonatomic, readonly) NSString *name;

- (id)init;
- (id)floatVectorWithEntity:(id)a0 error:(id *)a1;

@end
