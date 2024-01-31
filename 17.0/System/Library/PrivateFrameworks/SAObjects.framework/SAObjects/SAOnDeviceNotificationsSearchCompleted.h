@class NSArray;

@interface SAOnDeviceNotificationsSearchCompleted : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *notifications;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
