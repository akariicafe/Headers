@class HKQuantity, NSDateComponents, NSDate;

@interface _HKQuantityDistributionQueryServerConfiguration : HKQueryServerConfiguration

@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSDate *endDate;
@property (nonatomic) long long contextStyle;
@property (copy, nonatomic) NSDate *anchorDate;
@property (copy, nonatomic) NSDateComponents *intervalComponents;
@property (copy, nonatomic) HKQuantity *histogramAnchor;
@property (copy, nonatomic) HKQuantity *histogramBucketSize;
@property (nonatomic) unsigned long long options;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
