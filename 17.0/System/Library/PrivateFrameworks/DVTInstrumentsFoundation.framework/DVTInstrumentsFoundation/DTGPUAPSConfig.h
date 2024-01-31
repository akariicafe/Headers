@class NSDictionary;

@interface DTGPUAPSConfig : NSObject

@property (nonatomic) unsigned long long duration;
@property (nonatomic) unsigned long long pulsePeriod;
@property (nonatomic) unsigned long long countPeriod;
@property (nonatomic) unsigned long long tileTracing;
@property (nonatomic) unsigned long long eslInstTracing;
@property (nonatomic) unsigned long long ringBufferSizeInKB;
@property (nonatomic) unsigned long long systemTimePeriod;
@property (nonatomic) unsigned long long cliqueTraceLevel;
@property (nonatomic) unsigned long long emitPos;
@property (nonatomic) unsigned long long emitThreadControlFlow;
@property (nonatomic) unsigned long long subSamplingMinTraced;
@property (nonatomic) unsigned long long subSamplingTargetThreshold;
@property (nonatomic) unsigned long long nRingBuffers;
@property (readonly, nonatomic) NSDictionary *grcOptions;
@property (readonly, nonatomic) NSDictionary *grcTrigger;

- (id)init;
- (id)toDictionary;
- (void)readConfig:(id)a0;

@end
