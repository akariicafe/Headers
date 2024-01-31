@class MPSKernelDAGObject;
@protocol MPSNDArrayAllocator;

@interface MPSNDArrayMultiaryBase : MPSKernel {
    unsigned long long _srcCount;
    void *_encodeData;
    void /* function */ *_encodeGradient;
    MPSKernelDAGObject *_defaultKernelDAG;
    MPSKernelDAGObject *_defaultGradientDAG;
}

@property (retain, nonatomic) id<MPSNDArrayAllocator> destinationArrayAllocator;

+ (unsigned long long)expectedVirtualSourceCount;

- (id)copyWithZone:(struct _NSZone { } *)a0 device:(id)a1;
- (id)initWithCoder:(id)a0 device:(id)a1;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)destinationArrayDescriptorForSourceArrays:(id)a0 sourceState:(id)a1;
- (id)initWithDevice:(id)a0 sourceCount:(unsigned long long)a1;
- (id)resultStateForSourceArrays:(id)a0 sourceStates:(id)a1 destinationArray:(id)a2;
- (void)copyToGradientState:(id)a0 sourceArrays:(id)a1 sourceStates:(id)a2 destinationArray:(id)a3;
- (void /* unknown type, empty encoding */)destinationStrides;
- (struct { unsigned long long x0[16]; })dilationRatesForSourceIndex:(unsigned long long)a0;
- (void /* unknown type, empty encoding */)dimensionsNotToBeBroadcast;
- (void /* unknown type, empty encoding */)dimensionsToBeRetained;
- (unsigned long long)edgeModeAtSourceIndex:(unsigned long long)a0;
- (void)kernelDAGObjectSetup:(id *)a0 sourceArrays:(id)a1 sourceGradient:(id)a2 destination:(id)a3;
- (unsigned long long)kernelDimensionalityForSourceArrays:(id)a0;
- (unsigned long long)kernelDimensionalityForSourceArrays:(id)a0 destinationArrays:(id)a1 kernelDAGObject:(id)a2;
- (struct { unsigned long long x0[16]; })kernelSizesForSourceIndex:(unsigned long long)a0;
- (unsigned long long)maxSupportedDimensionsForSourceArrays:(id)a0 destinationArray:(id)a1;
- (struct { long long x0[16]; })offsetsAtSourceIndex:(unsigned long long)a0;
- (id)reshapeFitToTileToCommandBuffer:(SEL)a0 currentSource:(id)a1 kernelDimension:(id)a2 dimensionsToBeRetained:(unsigned long long)a3;
- (void)setIndexingArithmaticTypeMask:(id *)a0 sourceArrays:(id)a1 sourceGradient:(id)a2 destination:(id)a3 tileDimensions:(unsigned long long)a4;
- (void /* unknown type, empty encoding */)stridesAtSourceIndex:(unsigned long long)a0;
- (struct { long long x0[16]; })stridesForSourceIndex:(unsigned long long)a0;
- (id)temporaryResultStateForCommandBuffer:(id)a0 sourceArrays:(id)a1 sourceStates:(id)a2 destinationArray:(id)a3;
- (id)workloadStatisticsForSourceArrays:(id)a0 destArrays:(id)a1 kernel:(id)a2 kernelDAGObject:(id)a3 sourceState:(id)a4;
- (id)workloadStatisticsForSourceArrays:(id)a0 destArrays:(id)a1 sourceState:(id)a2;
- (id)workloadStatisticsForSourceArrays:(id)a0 sourceState:(id)a1;

@end
