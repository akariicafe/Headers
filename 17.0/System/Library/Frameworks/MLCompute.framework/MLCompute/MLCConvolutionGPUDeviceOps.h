@class NSMutableArray;

@interface MLCConvolutionGPUDeviceOps : MLCGPUDeviceOps

@property (retain, nonatomic) id forwardMPSGraph;
@property (retain, nonatomic) id gradientMPSGraph;
@property (nonatomic) BOOL depthWiseConvolution;
@property (nonatomic) BOOL convolutionTranspose;
@property (nonatomic) BOOL hasBias;
@property (nonatomic) unsigned long long biasChannelCount;
@property (retain, nonatomic) NSMutableArray *descriptorsForMPSGraph;
@property (retain, nonatomic) NSMutableArray *mpsGraphTensors;
@property (retain, nonatomic) id transposeDeviceOps;
@property (retain, nonatomic) NSMutableArray *transposedTensors;
@property (retain, nonatomic) id convolutionMultiGPUChildOps;

+ (id)deviceOpsWithForwardMPSGraph:(id)a0 gradientMPSGraph:(id)a1;

- (void).cxx_destruct;
- (id)initWithForwardMPSGraph:(id)a0 gradientMPSGraph:(id)a1;

@end
