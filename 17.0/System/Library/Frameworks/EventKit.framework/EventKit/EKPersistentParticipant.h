@interface EKPersistentParticipant : EKPersistentObject

+ (id)defaultPropertiesToLoad;
+ (id)propertyKeyForUniqueIdentifier;

- (id)emailAddress;
- (id)firstName;
- (id)phoneNumber;
- (void)setFirstName:(id)a0;
- (void)setEmailAddress:(id)a0;
- (id)lastName;
- (void)setLastName:(id)a0;
- (id)owner;
- (void)setPhoneNumber:(id)a0;
- (void)setOwner:(id)a0;
- (id)URLString;
- (void)setProposedStartDate:(id)a0;
- (id)proposedStartDate;
- (void)setUUID:(id)a0;
- (id)comment;
- (id)displayName;
- (id)UUID;
- (id)url;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setComment:(id)a0;
- (void)setURLString:(id)a0;
- (id)displayNameRaw;
- (id)inviterNameString;
- (int)proposedStartDateStatus;
- (BOOL)scheduleForceSend;
- (int)scheduleStatus;
- (void)setDisplayNameRaw:(id)a0;
- (void)setInviterNameString:(id)a0;
- (void)setProposedStartDateStatus:(int)a0;
- (void)setScheduleForceSend:(BOOL)a0;
- (void)setScheduleStatus:(int)a0;

@end
