@class NSString, NSArray;

@interface PGLibraryAveragePersonCountFeatureExtractor : PGFeatureExtractor

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSArray *featureNames;
@property (nonatomic, readonly) long long featureLength;

- (id)init;
- (id)floatVectorWithEntity:(id)a0 error:(id *)a1;

@end
