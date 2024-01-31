@interface EKPersistentSharee : EKPersistentObject

+ (id)relations;
+ (id)defaultPropertiesToLoad;
+ (Class)meltedClass;

- (id)firstName;
- (void)setFirstName:(id)a0;
- (id)lastName;
- (id)address;
- (void)setLastName:(id)a0;
- (id)owner;
- (void)setOwner:(id)a0;
- (void)setAddress:(id)a0;
- (id)externalID;
- (int)entityType;
- (void)setUUID:(id)a0;
- (id)description;
- (void)setDisplayName:(id)a0;
- (void)setExternalID:(id)a0;
- (id)displayName;
- (id)UUID;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)shareeStatusRaw;
- (void)setShareeAccessLevelRaw:(int)a0;
- (void)setShareeMuteRemoval:(BOOL)a0;
- (void)setShareeStatusRaw:(int)a0;
- (int)shareeAccessLevelRaw;
- (BOOL)shareeMuteRemoval;

@end
