@interface SCKDatabasePollingCondition : NSObject

@property (readonly, nonatomic) double minIntervalSinceLastSync;

- (id)initWithMinIntervalSinceLastSync:(double)a0;

@end
