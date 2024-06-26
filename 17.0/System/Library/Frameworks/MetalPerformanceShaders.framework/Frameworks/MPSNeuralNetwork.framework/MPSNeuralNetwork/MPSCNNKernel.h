@class MPSExternalCNNUnary;
@protocol MPSNNPadding, MPSImageAllocator;

@interface MPSCNNKernel : MPSKernel {
    MPSExternalCNNUnary *_plugin;
    BOOL _pluginSupportsBatchEncode;
    unsigned long long _maxBatchSize;
    int _checkFlags;
    void /* function */ *_encode;
    void /* function */ *_batchEncode;
    void *_encodeData;
    unsigned long long _pluginOptions;
}

@property (nonatomic) struct { long long x; long long y; long long z; } offset;
@property (nonatomic) struct { struct { unsigned long long x; unsigned long long y; unsigned long long z; } origin; struct { unsigned long long width; unsigned long long height; unsigned long long depth; } size; } clipRect;
@property (nonatomic) unsigned long long destinationFeatureChannelOffset;
@property (nonatomic) unsigned long long sourceFeatureChannelOffset;
@property (nonatomic) unsigned long long sourceFeatureChannelMaxCount;
@property (nonatomic) unsigned long long edgeMode;
@property (readonly, nonatomic) unsigned long long kernelWidth;
@property (readonly, nonatomic) unsigned long long kernelHeight;
@property (readonly, nonatomic) unsigned long long strideInPixelsX;
@property (readonly, nonatomic) unsigned long long strideInPixelsY;
@property (readonly, nonatomic) unsigned long long dilationRateX;
@property (readonly, nonatomic) unsigned long long dilationRateY;
@property (readonly, nonatomic) BOOL isBackwards;
@property (readonly, nonatomic) BOOL isStateModified;
@property (retain, nonatomic) id<MPSNNPadding> padding;
@property (retain, nonatomic) id<MPSImageAllocator> destinationImageAllocator;

