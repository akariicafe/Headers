@class VCPCNNData;

@interface VCPCNNConvBlock : VCPCNNBlock {
    int _filterSize;
    int _filterNum;
    VCPCNNData *_filter;
    VCPCNNData *_bias;
    int _chunk;
    BOOL _reLU;
    int _padding;
    int _padSize;
    int _stride;
    int _groups;
    BOOL _batchNorm;
}

+ (Class)convBlockClass:(int)a0;
+ (id)convBlockWithFilterSize:(int)a0 filterNum:(int)a1 chunk:(int)a2 reLU:(BOOL)a3 padding:(BOOL)a4;
+ (id)convBlockWithFilterSize:(int)a0 filterNum:(int)a1 chunk:(int)a2 reLU:(BOOL)a3 padding:(BOOL)a4 groups:(int)a5 stride:(int)a6 batchNorm:(BOOL)a7;

- (void).cxx_destruct;
- (BOOL)useGPU;
- (int)constructBlock:(id)a0 context:(id)a1;
- (id)initWithParameters:(int)a0 filterNum:(int)a1 chunk:(int)a2 reLU:(BOOL)a3 padding:(BOOL)a4 groups:(int)a5 stride:(int)a6 batchNorm:(BOOL)a7;
- (BOOL)supportGPU;

@end
