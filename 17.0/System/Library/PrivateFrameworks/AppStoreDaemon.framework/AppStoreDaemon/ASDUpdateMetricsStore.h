@class NSArray, NSLock, NSDate;

@interface ASDUpdateMetricsStore : NSObject {
    NSLock *_lock;
}

@property (readonly, nonatomic) double averagePollTime;
@property (readonly, nonatomic) NSArray *metrics;
@property (readonly, nonatomic) NSDate *lastAutoPollDate;

- (id)init;
- (void).cxx_destruct;
- (void)synchronize;
- (void)addPoll:(id)a0;

@end
