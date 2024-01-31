@protocol MTLBuffer;

@interface MPSCNNConvolutionWeightsAndBiasesState : MPSState {
    unsigned long long _numberOfWeights;
    unsigned long long _numberOfBiases;
    unsigned int _weightsDataType;
    unsigned int _weightsLayout;
    unsigned long long _weightsOffset;
    unsigned long long _biasesOffset;
}

@property (readonly, nonatomic) unsigned long long numberOfWeights;
@property (readonly, nonatomic) unsigned long long numberOfBiases;
@property (readonly, nonatomic) unsigned int weightsDataType;
@property (readonly, nonatomic) unsigned int weightsLayout;
@property (readonly, nonatomic) id<MTLBuffer> weights;
@property (readonly, nonatomic) id<MTLBuffer> biases;
@property (readonly, nonatomic) unsigned long long weightsOffset;
@property (readonly, nonatomic) unsigned long long biasesOffset;

+ (id)temporaryCNNConvolutionWeightsAndBiasesStateWithCommandBuffer:(id)a0 cnnConvolutionDescriptor:(id)a1;
+ (id)temporaryCNNConvolutionWeightsAndBiasesStateWithCommandBuffer:(id)a0 cnnConvolutionDescriptor:(id)a1 weightsDataType:(unsigned int)a2;
+ (id)temporaryCNNConvolutionWeightsAndBiasesStateWithCommandBuffer:(id)a0 cnnConvolutionDescriptor:(id)a1 weightsDataType:(unsigned int)a2 weightsLayout:(unsigned int)a3;

- (id)initWithWeights:(id)a0 biases:(id)a1;
- (id)initWithWeights:(id)a0 biases:(id)a1 weightsDataType:(unsigned int)a2 weightsLayout:(unsigned int)a3;
- (id)initWithDevice:(id)a0 cnnConvolutionDescriptor:(id)a1;
- (id)initWithDevice:(id)a0 cnnConvolutionDescriptor:(id)a1 weightsDataType:(unsigned int)a2;
- (id)initWithDevice:(id)a0 cnnConvolutionDescriptor:(id)a1 weightsDataType:(unsigned int)a2 weightsLayout:(unsigned int)a3;
- (id)initWithWeights:(id)a0 biases:(id)a1 weightsDataType:(unsigned int)a2;
- (id)initWithWeights:(id)a0 weightsOffset:(unsigned long long)a1 biases:(id)a2 biasesOffset:(unsigned long long)a3 cnnConvolutionDescriptor:(id)a4;
- (id)initWithWeights:(id)a0 weightsOffset:(unsigned long long)a1 weightsDataType:(unsigned int)a2 weightsLayout:(unsigned int)a3 biases:(id)a4 biasesOffset:(unsigned long long)a5 cnnConvolutionDescriptor:(id)a6;
- (void)initializeWithWeightsCount:(unsigned long long)a0 weightsOffset:(unsigned long long)a1 weightsDataType:(unsigned int)a2 weightsLayout:(unsigned int)a3 biasesCount:(unsigned long long)a4 biasesOffset:(unsigned long long)a5;

@end
