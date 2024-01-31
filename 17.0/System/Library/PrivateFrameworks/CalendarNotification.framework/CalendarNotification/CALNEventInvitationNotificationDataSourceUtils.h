@interface CALNEventInvitationNotificationDataSourceUtils : NSObject

+ (void)clearEventInvitationOfType:(int)a0 withSourceClientIdentifier:(id)a1 inEventStore:(id)a2 withNotificationReferenceProvider:(id)a3;
+ (id)eventForEventInvitation:(id)a0 inEventStore:(id)a1;
+ (id)eventForNotificationOfType:(int)a0 withSourceClientIdentifier:(id)a1 inEventStore:(id)a2 withNotificationReferenceProvider:(id)a3;
+ (id)expirationDateForEventInvitation:(id)a0;

@end
