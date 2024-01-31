@class NSArray, NSDictionary, NSData;

@interface MTLComputePipelineReflectionInternal : MTLComputePipelineReflection {
    NSArray *_arguments;
    NSArray *_builtInArguments;
    NSDictionary *_performanceStatistics;
    struct { unsigned char kernelRegisterSpill : 1; unsigned char threadgroupBarrier : 1; unsigned char deviceMemoryAtomics : 1; unsigned char threadgroupMemoryAtomics : 1; unsigned char kernelThreadInvariantRegisterSpill : 1; unsigned long reserved : 59; } _flags;
    unsigned int _traceBufferIndex;
    NSData *_pluginReturnData;
    NSArray *_constantSamplerUniqueIdentifiers;
    NSArray *_constantSamplerDescriptors;
    NSArray *_bindings;
}

- (id)formattedDescription:(unsigned long long)a0;
- (id)arguments;
- (void)dealloc;
- (id)pluginReturnData;
- (id)builtInArguments;
- (id)bindings;
- (id)description;
- (struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned long x5 : 59; })usageFlags;
- (id)performanceStatistics;
- (id)constantSamplerDescriptors;
- (id)constantSamplerUniqueIdentifiers;
- (id)initWithSerializedData:(id)a0 device:(id)a1 options:(unsigned long long)a2 flags:(struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned long x5 : 59; })a3;
- (id)initWithSerializedData:(id)a0 serializedStageInputDescriptor:(id)a1 device:(id)a2 options:(unsigned long long)a3 flags:(struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned long x5 : 59; })a4;
- (void)setConstantSamplerDescriptorsFromBitmasks:(unsigned long long *)a0 count:(unsigned long long)a1;
- (void)setConstantSamplerDescriptorsFromBitmasks:(unsigned long long *)a0 stride:(unsigned int)a1 count:(unsigned long long)a2;
- (void)setConstantSamplerUniqueIdentifiers:(id)a0;
- (void)setPerformanceStatistics:(id)a0;
- (unsigned int)traceBufferIndex;

@end
