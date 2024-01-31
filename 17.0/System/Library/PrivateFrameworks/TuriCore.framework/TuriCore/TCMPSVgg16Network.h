@class TCMPSVgg16Block2, TCMPSVgg16Block1, MPSNNImageNode;

@interface TCMPSVgg16Network : NSObject

@property (retain, nonatomic) TCMPSVgg16Block1 *block1;
@property (retain, nonatomic) TCMPSVgg16Block1 *block2;
@property (retain, nonatomic) TCMPSVgg16Block2 *block3;
@property (retain, nonatomic) TCMPSVgg16Block2 *block4;
@property (retain, nonatomic) MPSNNImageNode *reluOut1;
@property (retain, nonatomic) MPSNNImageNode *reluOut2;
@property (retain, nonatomic) MPSNNImageNode *reluOut3;
@property (retain, nonatomic) MPSNNImageNode *reluOut4;
@property (retain, nonatomic) MPSNNImageNode *output;

- (void).cxx_destruct;
- (void)setLearningRate:(float)a0;
- (id)backwardPass:(id)a0;
- (id)initWithParameters:(id)a0 inputNode:(id)a1 device:(id)a2 cmdQueue:(id)a3 descriptor:(id)a4 initWeights:(id)a5;

@end
