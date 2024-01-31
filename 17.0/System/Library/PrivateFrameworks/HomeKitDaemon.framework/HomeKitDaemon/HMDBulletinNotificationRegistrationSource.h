@class NSUUID, HMDDeviceAddress, HMDDevice;

@interface HMDBulletinNotificationRegistrationSource : HMFObject <NSCopying, NSSecureCoding, HMDBulletinNotificationRegistrationRemoteCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSUUID *userUUID;
@property (readonly, copy) HMDDeviceAddress *deviceAddress;
@property (readonly, copy) HMDDevice *device;

+ (id)type;
+ (BOOL)doesTypeMatch:(id)a0 against:(id)a1;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithUserUUID:(id)a0 deviceAddress:(id)a1;
- (id)serializedRegistrationForRemoteMessage;

@end
