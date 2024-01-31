@class MPSMatrixNeuron, MPSNDArrayMultiplication, MPSNDArrayReductionSum, MPSMatrixSoftMax, MPSMatrixLogSoftMax, MPSMatrixCopy;

@interface MLPLossLayer : MLPImageLayer

@property (retain) MPSNDArrayMultiplication *multiplication;
@property (retain) MPSNDArrayReductionSum *reductionSum;
@property (retain) MPSMatrixSoftMax *matrixSoftMax;
@property (retain) MPSMatrixLogSoftMax *matrixLogSoftMax;
@property (retain) MPSMatrixNeuron *negativeNeuron;
@property (retain) MPSMatrixCopy *matrixLargeCopyFilter;
@property (retain) MPSMatrixCopy *matrixSingleCopyFilter;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 inputLength:(unsigned long long)a1 inputChannels:(unsigned long long)a2 neuronType:(int)a3 neuronParams:(id)a4;
- (id)backward:(id)a0 inputGradient:(id)a1;
- (void)createKernel;
- (id)forward:(id)a0 input:(id)a1 labels:(id)a2 runInference:(BOOL)a3;
- (id)generateNode:(id)a0 model:(id)a1 weightIter:(unsigned long long *)a2;
- (id)imageInferenceForward:(id)a0 input:(id)a1 lossLabels:(id)a2;
- (id)imageTrainingForward:(id)a0 input:(id)a1 lossLabels:(id)a2;
- (id)initWithName:(id)a0 parameters:(struct { long long x0; long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7[8]; unsigned long long x8; int x9[8][4]; int x10[4][4]; int x11[16]; float x12[16]; void *x13[16]; void *x14[16]; } *)a1;
- (id)initWithName:(id)a0 previousLayer:(id)a1 neuronType:(int)a2 neuronParams:(id)a3;
- (id)seqBackward:(id)a0 dataBatch:(id)a1 inputGradient:(id)a2;
- (id)seqForward:(id)a0 input:(id)a1 dataBatch:(id)a2 runInference:(BOOL)a3;
- (id)seqForward:(id)a0 inputMatrix:(id)a1 dataBatch:(id)a2 runInference:(BOOL)a3;
- (id)seqInferenceForward:(id)a0 inputMatrix:(id)a1 dataBatch:(id)a2;
- (id)seqTrainingForward:(id)a0 inputMatrix:(id)a1 dataBatch:(id)a2 computeLossGradient:(BOOL)a3;
- (id)seqTrainingForward:(id)a0 subMatrix:(id)a1 reductionSumResults:(id)a2 alphaVec:(id)a3 labels:(id)a4 rowOffset:(unsigned long long)a5 computeNRows:(unsigned long long)a6 computeLossGradient:(BOOL)a7;
- (void)updatePreviousLayer:(id)a0 nextLayer:(id)a1 network:(id)a2;

@end
