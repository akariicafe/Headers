@class NSSet;

@interface HMDPresenceNotificationCondition : HMDNotificationCondition <HMDBulletinNotificationRegistrationRemoteCoding>

@property (readonly) unsigned long long presenceEventType;
@property (readonly) unsigned long long presenceEventUserType;
@property (readonly, copy) NSSet *userUUIDs;

+ (BOOL)supportsSecureCoding;
+ (id)type;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPresenceEventType:(unsigned long long)a0 presenceEventUserType:(unsigned long long)a1 userUUIDs:(id)a2;
- (id)serializedRegistrationForRemoteMessage;

@end
