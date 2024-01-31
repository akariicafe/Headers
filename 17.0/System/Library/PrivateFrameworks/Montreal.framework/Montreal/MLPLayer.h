@class NSString, MLPNetwork, MPSKernel, MontrealNNModelNode;

@interface MLPLayer : NSObject

@property (readonly) NSString *name;
@property (readonly) unsigned long long layerType;
@property (retain) MontrealNNModelNode *node;
@property (readonly) int neuronType;
@property (readonly) float neuronA;
@property (readonly) float neuronB;
@property (readonly) float neuronC;
@property unsigned long long inputLength;
@property unsigned long long inputChannels;
@property unsigned long long outputChannels;
@property unsigned long long outputLength;
@property (retain) MPSKernel *forwardKernel;
@property (retain) MPSKernel *secondaryForwardKernel;
@property (retain) MPSKernel *primaryGradientKernel;
@property (retain) MPSKernel *secondaryGradientKernel;
@property (weak) MLPLayer *previousLayer;
@property (weak) MLPLayer *nextLayer;
@property (weak) MLPNetwork *network;

+ (id)layerWithMontrealNode:(id)a0 modelContainer:(void *)a1;

- (void).cxx_destruct;
- (id)backward:(id)a0 inputGradient:(id)a1;
- (void)createKernel;
- (id)forward:(id)a0 input:(id)a1 labels:(id)a2 runInference:(BOOL)a3;
- (id)generateNode:(id)a0 model:(id)a1 weightIter:(unsigned long long *)a2;
- (id)generateNode:(id)a0 model:(id)a1 weightIter:(unsigned long long *)a2 params:(struct { long long x0; long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7[8]; unsigned long long x8; int x9[8][4]; int x10[4][4]; int x11[16]; float x12[16]; void *x13[16]; void *x14[16]; } *)a3 inputChunks:(id)a4 outputChunks:(id)a5;
- (id)initWithLayerType:(unsigned long long)a0 name:(id)a1 neuronType:(int)a2 neuronParams:(id)a3;
- (id)initWithLayerType:(unsigned long long)a0 name:(id)a1 parameters:(struct { long long x0; long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7[8]; unsigned long long x8; int x9[8][4]; int x10[4][4]; int x11[16]; float x12[16]; void *x13[16]; void *x14[16]; } *)a2;
- (id)initWithName:(id)a0 parameters:(struct { long long x0; long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7[8]; unsigned long long x8; int x9[8][4]; int x10[4][4]; int x11[16]; float x12[16]; void *x13[16]; void *x14[16]; } *)a1;
- (long long)montrealTypeFromMPSNeuronType:(int)a0;
- (int)mpsNeuronTypeFromMontrealType:(long long)a0;
- (void)printMatrix:(id)a0 name:(id)a1 cmdBuf:(id)a2;
- (id)seqBackward:(id)a0 dataBatch:(id)a1 inputGradient:(id)a2;
- (id)seqForward:(id)a0 input:(id)a1 dataBatch:(id)a2 runInference:(BOOL)a3;
- (void)updatePreviousLayer:(id)a0 nextLayer:(id)a1 network:(id)a2;

@end
