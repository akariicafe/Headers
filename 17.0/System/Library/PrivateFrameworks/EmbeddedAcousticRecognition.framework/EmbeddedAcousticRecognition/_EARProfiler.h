@class NSString;

@interface _EARProfiler : NSObject {
    unsigned long long _n_samples;
    double _max_rss;
    double _jetsam_max;
    double _jetsam_tot;
    struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; struct __compressed_pair<float *, std::allocator<float>> { float *__value_; } __end_cap_; } _background_power;
    struct vector<void *, std::allocator<void *>> { void **__begin_; void **__end_; struct __compressed_pair<void **, std::allocator<void *>> { void **__value_; } __end_cap_; } _networks;
    struct powerSummary { double total_energy; double ane_energy; double gpu_energy; double ecpu_energy; double pcpu_energy; double dram_energy; double other_energy; double total_power; double ane_power; double gpu_power; double ecpu_power; double pcpu_power; double dram_power; double other_power; } _power_summary;
    double _start_time;
    double _end_time;
    double _ane_time;
    NSString *_power_profiler_name;
    NSString *_background_power_logfile_name;
    NSString *_runtime_power_logfile_name;
}

@property BOOL _memoryProfiler;
@property BOOL _perfProfiler;
@property BOOL _powerProfiler;
@property BOOL _hasPMP;
@property BOOL _keepLogFiles;

+ (id)sharedProfiler;

- (id)init;
- (void)reset;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)sample;
- (void)reportProfiling;
- (void)KeepLogFiles:(BOOL)a0;
- (void)cleanupLogfiles;
- (void)finishProfiling;
- (void)addProfilingNetwork:(void *)a0;
- (void)finishProfilingNetworks;
- (void)parsePowerSummary:(id)a0 writeTo:(struct powerSummary { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; } *)a1;
- (id)reportProfilingAsDictionary;
- (void)setMemoryProfiler:(BOOL)a0;
- (void)setPerfProfiler:(BOOL)a0;
- (void)setPowerProfiler:(BOOL)a0 powerProfilerName:(id)a1;

@end
