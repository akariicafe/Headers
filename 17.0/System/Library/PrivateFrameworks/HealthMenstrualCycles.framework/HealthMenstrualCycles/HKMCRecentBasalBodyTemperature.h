@class NSString, HKQuantity;

@interface HKMCRecentBasalBodyTemperature : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *shortDescription;
@property (readonly, copy, nonatomic) HKQuantity *mostRecent;
@property (readonly, copy, nonatomic) HKQuantity *upperQuantile;
@property (readonly, copy, nonatomic) HKQuantity *median;
@property (readonly, copy, nonatomic) HKQuantity *lowerQuantile;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMostRecent:(id)a0 upperQuantile:(id)a1 median:(id)a2 lowerQuantile:(id)a3;

@end
