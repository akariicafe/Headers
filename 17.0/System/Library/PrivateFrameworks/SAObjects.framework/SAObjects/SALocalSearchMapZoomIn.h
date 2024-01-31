@interface SALocalSearchMapZoomIn : SADomainCommand

+ (id)mapZoomIn;
+ (id)mapZoomInWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
