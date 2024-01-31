@interface SALocalSearchMapZoomOut : SADomainCommand

+ (id)mapZoomOut;
+ (id)mapZoomOutWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
