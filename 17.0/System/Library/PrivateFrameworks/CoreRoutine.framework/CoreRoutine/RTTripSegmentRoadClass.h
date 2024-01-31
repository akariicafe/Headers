@class RTDistanceInterval, NSDateInterval;

@interface RTTripSegmentRoadClass : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDateInterval *dateInterval;
@property (readonly, nonatomic) RTDistanceInterval *distanceInterval;
@property (readonly, nonatomic) long long geoRoadClass;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDateInterval:(id)a0 distanceInterval:(id)a1 geoRoadClass:(long long)a2;

@end
