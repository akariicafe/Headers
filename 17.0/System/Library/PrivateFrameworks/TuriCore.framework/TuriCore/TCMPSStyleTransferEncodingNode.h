@class MPSCNNInstanceNormalizationNode, MPSCNNConvolutionNode, MPSCNNNeuronReLUNode, MPSNNImageNode;

@interface TCMPSStyleTransferEncodingNode : NSObject

@property (retain, nonatomic) MPSCNNConvolutionNode *conv;
@property (retain, nonatomic) MPSCNNInstanceNormalizationNode *instNorm;
@property (retain, nonatomic) MPSCNNNeuronReLUNode *relu;
@property (retain, nonatomic) MPSNNImageNode *output;

- (void).cxx_destruct;
- (void)setLearningRate:(float)a0;
- (id)backwardPass:(id)a0;
- (id)exportWeights:(id)a0;
- (id)initWithParameters:(id)a0 inputNode:(id)a1 device:(id)a2 cmdQueue:(id)a3 descriptor:(id)a4 initWeights:(id)a5;
- (void)setStyleIndex:(unsigned long long)a0;

@end
