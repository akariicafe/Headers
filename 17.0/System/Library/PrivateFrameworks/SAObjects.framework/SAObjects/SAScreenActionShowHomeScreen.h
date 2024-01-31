@interface SAScreenActionShowHomeScreen : SABaseClientBoundCommand

+ (id)showHomeScreen;
+ (id)showHomeScreenWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
