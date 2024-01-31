@class NSDate;
@protocol BPSPublisher;

@interface BPSThrottle : BPSPublisher

@property (retain, nonatomic) id intervalEvent;
@property (retain, nonatomic) NSDate *nextIntervalBoundary;
@property (retain, nonatomic) NSDate *startTimestamp;
@property (readonly, nonatomic) id<BPSPublisher> upstream;
@property (readonly, nonatomic) double interval;
@property (readonly, nonatomic) BOOL latest;
@property (readonly, nonatomic) id /* block */ getTimestamp;

- (void)reset;
- (id)nextEvent;
- (id)upstreamPublishers;
- (void)subscribe:(id)a0;
- (void).cxx_destruct;
- (id)initWithUpstream:(id)a0 interval:(double)a1 latest:(BOOL)a2 getTimestamp:(id /* block */)a3;

@end
