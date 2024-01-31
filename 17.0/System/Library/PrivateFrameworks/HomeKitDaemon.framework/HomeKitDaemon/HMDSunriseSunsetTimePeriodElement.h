@class NSString, NSDateComponents;

@interface HMDSunriseSunsetTimePeriodElement : HMDTimePeriodElement <NSCopying, NSSecureCoding, HMDBulletinNotificationRegistrationRemoteCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *significantEvent;
@property (readonly, copy) NSDateComponents *offset;

+ (id)type;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSignificantEvent:(id)a0 offset:(id)a1;
- (id)serializedRegistrationForRemoteMessage;

@end
