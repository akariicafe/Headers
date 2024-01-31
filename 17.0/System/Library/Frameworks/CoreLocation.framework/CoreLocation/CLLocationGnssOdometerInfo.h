@interface CLLocationGnssOdometerInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double odometer;
@property (readonly, nonatomic) double deltaDistance;
@property (readonly, nonatomic) double deltaDistanceAccuracy;

- (id)initWithOdometer:(double)a0 deltaDistance:(double)a1 deltaDistanceAccuracy:(double)a2;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