- (BOOL)isResultStateReusedAcrossBatch;
- (unsigned long long)maxBatchSize;
- (id)resultStateBatchForSourceImage:(id)a0 sourceStates:(id)a1 destinationImage:(id)a2;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0 device:(id)a1;
- (id)initWithCoder:(id)a0 device:(id)a1;
- (void)dealloc;
- (id)encodeBatchToCommandBuffer:(id)a0 sourceImages:(id)a1 destinationStates:(id *)a2 destinationStateIsTemporary:(BOOL)a3;
- (struct MPSRegion { struct MPSOrigin { double x0; double x1; double x2; } x0; struct MPSSize { double x0; double x1; double x2; } x1; })sourceRegionForDestinationSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0;
- (id)temporaryResultStateForCommandBuffer:(id)a0 sourceImage:(id)a1 sourceStates:(id)a2 destinationImage:(id)a3;
- (void)encodeToCommandBuffer:(id)a0 sourceImage:(id)a1 destinationState:(id)a2 destinationImage:(id)a3;
- (BOOL)pluginSupportsBatchEncode;
- (id)destinationImageDescriptorForSourceImages:(id)a0 sourceStates:(id)a1 paddingMethod:(unsigned long long)a2 sourceOffset:(struct { long long x0; long long x1; long long x2; } *)a3 kernelOffset:(struct { long long x0; long long x1; long long x2; } *)a4;
- (void)encodeWithCoder:(id)a0;
- (id)temporaryResultStateBatchForCommandBuffer:(id)a0 sourceImage:(id)a1 sourceStates:(id)a2 destinationImage:(id)a3;
- (id)encodeToCommandBuffer:(id)a0 sourceImage:(id)a1 destinationState:(id *)a2 destinationStateIsTemporary:(BOOL)a3;
- (id)resultStateForSourceImage:(id)a0 sourceStates:(id)a1 destinationImage:(id)a2;
- (unsigned long long)batchEncodingStorageSizeForSourceImage:(id)a0 sourceStates:(id)a1 destinationImage:(id)a2;
- (id)initWithDevice:(id)a0;
- (id)destinationImageDescriptorForSourceImages:(id)a0 sourceStates:(id)a1 paddingMethod:(unsigned long long)a2 sourceOffset:(struct { long long x0; long long x1; long long x2; } *)a3;
- (id)debugDescription;
- (BOOL)appendBatchBarrier;
- (void)encodeBatchToCommandBuffer:(id)a0 sourceImages:(id)a1 destinationStates:(id)a2 destinationImages:(id)a3;
- (unsigned long long)encodingStorageSizeForSourceImage:(id)a0 sourceStates:(id)a1 destinationImage:(id)a2;
- (void)copyToGradientState:(id)a0 sourceImage:(id)a1 sourceStates:(id)a2 destinationImage:(id)a3;
- (id)plugin;
- (BOOL)setPlugin:(id)a0;
- (void)encodeBatchToCommandBuffer:(id)a0 sourceImages:(id)a1 destinationImages:(id)a2;
- (void)encodeToCommandBuffer:(id)a0 sourceImage:(id)a1 destinationImage:(id)a2;
- (id)encodeBatchToCommandBuffer:(id)a0 sourceImages:(id)a1;
- (void)encodeToCommandEncoder:(id)a0 commandBuffer:(id)a1 sourceImage:(id)a2 destinationImage:(id)a3;
- (id)destinationImageDescriptorForSourceImages:(id)a0 sourceStates:(id)a1;
- (id)destinationImageWithCommandBuffer:(id)a0 sourceImage:(id)a1 inState:(id)a2;
- (id)encodeBatchToCommandBuffer:(id)a0 sourceImages:(id)a1 inStates:(id)a2;
- (void)encodeBatchToCommandBuffer:(id)a0 sourceImages:(id)a1 inStates:(id)a2 destinationImages:(id)a3;
- (id)encodeBatchToCommandBuffer:(id)a0 sourceImages:(id)a1 sourceStates:(id)a2 destinationStates:(id *)a3 destinationStateIsTemporary:(BOOL)a4;
- (id)encodeBatchToCommandEncoder:(id)a0 commandBuffer:(id)a1 sourceImages:(id)a2;
- (void)encodeBatchToCommandEncoder:(id)a0 commandBuffer:(id)a1 sourceImages:(id)a2 destinationImages:(id)a3;
- (void)encodeBatchToCommandEncoder:(id)a0 commandBuffer:(id)a1 sourceImages:(id)a2 destinationStates:(id)a3 destinationImages:(id)a4;
- (id)encodeBatchToCommandEncoder:(id)a0 commandBuffer:(id)a1 sourceImages:(id)a2 destinationStates:(id *)a3 destinationStateIsTemporary:(BOOL)a4;
- (id)encodeBatchToCommandEncoder:(id)a0 commandBuffer:(id)a1 sourceImages:(id)a2 inStates:(id)a3;
- (void)encodeBatchToCommandEncoder:(id)a0 commandBuffer:(id)a1 sourceImages:(id)a2 inStates:(id)a3 destinationImages:(id)a4;
- (id)encodeBatchToCommandEncoder:(id)a0 commandBuffer:(id)a1 sourceImages:(id)a2 sourceStates:(id)a3 destinationStates:(id *)a4 destinationStateIsTemporary:(BOOL)a5;
- (void)encodeInternalBatchToCommandEncoder:(id)a0 commandBuffer:(id)a1 sourceImages:(id)a2 inStates:(id)a3 destinationImages:(id)a4 clipRect:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a5;
- (void)encodeInternalToCommputeEncoder:(id)a0 commandBuffer:(id)a1 sourceImage:(id)a2 inState:(id)a3 destinationImage:(id)a4 subBatchIndex:(unsigned long long)a5 batchSize:(unsigned long long)a6 clipRect:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a7 shouldHandleCompoundImageNatively:(BOOL)a8;
- (id)encodeToCommandBuffer:(id)a0 sourceImage:(id)a1;
- (id)encodeToCommandBuffer:(id)a0 sourceImage:(id)a1 inState:(id)a2;
- (void)encodeToCommandBuffer:(id)a0 sourceImage:(id)a1 inState:(id)a2 destinationImage:(id)a3;
- (void)encodeToCommandBuffer:(id)a0 sourceImage:(id)a1 inState:(id)a2 destinationImage:(id)a3 subBatchIndex:(unsigned long long)a4 batchSize:(unsigned long long)a5;
- (id)encodeToCommandBuffer:(id)a0 sourceImage:(id)a1 sourceState:(id)a2 destinationState:(id *)a3 destinationStateIsTemporary:(BOOL)a4;
- (id)encodeToCommandEncoder:(id)a0 commandBuffer:(id)a1 sourceImage:(id)a2;
- (void)encodeToCommandEncoder:(id)a0 commandBuffer:(id)a1 sourceImage:(id)a2 destinationState:(id)a3 destinationImage:(id)a4;
- (id)encodeToCommandEncoder:(id)a0 commandBuffer:(id)a1 sourceImage:(id)a2 destinationState:(id *)a3 destinationStateIsTemporary:(BOOL)a4;
- (id)encodeToCommandEncoder:(id)a0 commandBuffer:(id)a1 sourceImage:(id)a2 inState:(id)a3;
- (void)encodeToCommandEncoder:(id)a0 commandBuffer:(id)a1 sourceImage:(id)a2 inState:(id)a3 destinationImage:(id)a4;
- (void)encodeToCommandEncoder:(id)a0 commandBuffer:(id)a1 sourceImage:(id)a2 inState:(id)a3 destinationImage:(id)a4 subBatchIndex:(unsigned long long)a5 batchSize:(unsigned long long)a6;
- (id)encodeToCommandEncoder:(id)a0 commandBuffer:(id)a1 sourceImage:(id)a2 sourceState:(id)a3 destinationState:(id *)a4 destinationStateIsTemporary:(BOOL)a5;
- (BOOL)filterHandlesPlugin;
- (void /* unknown type, empty encoding */)sourcePositionOfTopLeftCornerOfFilterWindow;

@end
