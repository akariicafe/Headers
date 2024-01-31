@class CLCircularRegion, NSDate;

@interface WFLocationTrigger : WFTrigger

@property (copy, nonatomic) CLCircularRegion *region;
@property (retain, nonatomic) NSDate *startTime;
@property (retain, nonatomic) NSDate *endTime;

+ (BOOL)supportsSecureCoding;
+ (id)timestampDateFormatter;
+ (BOOL)isAllowedToRunAutomatically;
+ (BOOL)requiresNotification;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isDateWithinTimeRange:(id)a0;
- (void)configureWithConfiguration:(id)a0;
- (BOOL)hasValidConfiguration;

@end
