@class MPSBenchmarkLoopStatistics;

@interface CPUStatistics : NSObject

@property (readonly, retain, nonatomic) MPSBenchmarkLoopStatistics *InitTime;
@property (readonly, retain, nonatomic) MPSBenchmarkLoopStatistics *CPUWorkloadTime;
@property (readonly, retain, nonatomic) MPSBenchmarkLoopStatistics *CPUWorkloadCycles;
@property (readonly, retain, nonatomic) MPSBenchmarkLoopStatistics *SystemResidentMemory;

- (id)init;
- (void)dealloc;
- (void)addCPUPerformanceIntervalStart:(struct { unsigned long long x0; double x1; } *)a0 end:(struct { unsigned long long x0; double x1; } *)a1;
- (void)printCPUStatistics;

@end
