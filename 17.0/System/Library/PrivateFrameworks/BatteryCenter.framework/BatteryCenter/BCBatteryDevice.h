@class NSString;

@interface BCBatteryDevice : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long percentCharge;
@property (nonatomic, getter=isConnected) BOOL connected;
@property (nonatomic, getter=isCharging) BOOL charging;
@property (nonatomic, getter=isInternal) BOOL internal;
@property (nonatomic, getter=isPowerSource) BOOL powerSource;
@property (nonatomic) BOOL approximatesPercentCharge;
@property (nonatomic) unsigned long long parts;
@property (nonatomic, getter=isWirelesslyCharging) BOOL wirelesslyCharging;
@property (copy, nonatomic) NSString *groupName;
@property (readonly, copy, nonatomic) NSString *matchIdentifier;
@property (nonatomic) long long transportType;
@property (nonatomic) long long powerSourceState;
@property (nonatomic, getter=isFake) BOOL fake;
@property (nonatomic, getter=isLowPowerModeActive) BOOL lowPowerModeActive;
@property (nonatomic, getter=isLowBattery) BOOL lowBattery;
@property (copy, nonatomic) NSString *accessoryIdentifier;
@property (nonatomic) unsigned long long accessoryCategory;
@property (copy, nonatomic) NSString *modelNumber;
@property (readonly, nonatomic) long long vendor;
@property (readonly, nonatomic) long long productIdentifier;

+ (id)batteryDeviceWithIdentifier:(id)a0 vendor:(long long)a1 productIdentifier:(long long)a2 parts:(unsigned long long)a3 matchIdentifier:(id)a4;

- (BOOL)isBatterySaverModeActive;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)synthesizedRepresentativeDevice;
- (id)initWithIdentifier:(id)a0 vendor:(long long)a1 productIdentifier:(long long)a2 parts:(unsigned long long)a3 matchIdentifier:(id)a4;

@end
