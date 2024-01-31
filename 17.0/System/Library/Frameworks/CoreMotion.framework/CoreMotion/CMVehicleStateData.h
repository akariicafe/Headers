@class CMMotionTimeRange, NSString;

@interface CMVehicleStateData : NSObject <NSSecureCoding, NSCopying> {
    CMMotionTimeRange *fTimeRange;
    NSString *fVehicleName;
    NSString *fVehicleModelName;
    NSString *fVehicleBluetoothAddress;
    unsigned long long fVehicularState;
    unsigned long long fVehicularHints;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) CMMotionTimeRange *timeRange;
@property (readonly, nonatomic) NSString *deviceId;
@property (readonly, nonatomic) NSString *vehicleName;
@property (readonly, nonatomic) NSString *vehicleModelName;
@property (readonly, nonatomic) NSString *vehicleBluetoothAddress;
@property (readonly, nonatomic) unsigned long long vehicularState;
@property (readonly, nonatomic) unsigned long long vehicularHints;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTimeRange:(id)a0 vehicleName:(id)a1 vehicleModelName:(id)a2 vehicleBluetoothAddress:(id)a3;
- (id)initWithTimestamp:(id)a0 state:(unsigned long long)a1 hints:(unsigned long long)a2;

@end
