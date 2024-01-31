@interface GEOComposedRouteEVStepInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned int remainingBatteryCharge;
@property (readonly, nonatomic) unsigned int remainingBatteryPercentage;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithEVStateInfo:(id)a0;

@end
