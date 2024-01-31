@interface SAPostCalendarActivityNotification : SAPostPersonalDomainActivityNotification

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
