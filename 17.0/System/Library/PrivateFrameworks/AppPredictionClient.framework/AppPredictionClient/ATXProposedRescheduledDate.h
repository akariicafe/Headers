@class ATXTime, NSDateComponents, NSDate;

@interface ATXProposedRescheduledDate : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *dateTime;
@property (readonly, nonatomic) NSDateComponents *components;
@property (readonly, nonatomic) ATXTime *fuzzyTimeRangeStart;
@property (readonly, nonatomic) ATXTime *fuzzyTimeRangeEnd;
@property (readonly, nonatomic) long long type;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDateTime:(id)a0;
- (id)initWithDayComponents:(id)a0;
- (id)initWithDayComponents:(id)a0 fuzzyTimeRangeStart:(id)a1 fuzzyTimeRangeEnd:(id)a2;
- (id)initWithHourComponents:(id)a0;

@end
