@class NSString, NSMutableArray;
@protocol MTLDevice;

@interface DTGPUCounterProfile : NSObject

@property (retain, nonatomic) id<MTLDevice> device;
@property (readonly, nonatomic) unsigned long long profile;
@property (retain, nonatomic) NSMutableArray *counters;
@property (nonatomic) unsigned long long defaultSampleInterval;
@property (retain, nonatomic) NSString *derivedCounterScriptPath;
@property (retain, nonatomic) NSString *profileName;
@property (nonatomic) BOOL isAPS;

- (void)stop;
- (void).cxx_destruct;
- (BOOL)prepare;
- (void)addCounter:(id)a0;
- (id)counterProfileForHost;
- (id)initWithProfile:(unsigned long long)a0 device:(id)a1;
- (id)ringBufferCounts;
- (void)sampleAPS:(id /* block */)a0;
- (void)sampleCounters:(unsigned long long)a0 callback:(id /* block */)a1;
- (id)sampleSizes;
- (BOOL)start:(unsigned long long)a0 vendorFeatures:(id)a1;

@end
