@class NSDateInterval;

@interface ATXFreeMoment : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDateInterval *dateRange;
@property (readonly, nonatomic) double score;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDateRange:(id)a0 score:(double)a1;

@end
