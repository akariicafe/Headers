@class NSString, NSDateInterval;

@interface RTVehicle : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDateInterval *dateInterval;
@property (readonly, copy, nonatomic) NSString *vehicleName;
@property (readonly, copy, nonatomic) NSString *vehicleModelName;
@property (readonly, copy, nonatomic) NSString *bluetoothAddress;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDateInterval:(id)a0 vehicleName:(id)a1 vehicleModelName:(id)a2 bluetoothAddress:(id)a3;

@end
