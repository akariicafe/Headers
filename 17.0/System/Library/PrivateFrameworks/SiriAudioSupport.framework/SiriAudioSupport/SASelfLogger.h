@interface SASelfLogger : NSObject

- (id)init;
- (void)emitMWTMusicMetadata:(id)a0 requestId:(id)a1;
- (void)emitMWTCheckPointWithMwtCheckpoint:(long long)a0 requestId:(id)a1 timeStamp:(unsigned long long)a2;
- (void)emitVMCPUStatsWithStage:(long long)a0 requestId:(id)a1;
- (id)getSiriRequestUUIDFor:(id)a0;
- (id)collectVMCPUStatsWithStage:(long long)a0 requestId:(id)a1;
- (void)emitMWTCheckPointWithMwtCheckpoint:(long long)a0 requestId:(id)a1;
- (void)emitVMCPUStatsWithVmCpuStatsData:(id)a0;

@end
