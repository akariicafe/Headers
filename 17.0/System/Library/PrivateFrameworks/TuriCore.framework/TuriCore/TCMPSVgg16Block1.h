@class MPSCNNConvolutionNode, MPSCNNNeuronReLUNode, MPSCNNPoolingAverageNode, MPSNNImageNode;

@interface TCMPSVgg16Block1 : NSObject

@property (retain, nonatomic) MPSCNNConvolutionNode *conv1;
@property (retain, nonatomic) MPSCNNNeuronReLUNode *relu1;
@property (retain, nonatomic) MPSCNNConvolutionNode *conv2;
@property (retain, nonatomic) MPSCNNNeuronReLUNode *relu2;
@property (retain, nonatomic) MPSCNNPoolingAverageNode *pooling;
@property (retain, nonatomic) MPSNNImageNode *features;
@property (retain, nonatomic) MPSNNImageNode *output;

- (void).cxx_destruct;
- (void)setLearningRate:(float)a0;
- (id)backwardPass:(id)a0;
- (id)initWithParameters:(id)a0 inputNode:(id)a1 device:(id)a2 cmdQueue:(id)a3 descriptor:(id)a4 initWeights:(id)a5;

@end
