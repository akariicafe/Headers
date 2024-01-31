@class VCPCNNData, VCPCNNMetalContext, VCPCNNBlock;

@interface VCPCNNModel : NSObject {
    VCPCNNBlock *_blocks[200];
    short _quantFactor;
    BOOL _useGPU;
    VCPCNNMetalContext *_context;
}

@property (readonly) VCPCNNData *output;

- (id)init;
- (int)size;
- (void).cxx_destruct;
- (int)add:(id)a0;
- (int)dynamicForward:(id)a0 paramFileUrl:(id)a1 cancel:(id /* block */)a2;
- (int)forward:(id)a0;
- (id)getGPUContext;
- (id)initWithParameters:(short)a0 useGPU:(BOOL)a1;
- (int)prepareNetworkFromURL:(id)a0 withInputSize:(id)a1;

@end
