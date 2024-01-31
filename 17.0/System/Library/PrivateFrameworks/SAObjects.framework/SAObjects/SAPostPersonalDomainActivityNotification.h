@class NSString;

@interface SAPostPersonalDomainActivityNotification : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *homeId;
@property (copy, nonatomic) NSString *notificationBody;
@property (copy, nonatomic) NSString *originatingDeviceName;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)mutatingCommand;

@end
