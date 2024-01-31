@interface EKPersistentInviteReplyNotification : EKPersistentNotification

+ (id)relations;
+ (id)defaultPropertiesToLoad;
+ (Class)meltedClass;

- (void)setSummary:(id)a0;
- (id)creationDate;
- (id)summary;
- (void)setCreationDate:(id)a0;
- (int)entityType;
- (id)shareeFirstName;
- (id)shareeURLString;
- (BOOL)alerted;
- (id)inReplyTo;
- (id)inviteReplyCalendar;
- (void)setInReplyTo:(id)a0;
- (void)setInviteReplyCalendar:(id)a0;
- (void)setShareeDisplayName:(id)a0;
- (void)setShareeFirstName:(id)a0;
- (void)setShareeLastName:(id)a0;
- (void)setShareeStatus:(unsigned long long)a0;
- (void)setShareeURLString:(id)a0;
- (id)shareeDisplayName;
- (id)shareeLastName;
- (unsigned long long)shareeStatus;

@end
