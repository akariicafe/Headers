@class NSUUID, NSDateInterval;

@interface RTTripSegment : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, copy, nonatomic) NSDateInterval *dateInterval;
@property (readonly, nonatomic) double tripDistance;
@property (readonly, nonatomic) double tripDistanceUncertainty;
@property (readonly, nonatomic) long long modeOfTransportation;

+ (id)mergeTripSegment:(id)a0 other:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTripSegmentIdentifier:(id)a0 dateInterval:(id)a1 tripDistance:(double)a2 tripDistanceUncertainty:(double)a3 modeOfTransportation:(long long)a4;

@end
