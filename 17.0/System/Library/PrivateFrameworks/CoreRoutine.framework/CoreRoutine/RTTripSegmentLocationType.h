@class RTDistanceInterval, NSDateInterval;

@interface RTTripSegmentLocationType : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDateInterval *dateInterval;
@property (readonly, nonatomic) RTDistanceInterval *distanceInterval;
@property (readonly, nonatomic) long long locationType;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDateInterval:(id)a0 distanceInterval:(id)a1 locationType:(long long)a2;

@end
