@class VCPCNNData, NSMutableArray, VCPCNNMetalContext;

@interface VCPCNNBlock : NSObject {
    BOOL _executedOnGPU;
}

@property (weak) NSMutableArray *inputSize;
@property (retain) NSMutableArray *outputSize;
@property (weak) VCPCNNData *input;
@property (retain) VCPCNNData *output;
@property (readonly) VCPCNNMetalContext *context;
@property BOOL generateOutput;

- (int)forward;
- (void).cxx_destruct;
- (BOOL)useGPU;
- (int)constructBlock:(id)a0 context:(id)a1;
- (int)readFromDisk:(struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *)a0 quantFactor:(short)a1;
- (BOOL)supportGPU;

@end
