@class NSArray;

@interface ATXCandidateRelevanceModelFeaturizationManager : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *featurizers;

+ (id)denseLabelVectorFromDataPoints:(id)a0;
+ (id)labelsFromDataPoints:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)featureNames;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)featuresForContext:(id)a0 candidate:(id)a1;
- (id)initWithFeaturizers:(id)a0;
- (id)initWithImmutableFeaturizers:(id)a0;
- (BOOL)isEqualToATXCandidateRelevanceModelFeaturizationManager:(id)a0;
- (unsigned long long)numberOfInputDimensions;
- (id)sparseFeatureMatrixFromDataPoints:(id)a0;
- (id)sparseFeatureVectorForContext:(id)a0 candidate:(id)a1;

@end
