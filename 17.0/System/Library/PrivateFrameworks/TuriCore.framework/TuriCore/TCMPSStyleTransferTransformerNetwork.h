@class MPSNNImageNode, MPSCNNConvolutionNode, TCMPSStyleTransferDecodingNode, TCMPSStyleTransferEncodingNode, TCMPSStyleTransferResidualNode, MPSCNNInstanceNormalizationNode, MPSCNNNeuronSigmoidNode;

@interface TCMPSStyleTransferTransformerNetwork : NSObject

@property (retain, nonatomic) TCMPSStyleTransferEncodingNode *encoding1;
@property (retain, nonatomic) TCMPSStyleTransferEncodingNode *encoding2;
@property (retain, nonatomic) TCMPSStyleTransferEncodingNode *encoding3;
@property (retain, nonatomic) TCMPSStyleTransferResidualNode *residual1;
@property (retain, nonatomic) TCMPSStyleTransferResidualNode *residual2;
@property (retain, nonatomic) TCMPSStyleTransferResidualNode *residual3;
@property (retain, nonatomic) TCMPSStyleTransferResidualNode *residual4;
@property (retain, nonatomic) TCMPSStyleTransferResidualNode *residual5;
@property (retain, nonatomic) TCMPSStyleTransferDecodingNode *decoding1;
@property (retain, nonatomic) TCMPSStyleTransferDecodingNode *decoding2;
@property (retain, nonatomic) MPSCNNConvolutionNode *conv;
@property (retain, nonatomic) MPSCNNInstanceNormalizationNode *instNorm;
@property (retain, nonatomic) MPSCNNNeuronSigmoidNode *sigmoid;
@property (retain, nonatomic) MPSNNImageNode *forwardPass;

- (void).cxx_destruct;
- (void)setLearningRate:(float)a0;
- (id)backwardPass:(id)a0;
- (id)exportWeights:(id)a0;
- (id)initWithParameters:(id)a0 inputNode:(id)a1 device:(id)a2 cmdQueue:(id)a3 descriptor:(id)a4 initWeights:(id)a5;
- (void)setStyleIndex:(unsigned long long)a0;

@end
