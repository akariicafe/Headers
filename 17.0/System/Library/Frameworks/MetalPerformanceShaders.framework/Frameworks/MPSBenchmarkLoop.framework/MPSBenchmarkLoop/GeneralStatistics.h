@class MPSBenchmarkLoopStatistics;

@interface GeneralStatistics : NSObject

@property (readonly, retain, nonatomic) MPSBenchmarkLoopStatistics *InitTime;
@property (readonly, retain, nonatomic) MPSBenchmarkLoopStatistics *PreWarmingTime;
@property (readonly, retain, nonatomic) MPSBenchmarkLoopStatistics *EncodeTime;
@property (readonly, retain, nonatomic) MPSBenchmarkLoopStatistics *EncodeCycles;
@property (readonly, retain, nonatomic) MPSBenchmarkLoopStatistics *QueueTime;
@property (readonly, retain, nonatomic) MPSBenchmarkLoopStatistics *GPUWaitTime;
@property (readonly, retain, nonatomic) MPSBenchmarkLoopStatistics *PrevCommandBufferWaitTime;
@property (readonly, retain, nonatomic) MPSBenchmarkLoopStatistics *WallClockTime;
@property (readonly, retain, nonatomic) MPSBenchmarkLoopStatistics *GPUTime;
@property (readonly, retain, nonatomic) MPSBenchmarkLoopStatistics *GPUMemory;
@property (readonly, retain, nonatomic) MPSBenchmarkLoopStatistics *SystemResidentMemory;
@property (readonly, nonatomic) unsigned long long numberOfCommandBuffers;
@property (readonly, nonatomic) unsigned long long numberOfEncodesPerCommandBuffer;

- (id)init;
- (void)dealloc;
- (void)printGeneralStatistics;
- (void)updateNumberOfCommandBuffers:(unsigned long long)a0 numberOfEncodesPerCommandBuffer:(unsigned long long)a1;

@end
