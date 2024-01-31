@class HKQuantity, NSArray, NSDate;

@interface _HKQuantityDistributionData : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) HKQuantity *minimumBucketValue;
@property (readonly, nonatomic) HKQuantity *minimumValue;
@property (readonly, nonatomic) HKQuantity *maximumValue;
@property (readonly, nonatomic) HKQuantity *averageValue;
@property (readonly, nonatomic) HKQuantity *duration;
@property (readonly, nonatomic) NSArray *histogramCounts;
@property (readonly, nonatomic) NSArray *contextIdentifiers;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 minimumBucketValue:(id)a2 minimumValue:(id)a3 maximumValue:(id)a4 averageValue:(id)a5 duration:(id)a6 histogramCounts:(id)a7;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 minimumBucketValue:(id)a2 minimumValue:(id)a3 maximumValue:(id)a4 averageValue:(id)a5 duration:(id)a6 histogramCounts:(id)a7 contextIdentifiers:(id)a8;

@end
