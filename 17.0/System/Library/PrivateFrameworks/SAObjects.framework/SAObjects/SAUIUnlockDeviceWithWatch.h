@class NSArray;

@interface SAUIUnlockDeviceWithWatch : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *failureCommands;
@property (copy, nonatomic) NSArray *successCommands;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
