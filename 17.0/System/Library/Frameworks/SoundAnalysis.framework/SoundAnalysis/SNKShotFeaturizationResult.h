@class NSArray, MLMultiArray;

@interface SNKShotFeaturizationResult : NSObject {
    void /* unknown type, empty encoding */ impl;
}

@property (nonatomic, copy) NSArray *trainingDataEmbeddings;
@property (nonatomic, copy) NSArray *trainingDataLabels;
@property (nonatomic, copy) NSArray *validationDataEmbeddings;
@property (nonatomic, copy) NSArray *validationDataLabels;
@property (nonatomic, retain) MLMultiArray *exemplar;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } inferenceWindowSize;

- (id)init;
- (void).cxx_destruct;

@end
