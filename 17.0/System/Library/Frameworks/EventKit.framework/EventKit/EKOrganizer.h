@interface EKOrganizer : EKParticipant

@property (nonatomic) long long scheduleAgent;

+ (Class)frozenClass;
+ (id)organizerWithName:(id)a0 emailAddress:(id)a1 phoneNumber:(id)a2 address:(id)a3 isCurrentUser:(BOOL)a4;

- (id)owner;
- (void)setCurrentUser:(BOOL)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)participantRole;
- (long long)participantType;
- (BOOL)isCurrentUser;
- (long long)participantStatus;
- (id)initWithName:(id)a0 emailAddress:(id)a1 phoneNumber:(id)a2 address:(id)a3 isCurrentUser:(BOOL)a4;

@end
