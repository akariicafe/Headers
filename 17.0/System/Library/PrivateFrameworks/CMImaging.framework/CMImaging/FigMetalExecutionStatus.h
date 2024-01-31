@class NSMutableArray;

@interface FigMetalExecutionStatus : NSObject

@property (retain, nonatomic) NSMutableArray *failedCommandBuffers;
@property (nonatomic) unsigned long long status;
@property (nonatomic) int completedCommandBuffersCount;

- (id)init;
- (void).cxx_destruct;

@end
