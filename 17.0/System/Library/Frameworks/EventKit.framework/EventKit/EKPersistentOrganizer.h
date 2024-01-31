@class NSString;

@interface EKPersistentOrganizer : EKPersistentParticipant

@property (retain, nonatomic) NSString *displayNameRaw;
@property (retain, nonatomic) NSString *emailAddress;
@property (retain, nonatomic) NSString *URLString;
@property (nonatomic) BOOL isCurrentUser;

+ (id)relations;
+ (id)defaultPropertiesToLoad;
+ (Class)meltedClass;
+ (id)organizerWithName:(id)a0 emailAddress:(id)a1 address:(id)a2 isCurrentUser:(BOOL)a3;

- (id)owner;
- (void)setOwner:(id)a0;
- (int)entityType;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isCurrentUser;
- (void)setIsCurrentUser:(BOOL)a0;
- (id)initWithName:(id)a0 emailAddress:(id)a1 address:(id)a2 isCurrentUser:(BOOL)a3;
- (long long)scheduleAgent;
- (void)setScheduleAgent:(long long)a0;

@end
