@class NSUUID, SiriAnalyticsLogicalClock;

@interface SiriAnalyticsDerivativeClock : SiriAnalyticsLogicalClock {
    SiriAnalyticsLogicalClock *_rootClock;
}

@property (readonly, nonatomic) NSUUID *isolatedStreamUUID;

- (id)init;
- (void).cxx_destruct;
- (id)initWithClockIdentifier:(id)a0 isolatedStreamUUID:(id)a1 timestampOffset:(unsigned long long)a2 rootClock:(id)a3;

@end
