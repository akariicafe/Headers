@class MXMMutableSampleData, NSThread;

@interface MXMSystemProbe : MXMProbe {
    MXMMutableSampleData *_data;
    NSThread *_updateThread;
}

+ (id)probe;

- (id)init;
- (void).cxx_destruct;
- (void)_beginUpdates;
- (void)_stopUpdates;
- (void)_gatherConstantSystemProperties;
- (void)_pollSystemLoop;
- (void)_buildData:(id)a0 timestamp:(unsigned long long)a1 cpuInfo:(struct processor_basic_info { int x0; int x1; int x2; int x3; union { int x0; int x1; } x4; } *)a2;
- (void)_buildData:(id)a0 timestamp:(unsigned long long)a1 cpuLoad:(struct processor_cpu_load_info { unsigned int x0[4]; } *)a2;
- (void)_buildData:(id)a0 timestamp:(unsigned long long)a1 hostInfo:(struct vm_statistics64 { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; unsigned long long x15; unsigned long long x16; unsigned long long x17; unsigned long long x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned long long x23; } *)a2;
- (void)_buildData:(id)a0 timestamp:(unsigned long long)a1 loadInfo:(struct processor_set_load_info { int x0; int x1; int x2; int x3; } *)a2;
- (void)_buildData:(id)a0 timestamp:(unsigned long long)a1 processorCount:(unsigned int)a2;
- (void)_pollProcessorLoadInformationWithData:(id)a0;
- (void)_pollSystemBatteryWithData:(id)a0;
- (void)_pollSystemHostProcessorInfoWithData:(id)a0;
- (void)_pollSystemLoadInformationWithData:(id)a0;
- (void)_pollSystemMainBody;
- (void)_pollSystemThermalsWithData:(id)a0;
- (void)_prepareData;

@end
