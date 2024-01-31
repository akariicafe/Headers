@interface _MLCGPUInstanceNormalization : _MLCGPULayer

+ (id)layerWithDevice:(id)a0 fusedWithNeuronDescriptor:(id)a1 numOfFeatureChannels:(unsigned long long)a2 mean:(id)a3 variance:(id)a4 beta:(id)a5 gamma:(id)a6 varianceEpsilon:(float)a7 momentum:(float)a8;
+ (id)layerWithDevice:(id)a0 numOfFeatureChannels:(unsigned long long)a1 mean:(id)a2 variance:(id)a3 beta:(id)a4 gamma:(id)a5 varianceEpsilon:(float)a6 momentum:(float)a7;

- (id)initWithDevice:(id)a0 fusedWithNeuronDescriptor:(id)a1 numOfFeatureChannels:(unsigned long long)a2 mean:(id)a3 variance:(id)a4 beta:(id)a5 gamma:(id)a6 varianceEpsilon:(float)a7 momentum:(float)a8;

@end
