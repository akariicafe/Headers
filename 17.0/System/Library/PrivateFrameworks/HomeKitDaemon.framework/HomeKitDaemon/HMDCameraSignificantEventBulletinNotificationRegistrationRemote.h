@class HMDCameraSignificantEventBulletinNotificationRegistration, HMDBulletinNotificationRegistrationSource;

@interface HMDCameraSignificantEventBulletinNotificationRegistrationRemote : HMFObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) HMDCameraSignificantEventBulletinNotificationRegistration *registration;
@property (readonly, copy) HMDBulletinNotificationRegistrationSource *source;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCameraCameraSignificantEventBulletinNotificationRegistration:(id)a0 source:(id)a1;

@end
