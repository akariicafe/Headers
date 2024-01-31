@interface SAUISnippetDisplayConfigurationRequest : SABaseClientBoundCommand

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
