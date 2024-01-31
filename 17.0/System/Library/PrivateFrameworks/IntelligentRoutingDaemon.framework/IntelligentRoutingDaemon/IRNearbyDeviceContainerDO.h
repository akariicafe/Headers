@class NSSet, NSDate;

@interface IRNearbyDeviceContainerDO : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *freezeDateNIHomeDevice;
@property (readonly, nonatomic) NSSet *nearbyDevices;

+ (id)miLoNearbyDeviceDOWithFreezeDateNIHomeDevice:(id)a0 nearbyDevices:(id)a1;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithReplacementFreezeDateNIHomeDevice:(id)a0;
- (id)copyWithReplacementNearbyDevices:(id)a0;
- (id)exportAsArray;
- (id)initWithFreezeDateNIHomeDevice:(id)a0 nearbyDevices:(id)a1;
- (BOOL)isEqualToMiLoNearbyDeviceDO:(id)a0;

@end
