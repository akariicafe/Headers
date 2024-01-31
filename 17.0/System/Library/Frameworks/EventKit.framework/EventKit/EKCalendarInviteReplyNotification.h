@interface EKCalendarInviteReplyNotification : EKCalendarNotification

@property (nonatomic) unsigned long long status;
@property (nonatomic) unsigned long long allowedEntityTypes;

- (id)initWithType:(long long)a0;
- (BOOL)acknowledgeWithEventStore:(id)a0 error:(id *)a1;
- (id)inviteReplyNotificationFromEventStore:(id)a0;

@end
