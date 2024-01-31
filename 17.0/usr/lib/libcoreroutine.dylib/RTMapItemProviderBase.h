@class RTMapItemProviderBaseParameters, RTDistanceCalculator;

@interface RTMapItemProviderBase : NSObject

@property (readonly, nonatomic) RTMapItemProviderBaseParameters *baseParameters;
@property (readonly, nonatomic) RTDistanceCalculator *distanceCalculator;

- (id)init;
- (void).cxx_destruct;
- (id)filter:(id)a0 byDistance:(double)a1 fromLocation:(id)a2 andAppendSource:(unsigned long long)a3 error:(id *)a4;
- (id)filter:(id)a0 byDistance:(double)a1 fromLocation:(id)a2 error:(id *)a3;
- (id)filterInferredMapItems:(id)a0 byDistance:(double)a1 fromLocation:(id)a2 andAppendSource:(unsigned long long)a3 error:(id *)a4;
- (id)filterInferredMapItems:(id)a0 byDistance:(double)a1 fromLocation:(id)a2 error:(id *)a3;
- (id)initWithDefaultsManager:(id)a0 distanceCalculator:(id)a1;
- (id)initWithDistanceCalculator:(id)a0 parameters:(id)a1;
- (BOOL)mapItemCloseEnough:(id)a0 referenceLocation:(id)a1 distanceThreshold:(double)a2 error:(id *)a3;

@end
