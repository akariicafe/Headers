@class NSData;

@interface _ANEPerformanceStats : NSObject

@property (readonly, nonatomic) NSData *perfCounterData;
@property (readonly, nonatomic) unsigned long long hwExecutionTime;

+ (id)new;
+ (unsigned int)driverMaskForANEFMask:(unsigned int)a0;
+ (id)statsWithHardwareExecutionNS:(unsigned long long)a0;
+ (id)statsWithReconstructed:(id)a0 hardwareExecutionNS:(unsigned long long)a1;
+ (id)statsWithRequestPerformanceBuffer:(void **)a0 statsBufferSize:(unsigned int *)a1;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)emitPerfcounterSignpostsWithModelStringID:(unsigned long long)a0;
- (id)initWithHardwareExecution:(unsigned long long)a0 perfCounterData:(id)a1;
- (id)initWithReconstructedData:(id)a0 hardwareExecutionNS:(unsigned long long)a1;
- (id)initWithRequestPerformanceBuffer:(void **)a0 statsBufferSize:(unsigned int *)a1;
- (id)performanceCounters;
- (id)stringForPerfCounter:(int)a0;

@end
