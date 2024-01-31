@class MLParameterContainer;
@protocol MLNearestNeighborsIndex;

@interface MLLocalOutlierFactor : MLModel {
    id<MLNearestNeighborsIndex> _index;
    unsigned long long _numberOfDimensions;
    unsigned long long _numberOfNeighbors;
    struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; struct __compressed_pair<float *, std::allocator<float>> { float *__value_; } __end_cap_; } _cachedKDistances;
    MLParameterContainer *_parameterContainer;
}

- (id)parameterValueForKey:(id)a0 error:(id *)a1;
- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (double)computeLOFForQueryPoint:(id)a0;
- (struct vector<std::pair<unsigned long, float>, std::allocator<std::pair<unsigned long, float>>> { void *x0; void *x1; struct __compressed_pair<std::pair<unsigned long, float> *, std::allocator<std::pair<unsigned long, float>>> { void *x0; } x2; })findNearestNeighborsToIndex:(unsigned long long)a0;
- (struct vector<std::pair<unsigned long, float>, std::allocator<std::pair<unsigned long, float>>> { void *x0; void *x1; struct __compressed_pair<std::pair<unsigned long, float> *, std::allocator<std::pair<unsigned long, float>>> { void *x0; } x2; })findNearestNeighborsToQueryPoint:(const void *)a0;
- (id)initWithKNearestNeighborsModelAtURL:(id)a0 configuration:(id)a1 error:(id *)a2;
- (id)inputMultiArray:(id)a0 error:(id *)a1;
- (float)kDistanceToIndex:(unsigned long long)a0;
- (double)localReachabilityDensityForIndex:(unsigned long long)a0;
- (double)localReachabilityDensityForQeuryPoint:(const void *)a0;
- (double)localReachabilityDensityOfNeighbors:(const void *)a0;
- (void)updateToValidDistance:(void *)a0;

@end
