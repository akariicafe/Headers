@class MPSCNNPoolingMax;

@interface VCPCNNPoolingBlockGPU : VCPCNNPoolingBlock {
    MPSCNNPoolingMax *_mpsPooling;
}

- (int)forward;
- (void).cxx_destruct;

@end
