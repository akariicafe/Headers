@interface SASettingCommand : SADomainCommand

+ (id)command;
+ (id)commandWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
