@interface DTSysmonCPUUsageEntry : NSObject

@property (nonatomic) double totalLoad;
@property (nonatomic) double userLoad;
@property (nonatomic) double systemLoad;
@property (nonatomic) double niceLoad;

- (id)initWithTotal:(double)a0 user:(double)a1 system:(double)a2 nice:(double)a3;

@end
