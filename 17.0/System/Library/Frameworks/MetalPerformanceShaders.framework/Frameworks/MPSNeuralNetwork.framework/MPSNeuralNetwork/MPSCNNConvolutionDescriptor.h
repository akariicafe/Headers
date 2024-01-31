@class MPSCNNNeuron, NSData, MPSNNNeuronDescriptor;

@interface MPSCNNConvolutionDescriptor : NSObject <NSSecureCoding, NSCopying> {
    NSData *_batchNormalizationData;
    MPSCNNNeuron *_deprecated_neuron;
    unsigned long long _subPixelScaleFactor;
    BOOL _depthWiseConvolution;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long featureChannelsLayout;
@property (nonatomic) unsigned long long kernelWidth;
@property (nonatomic) unsigned long long kernelHeight;
@property (nonatomic) unsigned long long inputFeatureChannels;
@property (nonatomic) unsigned long long outputFeatureChannels;
@property (nonatomic) unsigned long long strideInPixelsX;
@property (nonatomic) unsigned long long strideInPixelsY;
@property (nonatomic) unsigned long long groups;
@property (nonatomic) unsigned long long dilationRateX;
@property (nonatomic) unsigned long long dilationRateY;
@property (retain, nonatomic) MPSNNNeuronDescriptor *fusedNeuronDescriptor;
@property (retain, nonatomic) MPSCNNNeuron *neuron;

+ (id)cnnConvolutionDescriptorWithKernelWidth:(unsigned long long)a0 kernelHeight:(unsigned long long)a1 inputFeatureChannels:(unsigned long long)a2 outputFeatureChannels:(unsigned long long)a3;
+ (id)cnnConvolutionDescriptorWithKernelWidth:(unsigned long long)a0 kernelHeight:(unsigned long long)a1 inputFeatureChannels:(unsigned long long)a2 outputFeatureChannels:(unsigned long long)a3 neuronFilter:(id)a4;
+ (id)cnnConvolutionDescriptorWithKernelWidth:(unsigned long long)a0 kernelHeight:(unsigned long long)a1 inputFeatureChannels:(unsigned long long)a2 outputFeatureChannels:(unsigned long long)a3 postFilters:(id)a4;

- (id)init;
- (void)setNeuronParameterC:(float)a0;
- (void)dealloc;
- (void)setNeuronType:(int)a0;
- (void)encodeWithCoder:(id)a0;
- (void)setNeuronParameterA:(float)a0;
- (float)neuronParameterC;
- (void)setBatchNormalizationParametersForInferenceWithMean:(const float *)a0 variance:(const float *)a1 gamma:(const float *)a2 beta:(const float *)a3 epsilon:(float)a4;
- (struct NeuronInfo { int x0; float x1; float x2; float x3; id x4; })neuronInfo;
- (float)neuronParameterB;
- (void)setNeuronType:(int)a0 parameterA:(float)a1 parameterB:(float)a2 parameterC:(float)a3;
- (BOOL)hasBatchNormData;
- (void)setNeuronToPReLUWithParametersA:(id)a0;
- (id)debugDescription;
- (id)initWithKernelWidth:(unsigned long long)a0 kernelHeight:(unsigned long long)a1 inputFeatureChannels:(unsigned long long)a2 outputFeatureChannels:(unsigned long long)a3 neuronFilter:(id)a4;
- (id)newDescriptorWithNeuronInfo:(struct NeuronInfo { int x0; float x1; float x2; float x3; id x4; })a0;
- (void)setNeuronParameterB:(float)a0;
- (int)neuronType;
- (void)setNeuronType:(int)a0 parameterA:(float)a1 parameterB:(float)a2;
- (id)initWithCoder:(id)a0;
- (float)neuronParameterA;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithKernelWidth:(unsigned long long)a0 kernelHeight:(unsigned long long)a1 inputFeatureChannels:(unsigned long long)a2 outputFeatureChannels:(unsigned long long)a3;

@end
