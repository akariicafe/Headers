@interface SAAXSkipBack : SADomainCommand

+ (id)skipBackWithDictionary:(id)a0 context:(id)a1;
+ (id)skipBack;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
