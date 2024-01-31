@interface WFReminderAccessResource : WFCalendarAccessResource

+ (BOOL)isSystemResource;

- (id)associatedAppIdentifier;
- (id)protectedResourceDescription;

@end
