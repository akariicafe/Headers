@interface SALocalSearchNavigationEnd : SADomainCommand

+ (id)navigationEnd;
+ (id)navigationEndWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
