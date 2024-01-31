@class NSArray, MLCTensor, NSDictionary;

@interface TCMLComputeStyleTransferDescriptor : NSObject

@property (retain, nonatomic) MLCTensor *contentTensor;
@property (retain, nonatomic) MLCTensor *inferenceContentTensor;
@property (retain, nonatomic) MLCTensor *inferencePixelScaleTensor;
@property (retain, nonatomic) MLCTensor *styleTensor;
@property (retain, nonatomic) MLCTensor *pixelScaleTensor;
@property (retain, nonatomic) MLCTensor *meanTensor;
@property (retain, nonatomic) MLCTensor *varianceTensor;
@property (retain, nonatomic) MLCTensor *styleLossWeightTensor;
@property (retain, nonatomic) NSArray *styleStrength;
@property (retain, nonatomic) NSArray *contentStrength;
@property (retain, nonatomic) NSDictionary *weights;
@property (retain, nonatomic) NSDictionary *descriptors;

+ (void)convolutionLayerDescriptor:(id)a0 normPrefix:(id)a1 descriptorDictionary:(id *)a2 kernelSize:(unsigned long long)a3 strideSize:(unsigned long long)a4 inputChannels:(unsigned long long)a5 outputChannels:(unsigned long long)a6 upsampleType:(int)a7;
+ (id)defineVGG16Block1Descriptor:(id)a0 inputChannels:(unsigned long long)a1 outputChannels:(unsigned long long)a2;
+ (id)defineVGG16Block2Descriptor:(id)a0 inputChannels:(unsigned long long)a1 outputChannels:(unsigned long long)a2;
+ (id)defineVGG16Descriptor:(id)a0;
+ (void)residualDescriptor:(id)a0 normPrefix:(id)a1 inputChannels:(unsigned long long)a2 outputChannels:(unsigned long long)a3 descriptorDictionary:(id *)a4;
+ (id)styleNetDescriptor:(id)a0 algorithmType:(int)a1;

- (BOOL)isComplete;
- (void).cxx_destruct;
- (id)initTrain:(BOOL)a0 algorithmType:(int)a1;

@end
