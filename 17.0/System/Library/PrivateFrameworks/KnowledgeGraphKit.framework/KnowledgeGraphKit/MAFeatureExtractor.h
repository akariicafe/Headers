@class NSString, NSArray;

@interface MAFeatureExtractor : NSObject

@property (class, nonatomic) BOOL shouldRetryFailures;

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSArray *featureNames;

- (id)featureVectorsWithEntities:(id)a0 entityLabels:(id)a1 progressReporter:(id)a2 error:(id *)a3;
- (id)defaultFloatVectorWithError:(id *)a0;
- (id)featureVectorWithEntity:(id)a0 error:(id *)a1;
- (id)floatMatrixWithEntities:(id)a0 progressReporter:(id)a1 error:(id *)a2;
- (id)floatVectorWithEntity:(id)a0 error:(id *)a1;
- (id)floatVectorWithRetryForEntity:(id)a0 error:(id *)a1;

@end
