@interface VCPCNNDataGPU : VCPCNNData

- (int)allocBuffers:(BOOL)a0;
- (int)bufferAllocGPU;
- (int)convertCPUData2GPU;
- (int)convertGPUData2CPU;
- (int)reallocGPUTemporalBuffers;

@end
