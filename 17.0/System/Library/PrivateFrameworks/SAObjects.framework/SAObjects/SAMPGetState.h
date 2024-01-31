@interface SAMPGetState : SADomainCommand

+ (id)getState;
+ (id)getStateWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)mutatingCommand;

@end
