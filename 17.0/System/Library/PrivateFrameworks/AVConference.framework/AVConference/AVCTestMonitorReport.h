@interface AVCTestMonitorReport : NSObject

@property (nonatomic) unsigned long long initialMemoryUsageMB;
@property (nonatomic) unsigned long long memoryUsageMB;
@property (nonatomic) unsigned long long networkAgentRefCount;

@end
