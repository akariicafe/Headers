@class NSMutableArray, NSDate;
@protocol BPSPublisher;

@interface BPSTimer : BPSPublisher

@property (retain, nonatomic) NSDate *nextIntervalBoundary;
@property (retain, nonatomic) NSMutableArray *pendingTimers;
@property (readonly, nonatomic) id<BPSPublisher> upstream;
@property (readonly, nonatomic) double interval;
@property (readonly, nonatomic) id /* block */ getTimestamp;

- (BOOL)completed;
- (void)reset;
- (id)nextEvent;
- (id)upstreamPublishers;
- (void)subscribe:(id)a0;
- (void).cxx_destruct;
- (id)initWithUpstream:(id)a0 interval:(double)a1 getTimestamp:(id /* block */)a2;

@end
