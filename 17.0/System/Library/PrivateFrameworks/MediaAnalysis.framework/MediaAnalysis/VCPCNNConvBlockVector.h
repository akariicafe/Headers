@interface VCPCNNConvBlockVector : VCPCNNConvBlock {
    void /* function */ *CalculateDotProductOfChunk;
}

+ (BOOL)isFilterSizeSupported:(int)a0;

- (int)forward;
- (int)chunkFourForward;
- (id)initWithParameters:(int)a0 filterNum:(int)a1 chunk:(int)a2 reLU:(BOOL)a3 padding:(BOOL)a4 groups:(int)a5 stride:(int)a6 batchNorm:(BOOL)a7;
- (int)readFromDisk:(struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *)a0 quantFactor:(short)a1;
- (int)straightForwardForChunkFour;

@end
