@class NSString;

@interface GEOComposedRouteEVChargingStationInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long muid;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) double chargingTime;
@property (readonly, nonatomic) double batteryChargeAfterCharging;
@property (readonly, nonatomic) double batteryPercentageAfterCharging;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithGeoEVChargingInfo:(id)a0 muid:(unsigned long long)a1 name:(id)a2;

@end
