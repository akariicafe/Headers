@class NSArray;

@interface MLCNormalizationGPUDeviceOps : MLCGPUDeviceOps

@property (retain, nonatomic) NSArray *normalizedShape;
@property (nonatomic) float varianceEpsilon;
@property (nonatomic) float momentum;
@property (nonatomic) unsigned long long groupCount;
@property (retain, nonatomic) id normalizationGammaGradient;
@property (retain, nonatomic) id normalizationBetaGradient;
@property (retain, nonatomic) id normalizationInverseSqrtVariance;
@property (retain, nonatomic) id normalizationInputNormalized;
@property (retain, nonatomic) id normalizationComputedMean;
@property (retain, nonatomic) id normalizationComputedVariance;
@property (retain, nonatomic) id batchNormMeanKernel;
@property (retain, nonatomic) id batchNormVarianceKernel;
@property (retain, nonatomic) id batchNormBetaGammaDeltaKernel;
@property (retain, nonatomic) id instanceNormMovingMeanVarianceKernel;
@property (retain, nonatomic) id normalizationRecomputeResultKernel;
@property (retain, nonatomic) id normalizationSumBetaGammaDeltaKernel;
@property (retain, nonatomic) id normalizationMultiGPUChildOps;
@property (nonatomic) BOOL isFusedWithArithmeticLayer;

+ (id)deviceOpsWithForwardKernel:(id)a0 gradientKernel:(id)a1;

- (void).cxx_destruct;
- (id)initWithForwardKernel:(id)a0 gradientKernel:(id)a1;

@end
