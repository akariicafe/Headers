@interface SAUISuppressDelayFeedback : SABaseClientBoundCommand

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
