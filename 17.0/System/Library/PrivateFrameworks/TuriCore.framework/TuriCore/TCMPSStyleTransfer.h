@class TCMPSStyleTransferTransformerNetwork, TCMPSStyleTransferPreProcessing, TCMPSVgg16Network, MPSNNImageNode, MPSNNGraph;
@protocol MTLCommandQueue, MTLDevice;

@interface TCMPSStyleTransfer : NSObject

@property (retain, nonatomic) TCMPSStyleTransferTransformerNetwork *model;
@property (retain, nonatomic) TCMPSStyleTransferPreProcessing *contentPreProcess;
@property (retain, nonatomic) TCMPSStyleTransferPreProcessing *stylePreProcessLoss;
@property (retain, nonatomic) TCMPSStyleTransferPreProcessing *contentPreProcessLoss;
@property (retain, nonatomic) TCMPSVgg16Network *contentVgg;
@property (retain, nonatomic) TCMPSVgg16Network *styleVggLoss;
@property (retain, nonatomic) TCMPSVgg16Network *contentVggLoss;
@property (retain, nonatomic) MPSNNImageNode *contentNode;
@property (retain, nonatomic) MPSNNImageNode *contentScaleNode;
@property (retain, nonatomic) MPSNNImageNode *contenMeanNode;
@property (retain, nonatomic) MPSNNImageNode *styleNode;
@property (retain, nonatomic) MPSNNImageNode *styleScaleNode;
@property (retain, nonatomic) MPSNNImageNode *styleMeanNode;
@property (retain, nonatomic) MPSNNGraph *trainingGraph;
@property (retain, nonatomic) MPSNNGraph *inferenceGraph;
@property (retain, nonatomic) id<MTLDevice> dev;
@property (retain, nonatomic) id<MTLCommandQueue> commandQueue;
@property (nonatomic) unsigned long long batchSize;
@property (nonatomic) float contentLossMultiplier;
@property (nonatomic) float styleLossMultiplier;
@property (nonatomic) float totalLossMultiplier;
@property (nonatomic) BOOL updateAllParams;
@property (nonatomic) unsigned long long imgWidth;
@property (nonatomic) unsigned long long imgHeight;

+ (id)defineTransformerDescriptor:(unsigned long long)a0 tuneAllWeights:(BOOL)a1;
+ (id)defineVGG16Descriptor:(unsigned long long)a0;
+ (void)populateMean:(id)a0;
+ (void)populateMeanCWH:(id)a0 height:(unsigned long long)a1 width:(unsigned long long)a2;
+ (void)populateMultiplication:(id)a0;
+ (void)populateVarianceCWH:(id)a0 height:(unsigned long long)a1 width:(unsigned long long)a2;
+ (id)topLeftCropImage:(id)a0 inputHeight:(unsigned long long)a1 inputWidth:(unsigned long long)a2 outputHeight:(unsigned long long)a3 outputWidth:(unsigned long long)a4 numChannels:(unsigned long long)a5;

- (void)checkpoint;
- (void).cxx_destruct;
- (id)predict:(id)a0;
- (void)setLearningRate:(float)a0;
- (id)train:(id)a0;
- (id)exportWeights;
- (id)initWithDev:(id)a0 commandQueue:(id)a1 weights:(id)a2 numStyles:(unsigned long long)a3;

@end
