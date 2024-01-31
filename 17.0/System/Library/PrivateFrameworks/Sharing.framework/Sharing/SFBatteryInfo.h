@interface SFBatteryInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double batteryLevel;
@property (nonatomic) long long batteryState;
@property (nonatomic) long long batteryType;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
