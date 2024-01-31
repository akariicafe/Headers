@class NSUUID, NSString, ATXTime, NSDateComponents, ATXPinnedTimeEvent;

@interface ATXScheduledPinnedTimeEvent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) ATXPinnedTimeEvent *pinnedTimeEvent;
@property (readonly, nonatomic) long long granularity;
@property (readonly, copy, nonatomic) NSString *eventIdentifier;
@property (readonly, copy, nonatomic) NSDateComponents *dateComponents;
@property (readonly, nonatomic) long long fuzzyTime;
@property (readonly, nonatomic) ATXTime *fuzzyTimeRangeStart;
@property (readonly, nonatomic) ATXTime *fuzzyTimeRangeEnd;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithEventIdentifier:(id)a0;
- (id)copyWithGranularity:(long long)a0 dateComponents:(id)a1 fuzzyTime:(long long)a2 fuzzyTimeRangeStart:(id)a3 fuzzyTimeRangeEnd:(id)a4;
- (id)initWithPinnedTimeEvent:(id)a0 granularity:(long long)a1 dateComponents:(id)a2 fuzzyTime:(long long)a3 fuzzyTimeRangeStart:(id)a4 fuzzyTimeRangeEnd:(id)a5;
- (id)initWithPinnedTimeEvent:(id)a0 granularity:(long long)a1 dateComponents:(id)a2 fuzzyTime:(long long)a3 fuzzyTimeRangeStart:(id)a4 fuzzyTimeRangeEnd:(id)a5 uuid:(id)a6 eventIdentifier:(id)a7;

@end
