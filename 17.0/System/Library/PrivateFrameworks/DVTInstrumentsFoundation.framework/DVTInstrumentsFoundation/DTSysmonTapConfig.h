@class NSArray;

@interface DTSysmonTapConfig : DTTapConfig

@property (nonatomic) unsigned long long sampleInterval;
@property (retain) NSArray *processAttributes;
@property (retain) NSArray *systemAttributes;
@property (retain) NSArray *coalitionAttributes;
@property BOOL sampleCPUUsage;
@property (copy, nonatomic) id /* block */ sessionHandler;

- (id)init;
- (void).cxx_destruct;
- (void)addPid:(int)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)pids;
- (void)setPids:(id)a0;

@end
