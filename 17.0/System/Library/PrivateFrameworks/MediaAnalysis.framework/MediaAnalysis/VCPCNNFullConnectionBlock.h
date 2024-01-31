@interface VCPCNNFullConnectionBlock : VCPCNNBlock {
    float *_weight;
    float *_bias;
    int _numNeurons;
    int _neuronType;
}

+ (id)fcBlockWithNumNeurons:(int)a0 NeuronType:(int)a1;

- (void)dealloc;
- (BOOL)useGPU;
- (int)constructBlock:(id)a0 context:(id)a1;
- (id)initWithParameters:(int)a0 NeuronType:(int)a1;
- (int)loadWeights:(struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *)a0 inputDim:(int)a1 outputDim:(int)a2 quantFactor:(int)a3;
- (int)readFromDisk:(struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *)a0 quantFactor:(short)a1;
- (int)readWeightsBias:(struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *)a0 weights:(float *)a1 bias:(float *)a2 inputDim:(int)a3 outputDim:(int)a4 quantFactor:(int)a5;
- (BOOL)supportGPU;

@end
