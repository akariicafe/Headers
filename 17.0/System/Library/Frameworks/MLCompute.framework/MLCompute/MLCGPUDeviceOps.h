@class MLCActivationDescriptor, NSArray, _MLCGPULayer, NSMutableArray;

@interface MLCGPUDeviceOps : MLCDeviceOps

@property (retain, nonatomic) _MLCGPULayer *layer;
@property (nonatomic) BOOL isMPSKernel;
@property (nonatomic) BOOL isMPSGraph;
@property (nonatomic) int metalKernelType;
@property (readonly, retain, nonatomic) id forwardKernel;
@property (readonly, retain, nonatomic) id gradientKernel;
@property (readonly, retain, nonatomic) id secondaryGradientKernel;
@property (retain, nonatomic) id lossInitialGradientKernel;
@property (retain, nonatomic) id combinedForwardAndGradientLossKernel;
@property (retain, nonatomic) id reduceLossKernel;
@property (retain, nonatomic) id gradientState;
@property (retain, nonatomic) id forwardStatisticsKernel;
@property (retain, nonatomic) id gradientStatisticsKernel;
@property (retain, nonatomic) NSArray *momentumVectors;
@property (retain, nonatomic) NSArray *velocityVectors;
@property (retain, nonatomic) NSArray *centerWeightVectors;
@property (retain, nonatomic) id exportableState;
@property (retain, nonatomic) id movingState;
@property (nonatomic) BOOL computeWeightsAndBiasOnly;
@property (nonatomic) unsigned long long totalElementsPerChannel;
@property (nonatomic) unsigned long long paddingLeft;
@property (nonatomic) unsigned long long paddingRight;
@property (nonatomic) unsigned long long paddingTop;
@property (nonatomic) unsigned long long paddingBottom;
@property (nonatomic) BOOL countIncludesPadding;
@property (nonatomic) unsigned long long kernelSizeInX;
@property (nonatomic) unsigned long long kernelSizeInY;
@property (nonatomic) unsigned long long strideInX;
@property (nonatomic) unsigned long long strideInY;
@property (nonatomic) unsigned long long dilationRateInX;
@property (nonatomic) unsigned long long dilationRateInY;
@property (nonatomic) int weightsDataType;
@property (nonatomic) int biasesDataType;
@property (retain, nonatomic) id poolingIndicesBuffer;
@property (nonatomic) BOOL useSourceGradientDeviceMemoryForResultGradientTensor;
@property (nonatomic) BOOL useSourceGradientDeviceMemoryForSecondaryResultGradientTensor;
@property (retain, nonatomic) MLCActivationDescriptor *neuronDescriptor;
@property (nonatomic) int arithmeticOp;
@property (copy, nonatomic) NSArray *source0Shape;
@property (copy, nonatomic) NSArray *source1Shape;
@property (copy, nonatomic) NSArray *source2Shape;
@property (nonatomic) int constantArithmeticSourcesFlags;
@property (retain, nonatomic) NSMutableArray *transposeShape;
@property (retain, nonatomic) NSMutableArray *transposeGradientShape;
@property (copy, nonatomic) NSArray *begin;
@property (copy, nonatomic) NSArray *stride;
@property (copy, nonatomic) NSArray *end;
@property (nonatomic) unsigned long long softmaxAxis;
@property (nonatomic) unsigned long long scatterGatherDimension;
@property (nonatomic) int scatterReduceType;
@property (nonatomic) float gramMatrixScale;
@property (nonatomic) BOOL recomputeResultTensor;
@property (nonatomic) unsigned long long temporaryHeapIndex;

+ (id)deviceOps;
+ (id)deviceOpsWithForwardKernel:(id)a0;
+ (id)deviceOpsWithForwardKernel:(id)a0 gradientKernel:(id)a1;
+ (id)deviceOpsWithForwardKernel:(id)a0 gradientKernel:(id)a1 secondaryGradientKernel:(id)a2;
+ (id)deviceOpsWithForwardKernel:(id)a0 gradientKernel:(id)a1 secondaryGradientKernel:(id)a2 forwardStatistics:(id)a3 gradientStatistics:(id)a4;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithForwardKernel:(id)a0 gradientKernel:(id)a1;
- (id)initWithForwardKernel:(id)a0 gradientKernel:(id)a1 secondaryGradientKernel:(id)a2 forwardStatistics:(id)a3 gradientStatistics:(id)a4;

@end
