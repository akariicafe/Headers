@class MLMultiArray;

@interface SNKShotFeaturizationStreamCompletion : NSObject {
    void /* unknown type, empty encoding */ impl;
}

@property (nonatomic, retain) MLMultiArray *exemplar;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } inferenceWindowSize;

- (id)init;
- (void).cxx_destruct;

@end
