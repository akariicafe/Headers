@class NSData, NSUUID;

@interface PRRemoteDevice : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long deviceType;
@property (copy, nonatomic) NSData *btAdvAddress;
@property (copy, nonatomic) NSData *roseMACAddress;
@property (copy, nonatomic) NSUUID *UUID;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)compareField:(id)a0 to:(id)a1;
- (id)initWithBTAdvAddress:(id)a0;
- (id)initWithBeaconUUID:(id)a0;
- (id)initWithCompanionUUID:(id)a0;
- (id)initWithRoseMACAddress:(id)a0;
- (id)initWithTestCompanionBtAdvAddress:(id)a0;

@end
