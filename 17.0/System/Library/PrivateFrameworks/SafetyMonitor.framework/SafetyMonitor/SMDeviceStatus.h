@class NSUUID, NSDate;

@interface SMDeviceStatus : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (nonatomic) long long batteryRemaining;
@property (nonatomic) unsigned long long cellularStrength;
@property (copy, nonatomic) NSDate *date;
@property (nonatomic) unsigned long long wifiStrength;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)outputToDictionary;
- (id)initWithIdentifier:(id)a0 batteryRemaining:(long long)a1 cellularStrength:(unsigned long long)a2 date:(id)a3 wifiStrength:(unsigned long long)a4;

@end
