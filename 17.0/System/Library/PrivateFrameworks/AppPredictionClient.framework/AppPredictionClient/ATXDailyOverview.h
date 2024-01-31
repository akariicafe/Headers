@class NSArray, ATXDailyTimeSummary;

@interface ATXDailyOverview : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, copy, nonatomic) NSArray *sections;
@property (readonly, nonatomic) ATXDailyTimeSummary *dailySummary;
@property (readonly, copy, nonatomic) NSArray *pinnedEvents;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(unsigned long long)a0 sections:(id)a1 dailySummary:(id)a2 pinnedEvents:(id)a3;

@end
