@class NSArray, MLPOptimizer, MPSVector, NSString, MPSMatrix;

@interface MLPDenseLayer : MLPMatrixLayer <MLPLayerOptimizerProtocol>

@property (retain) MPSMatrix *weights;
@property (retain) MPSVector *biasVector;
@property (retain) MLPOptimizer *optimizerWeights;
@property (retain) MLPOptimizer *optimizerBiases;
@property const void *initialWeights;
@property const void *initialBias;
@property (readonly) NSArray *mlpOptimizers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)backward:(id)a0 index:(id)a1 inputGradientMatrix:(id)a2;
- (id)backward:(id)a0 inputGradient:(id)a1;
- (void)createKernel;
- (id)forward:(id)a0 input:(id)a1 labels:(id)a2 runInference:(BOOL)a3;
- (id)forward:(id)a0 inputMatrix:(id)a1 index:(id)a2 runInference:(BOOL)a3;
- (id)generateNode:(id)a0 model:(id)a1 weightIter:(unsigned long long *)a2;
- (id)initWithName:(id)a0 numInputs:(unsigned long long)a1 numOutputs:(unsigned long long)a2 neuronType:(int)a3 neuronParams:(id)a4;
- (id)initWithName:(id)a0 parameters:(struct { long long x0; long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7[8]; unsigned long long x8; int x9[8][4]; int x10[4][4]; int x11[16]; float x12[16]; void *x13[16]; void *x14[16]; } *)a1;
- (id)initWithName:(id)a0 previousLayer:(id)a1 numOutputs:(unsigned long long)a2 neuronType:(int)a3 neuronParams:(id)a4;
- (id)seqBackward:(id)a0 dataBatch:(id)a1 inputGradient:(id)a2;
- (id)seqForward:(id)a0 input:(id)a1 dataBatch:(id)a2 runInference:(BOOL)a3;

@end
