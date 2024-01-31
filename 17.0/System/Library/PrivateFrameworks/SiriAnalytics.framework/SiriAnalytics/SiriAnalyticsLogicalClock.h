@class NSUUID, SiriAnalyticsLogicalClockStatistics;

@interface SiriAnalyticsLogicalClock : NSObject

@property (readonly, nonatomic) NSUUID *clockIdentifier;
@property (readonly, nonatomic) long long timestampOffset;
@property (readonly, nonatomic) SiriAnalyticsLogicalClockStatistics *clockStatistics;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)stopClock;
- (BOOL)containsTimestamp:(unsigned long long)a0;
- (id)initWithClockIdentifier:(id)a0 timestampOffset:(unsigned long long)a1 startedOn:(unsigned long long)a2;
- (id)logicalTimestampForMachAbsoluteTime:(unsigned long long)a0;

@end
