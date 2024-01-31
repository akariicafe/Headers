@interface SAMacOpenAboutThisMac : SADomainCommand

+ (id)openAboutThisMac;
+ (id)openAboutThisMacWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
